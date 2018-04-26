using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.XR.iOS;
public class World_ARKit : MonoBehaviour {
	public Camera FirstPersonCamera;
	public GameObject treePrefab;
	public Text debugText;
	//ui
	public Button beginTrialButton;
	public CanvasGroup beginTrialPanelUIGroup;
	public Button acceptUserResponseButton;
	public Toggle debugVisualsToggle;


	//debug visuals
	public PointCloudParticleExample pointCloudManager;
	public bool debugVisuals=false;

	private GameObject currentChest;


	private Touch touch;
	private bool userResponded=false;

	//arkit components
	public UnityARCameraManager arCamManager;
	public UnityARGeneratePlane arGenPlane;

	public Transform m_HitTransform;
	public float maxRayDistance = 30.0f;
	public LayerMask collisionLayer = 1 << 10;  //ARKitPlane layer

	private GameObject spawnedModel;
	public List<GameObject> spawnedTrees= new List<GameObject>();
	private bool trialRunning=false;
	//A SINGLETON
	private static World_ARKit _instance;

	public static World_ARKit Instance {
		get {
			return _instance;
		}
	}

	void Awake()
	{
		if (_instance != null) {
			Debug.Log ("Instance already exists!");
			return;
		}
		_instance = this;

		beginTrialPanelUIGroup.alpha = 1f;
		acceptUserResponseButton.gameObject.SetActive (false);

		debugVisuals = debugVisualsToggle.isOn;
	}
	// Use this for initialization
	void Start () {
		debugVisuals = true;
		//		ChangeDebugVisualsStatus(true);
	}

	// Update is called once per frame
	void Update () {

	}

	bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes,out GameObject hitObj)
	{
		hitObj = new GameObject ();
		List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
		if (hitResults.Count > 0) {
			foreach (var hitResult in hitResults) {
				Debug.Log ("Got hit!");
				//output the hit position,
				//NOTE: ONLY THE LAST HIT WILL OUTPUT
				hitObj.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
				hitObj.transform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
				//				Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
				return true;
			}
		} 
		return false;
	}


	IEnumerator RunTrial()
	{
		while (trialRunning) {
			if (Input.touchCount > 0) {
				var touch = Input.GetTouch (0);
				Debug.Log ("got a touch");
				if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved) {
					var screenPosition = Camera.main.ScreenToViewportPoint (touch.position);
					ARPoint point = new ARPoint {
						x = screenPosition.x,
						y = screenPosition.y
					};

					// prioritize results types
					ARHitTestResultType[] resultTypes = {
						//ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingGeometry,
						ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
						// if you want to use infinite planes use this:
						//ARHitTestResultType.ARHitTestResultTypeExistingPlane,
						//ARHitTestResultType.ARHitTestResultTypeEstimatedHorizontalPlane, 
						//ARHitTestResultType.ARHitTestResultTypeEstimatedVerticalPlane, 
						//ARHitTestResultType.ARHitTestResultTypeFeaturePoint
					}; 

					foreach (ARHitTestResultType resultType in resultTypes) {
						GameObject hitObj = new GameObject ();
						if (HitTestWithResultType (point, resultType, out hitObj)) {
							yield return StartCoroutine (SpawnTree ());
						}

					}
				}
			}
			yield return 0;
		}
		yield return null;
	}
	private Vector3 GetRandomPosition(int randInt,out int randPlaneIndex)
	{
		//Debug.Log ("getting a random position");
		//Session.GetTrackables<TrackedPlane>(m_AllPlanes);
		// Pick a location.  This is done by selecting a vertex at random and then
		// a random point between it and the center of the plane.
		UnityARAnchorManager arAnchorManager = arGenPlane.GetAnchorManager ();
		//Debug.Log ("got anchor manager");
		LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors ();
		//Debug.Log ("got anchor obj linked list");

		//set it to the default first value
		ARPlaneAnchor planeAnchor= arPlaneAnchors.First.Value.planeAnchor;
		randPlaneIndex = Random.Range (0, arPlaneAnchors.Count);
		int currentIndex = 0;
		foreach (var plane in arPlaneAnchors) {
			if (currentIndex == randPlaneIndex) {
				planeAnchor = plane.planeAnchor;
			}
			currentIndex++;
		}
		//Debug.Log ("got first plane anchor with center " + planeAnchor.center.ToString());
		Vector3[] vertices = planeAnchor.planeGeometry.boundaryVertices;
		//Debug.Log ("vertex count: " + vertices.Length.ToString ());
		Vector3 pt = vertices [Random.Range (0, vertices.Length)];
		float dist = Random.Range (0.05f, 1f);
		Vector3 position = Vector3.Lerp (pt, planeAnchor.center, dist); //add center pose of the plane here in the to 
		// Move the object above the plane.
		//		position.y += .05f;
		//Debug.Log("returning random position: " + position.ToString());
		return position;
	}
	IEnumerator SpawnTree()
	{
		int randPlane = 0;
		Matrix4x4 matrix = arCamManager.GetCurrentPose();
		UnityARAnchorManager arAnchorManager = arGenPlane.GetAnchorManager ();

		LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors ();
		int planeCount = arAnchorManager.GetPlaneCount ();
		//instantiate them all to the last recorded device position and first available plane
		Vector3 spawnPos = GetRandomPosition (Random.Range(0,planeCount),out randPlane);
		int spawnPlaneIndex = randPlane;
		ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;
		int currentIndex = 0;
		foreach(var plane in arPlaneAnchors)
		{
			if (currentIndex == spawnPlaneIndex) {
				planeAnchor = plane;
			}
			currentIndex++;
		}


		Vector3 position = spawnPos;
		Vector3 planeRotation = planeAnchor.gameObject.transform.rotation.eulerAngles;
		Vector3 modChestRot = new Vector3 (planeRotation.x, planeRotation.y, -planeRotation.z);
		//Anchor anchor = m_AllPlanes [randInt].CreateAnchor (new Pose (position, Quaternion.identity));
		spawnedModel = Instantiate(treePrefab,position,Quaternion.Euler(modChestRot)) as GameObject;
		spawnedModel.transform.parent =  planeAnchor.gameObject.transform;
		spawnedModel.transform.localPosition = position;
		spawnedModel.transform.parent = null;
		spawnedTrees.Add (spawnedModel);
		//Debug.Log ("about to set current chest ref");
		yield return null;
	}

	public void BeginTrial()
	{
		beginTrialPanelUIGroup.alpha = 0f;
		trialRunning = true;
		StartCoroutine ("RunTrial");
	}

	public void ChangeScene(int sceneIndex)
	{
		trialRunning = false;
		for (int i = 0; i < spawnedTrees.Count; i++) {
			Destroy (spawnedTrees [i]);
		}
		SceneManager.LoadScene (sceneIndex,LoadSceneMode.Single);

	}

}
