using GoogleARCore;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;
using UnityEngine.UI;
using System.Collections.Generic;
using GoogleARCore.HelloAR;
using System.Collections;

/// <summary>
/// Controls the HelloAR example.
/// </summary>
public class TreasureHuntARController : MonoBehaviour
{
	/// <summary>
	/// The first-person camera being used to render the passthrough camera image (i.e. AR background).
	/// </summary>
	public Camera FirstPersonCamera;

	/// <summary>
	/// A prefab for tracking and visualizing detected planes.
	/// </summary>
	public GameObject TrackedPlanePrefab;

	/// <summary>
	/// A model to place when a raycast from a user touch hits a plane.
	/// </summary>
	public GameObject AndyAndroidPrefab;

	/// <summary>
	/// A gameobject parenting UI for displaying the "searching for planes" snackbar.
	/// </summary>
	public GameObject SearchingForPlaneUI;

	/// <summary>
	/// A list to hold new planes ARCore began tracking in the current frame. This object is used across
	/// the application to avoid per-frame allocations.
	/// </summary>
	private List<TrackedPlane> m_NewPlanes = new List<TrackedPlane>();

	/// <summary>
	/// A list to hold all planes ARCore is tracking in the current frame. This object is used across
	/// the application to avoid per-frame allocations.
	/// </summary>
	private List<TrackedPlane> m_AllPlanes = new List<TrackedPlane>();

	/// <summary>
	/// True if the app is in the process of quitting due to an ARCore connection error, otherwise false.
	/// </summary>
	private bool m_IsQuitting = false;

	public GameObject treasureChestPrefab;
	public GameObject clownPrefab;
	public Text debugText;

	private List<GameObject> spawnables;
	public ObjectManager objManager;
	private GameObject spawnChest;
	private int chestIndex=0;
	private List<GameObject> spawnableTrialList;

	private GameObject spawnObj;
	private List<Vector3> chestSpawnLocationList = new List<Vector3>();
	private List<GameObject> spawnedObjList = new List<GameObject>();
	private List<GameObject> retrievalSequenceList = new List<GameObject>();
	private List<GameObject> choiceSelectionList = new List<GameObject> ();
	private Object[] spawnArr;

	public GameObject choiceSelectionPrefab;
	public GameObject correctPositionIndicatorPrefab;
	//ui
	public Button beginTrialButton;
	public CanvasGroup retrievalPanelUIGroup;
	public Text retrievalText;
	public Button acceptUserResponseButton;
	public Vector3 playerPosition { get { return Frame.Pose.position; } }
	public Quaternion playerRotation { get { return Frame.Pose.rotation; } }

	private Touch touch;
	private bool userResponded=false;
	//A SINGLETON
	private static TreasureHuntARController _instance;

	public static TreasureHuntARController Instance {
		get {
			return _instance;
		}
	}
		
	void Awake()
	{
			if (_instance != null) {
				Debug.Log("Instance already exists!");
				return;
			}
			_instance = this;
		spawnables = new List<GameObject> ();
		spawnArr = Resources.LoadAll ("Prefabs/Objects");
		retrievalPanelUIGroup.alpha = 0f;
		beginTrialButton.gameObject.SetActive (true);
		acceptUserResponseButton.gameObject.SetActive (false);

	}
	/// <summary>
	/// The Unity Update() method.
	/// </summary>
	public void Update()
	{
		if (Input.GetKey(KeyCode.Escape))
		{
			Application.Quit();
		}
		_QuitOnConnectionErrors();

		// Check that motion tracking is tracking.
		if (Session.Status != SessionStatus.Tracking) {
			const int lostTrackingSleepTimeout = 15;
			Screen.sleepTimeout = lostTrackingSleepTimeout;
			if (!m_IsQuitting && Session.Status.IsValid ()) {
				SearchingForPlaneUI.SetActive (true);
			}

			return;
		} else {
			//				debugText.text = Frame.Pose.position.ToString ();
		}
		Screen.sleepTimeout = SleepTimeout.NeverSleep;

		// Iterate over planes found in this frame and instantiate corresponding GameObjects to visualize them.
		Session.GetTrackables<TrackedPlane>(m_NewPlanes, TrackableQueryFilter.New);
		for (int i = 0; i < m_NewPlanes.Count; i++)
		{
			// Instantiate a plane visualization prefab and set it to track the new plane. The transform is set to
			// the origin with an identity rotation since the mesh for our prefab is updated in Unity World
			// coordinates.
			GameObject planeObject = Instantiate(TrackedPlanePrefab, Vector3.zero, Quaternion.identity,
				transform);
			planeObject.GetComponent<TrackedPlaneVisualizer>().Initialize(m_NewPlanes[i]);
		}

		// Disable the snackbar UI when no planes are valid.
		Session.GetTrackables<TrackedPlane>(m_AllPlanes);
		bool showSearchingUI = true;
		for (int i = 0; i < m_AllPlanes.Count; i++)
		{
			if (m_AllPlanes[i].TrackingState == TrackingState.Tracking)
			{
				showSearchingUI = false;
				break;
			}
		}

		SearchingForPlaneUI.SetActive(showSearchingUI);


	}

	public IEnumerator RunTrial()
	{
		bool treasureFound = false;
		bool noTouch = false;
		//turn off the retrieval panel
		retrievalPanelUIGroup.alpha=0f;

		//make a simple spawnable list for this trial
		yield return StartCoroutine (MakeSpawnableList ());
//		yield return StartCoroutine (CreateChestLocationList ());
		//let's make sure we don't exceed the max spawnables 
		for(int i=0;i<Configuration.maxObjects;i++) {

			treasureFound = false;
			//spawn a treasure chest at a random location
			yield return StartCoroutine(SpawnTreasureChest(chestIndex));

			//wait until it's picked up, then spawn an object
			while (!treasureFound) {
				// If the player has not touched the screen, we are done with this update.

				if (Input.touchCount < 1 || (touch = Input.GetTouch (0)).phase != TouchPhase.Began) {
					noTouch = true;
				} else
					noTouch = false;

				if (!noTouch) {

					// Raycast against the location the player touched to search for planes.
					TrackableHit hit;
					TrackableHitFlags raycastFilter = TrackableHitFlags.PlaneWithinPolygon |
						TrackableHitFlags.FeaturePointWithSurfaceNormal;
					if (!EventSystem.current.IsPointerOverGameObject (touch.fingerId)) {
						if (Frame.Raycast (touch.position.x, touch.position.y, raycastFilter, out hit)) {

							if (Vector3.Distance (spawnChest.transform.position, hit.Pose.position) < 0.1f) {
//								debugText.text = debugText.text.Insert (0, "hit the chest \n");
//								debugText.text = debugText.text.Insert (0, Vector3.Distance (spawnChest.transform.position, hit.Pose.position).ToString () + " \n");

								yield return StartCoroutine (spawnChest.GetComponent<TreasureChest> ().Open (FirstPersonCamera.gameObject));
								yield return StartCoroutine (SpawnTreasure (spawnChest.transform.position, chestIndex));
								//set the text mesh to display the object name
								spawnChest.GetComponent<TreasureChest> ().SetItemText (spawnObj.GetComponent<SpawnableObject> ().GetName ());
								chestIndex++;

								//set treasure found as true so we can exit out of the while loop
								treasureFound = true;
							}

						}
					}
				}
				yield return 0;
			}

			//wait for the needed time
			yield return new WaitForSeconds (Configuration.presentationTime);

			//destroy the anchor and the chest
			Destroy (spawnChest.transform.parent.gameObject);

//			debugText.text = debugText.text.Insert (0, "spawn: " + spawnObj.gameObject.name.ToString ());
			//toggle visibility of the item
			spawnObj.GetComponent<VisibilityToggler>().TurnVisible(false);
		
		}

		//have a distractor task here


		//have the retrieval here
		//turn on the retrieval panel
		yield return StartCoroutine (PerformRetrieval ());

		//have feedback
		yield return StartCoroutine(ShowFeedback());

		retrievalText.text = "End trial";
		yield return new WaitForSeconds (1f);
		retrievalPanelUIGroup.alpha = 0f;
		beginTrialButton.gameObject.SetActive (true);
		yield return null;
	}

	IEnumerator MakeSpawnableList()
	{
		//clear any leftovers
		spawnables.Clear ();
		spawnedObjList.Clear ();
		retrievalSequenceList.Clear ();
		choiceSelectionList.Clear ();

		Configuration.maxObjects = spawnArr.Length; // 0 inclusive
		for (int i = 0; i < spawnArr.Length; i++) {
			spawnables.Add ((GameObject)spawnArr [i]);
		}

		int totalCount = spawnables.Count;
		spawnableTrialList = new List<GameObject> ();
		for(int i=0;i<totalCount;i++)
		{
			int randInt = Random.Range (0, spawnables.Count);
			spawnableTrialList.Add (spawnables [randInt]);	
			debugText.text=debugText.text.Insert (0, spawnables [randInt].ToString () + "\n");
			spawnables.RemoveAt (randInt);
		}
		debugText.text=debugText.text.Insert(0,spawnableTrialList.Count.ToString() + "\n");

		//reset chest index
		chestIndex=0;
		yield return null;
			
	}
	IEnumerator CreateChestLocationList()
	{
		chestSpawnLocationList.Clear ();
		//instantiate them all to the last recorded device position
		for (int j = 0; j < Configuration.maxObjects; j++) {
			Vector3 tempVec = Frame.Pose.position;
			chestSpawnLocationList.Add (tempVec);
		}
		for (int i = 0; i < Configuration.maxObjects; i++) {
			chestSpawnLocationList [i] = GetRandomPosition ();
			while (!CheckSufficientDistanceBetweenChests (chestSpawnLocationList[i],chestSpawnLocationList,i)) {
				yield return 0;
			}
		}

		yield return null;
	}

	private bool CheckSufficientDistanceBetweenChests(Vector3 chestLocation, List<Vector3> chestLocationList,int currentIndex)
	{
		for (int i = 0; i < chestLocationList.Count; i++) {
			if (i != currentIndex) {
				if (Vector3.Distance (chestLocation, chestLocationList [i]) < 0.1f)
					return false;
			}
		}
		return true;
	}

	private Vector3 GetRandomPosition()
	{
		Session.GetTrackables<TrackedPlane>(m_AllPlanes);
		// Pick a location.  This is done by selecting a vertex at random and then
		// a random point between it and the center of the plane.
		List<Vector3> vertices = new List<Vector3> ();

		m_AllPlanes[0].GetBoundaryPolygon (vertices);
		Vector3 pt = vertices [Random.Range (0, vertices.Count)];
		float dist = Random.Range (0.05f, 1f);
		Vector3 position = Vector3.Lerp (pt, m_AllPlanes[0].CenterPose.position, dist);
		// Move the object above the plane.
		position.y += .05f;
		return position;
	}

	private Vector3 GetChestPosition(int chestInt)
	{
		return chestSpawnLocationList [chestInt];
	}

	public void BeginTrial()
	{
		beginTrialButton.gameObject.SetActive (false);
		StartCoroutine ("RunTrial");
	}

	public IEnumerator SpawnTreasureChest(int chestIndex)
	{
		Session.GetTrackables<TrackedPlane>(m_AllPlanes);
		Vector3 position = GetRandomPosition ();
		int randInt = Random.Range (0, m_AllPlanes.Count);
//		Vector3 position = GetChestPosition (chestIndex);
		Anchor anchor = m_AllPlanes [randInt].CreateAnchor (new Pose (position, Quaternion.identity));
		spawnChest = Instantiate(treasureChestPrefab,position,Quaternion.identity,anchor.transform);
		//			var spawnObject = Instantiate(spawnables[randSpawnable], position,Quaternion.identity,anchor.transform);

		//				spawnObject.transform.localScale = new Vector3 (.025f, .025f, .025f);
		spawnChest.transform.SetParent(anchor.transform);
//		debugText.text=debugText.text.Insert(0,"spawned chest \n");

		yield return null;
	}


	public IEnumerator SpawnTreasure(Vector3 chestPosition, int chestIndex)
	{
		Session.GetTrackables<TrackedPlane>(m_AllPlanes);
		Anchor anchor = m_AllPlanes [0].CreateAnchor (new Pose (chestPosition, Quaternion.identity));
		spawnObj = Instantiate(spawnableTrialList[chestIndex],new Vector3(chestPosition.x,chestPosition.y+0.1f,chestPosition.z),Quaternion.identity,anchor.transform);
		spawnObj.transform.SetParent(anchor.transform);
//		debugText.text=debugText.text.Insert(0,"spawned " + spawnObj.gameObject.name + "\n" );

		//add to the spawn obj list
		spawnedObjList.Add(spawnObj);


		yield return null;
	}

	IEnumerator PerformRetrieval()
	{

		bool noTouch = false;
		bool retrievalChoiceMade = false;
		retrievalPanelUIGroup.alpha=1f;
		for (int i = 0; i < Configuration.maxObjects; i++) {
			int randInt = Random.Range (0, spawnedObjList.Count);
			retrievalSequenceList.Add (spawnedObjList [randInt]);
			spawnedObjList.RemoveAt (randInt);
		}

		for(int j=0;j<retrievalSequenceList.Count;j++)
		{
			retrievalChoiceMade = false;
			string displayName = retrievalSequenceList [j].GetComponent<SpawnableObject> ().GetName ();
			retrievalText.text = "Where did you find the " + displayName + "?";

			debugText.text = debugText.text.Insert (0, displayName + " pos: " + retrievalSequenceList [j].transform.position.ToString ());

			//wait until it's picked up, then spawn an object
			while (!retrievalChoiceMade) {
				// If the player has not touched the screen, we are done with this update.

				if (Input.touchCount < 1 || (touch = Input.GetTouch (0)).phase != TouchPhase.Began) {
					noTouch = true;
				} else
					noTouch = false;

				if (!noTouch) {
					TrackableHit hit;
					TrackableHitFlags raycastFilter = TrackableHitFlags.PlaneWithinPolygon |
						TrackableHitFlags.FeaturePointWithSurfaceNormal;
					if (!EventSystem.current.IsPointerOverGameObject (touch.fingerId)) {
						if (Frame.Raycast (touch.position.x, touch.position.y, raycastFilter, out hit)) {

							Anchor anchor = m_AllPlanes [0].CreateAnchor (new Pose (hit.Pose.position, Quaternion.identity));
							GameObject choiceObj = Instantiate (choiceSelectionPrefab, hit.Pose.position, Quaternion.identity, anchor.transform);
			
							choiceSelectionList.Add (choiceObj);

							//wait to show their choice, then make it invisible
							yield return new WaitForSeconds (1f);
							choiceObj.GetComponent<VisibilityToggler> ().TurnVisible (false);
								//choice made bool set to true so we can exit out of the loop
								retrievalChoiceMade = true;

						}
					}
				}
				yield return 0;
			}
		}
		yield return null;
	}

	IEnumerator ShowFeedback()
	{
		Color lineColor = Color.red; //wrong by default
		List<GameObject> correctPositionIndicatorList = new List<GameObject> ();
		retrievalText.text = "Showing feedback...";
		debugText.text=debugText.text.Insert(0, "retseq count : " + retrievalSequenceList.Count.ToString() + "\n");
		//make all the spawned objects and choice selection visible
		for (int i = 0; i < retrievalSequenceList.Count; i++) {
			
			//reset the line color first
			lineColor = Color.red;


			if (retrievalSequenceList [i].GetComponent<VisibilityToggler> () != null) {
				debugText.text = debugText.text.Insert (0, retrievalSequenceList[i].gameObject.name + " pos: " + retrievalSequenceList [i].transform.position.ToString ());
				retrievalSequenceList [i].GetComponent<VisibilityToggler> ().TurnVisible (true);
				//instantiate a correct position indicator
				GameObject correctPositionIndicator = Instantiate(correctPositionIndicatorPrefab, new Vector3(retrievalSequenceList[i].transform.position.x,retrievalSequenceList[i].transform.position.y-0.1f,retrievalSequenceList[i].transform.position.z),Quaternion.identity) as GameObject;
				//now determine if the response was within range
				float responseDistance = Vector3.Distance (retrievalSequenceList [i].transform.position, choiceSelectionList [i].transform.position);
				debugText.text = debugText.text.Insert (0, "response distance: " + responseDistance.ToString ());
					if (responseDistance < 0.1f) {
					lineColor = Color.green;
				}
				correctPositionIndicator.GetComponent<MeshRenderer> ().material.color = lineColor;
				correctPositionIndicatorList.Add(correctPositionIndicator);
			}
				else
				debugText.text = debugText.text.Insert (0, retrievalSequenceList [i].gameObject.name + " has viztoggle null \n");
		}
		for (int j = 0; j < choiceSelectionList.Count; j++) {
			if(choiceSelectionList [j].GetComponent<VisibilityToggler> ()!=null)
				choiceSelectionList [j].GetComponent<VisibilityToggler> ().TurnVisible (true);
			else
				debugText.text = debugText.text.Insert (0, choiceSelectionList [j].gameObject.name + " has viztoggle null \n");
		}
		debugText.text=debugText.text.Insert(0, "now waiting for four seconds \n");


		acceptUserResponseButton.gameObject.SetActive (true);
		//wait for user input
		yield return StartCoroutine(WaitForUserInput());

		acceptUserResponseButton.gameObject.SetActive (false);
		//then destroy them
		for (int i = 0; i < retrievalSequenceList.Count; i++) {
			if (retrievalSequenceList [i].transform.parent != null)
				Destroy (retrievalSequenceList [i].transform.parent.gameObject);
			else
				Destroy (retrievalSequenceList [i].gameObject);
		}
		for (int j = 0; j < choiceSelectionList.Count; j++) {
			if (choiceSelectionList [j].transform.parent != null)
				Destroy (choiceSelectionList [j].transform.parent.gameObject);
			else
				Destroy (choiceSelectionList [j].gameObject);
		}
		for (int k = 0; k < correctPositionIndicatorList.Count; k++) {
			Destroy (correctPositionIndicatorList [k].gameObject);
		}
		yield return null;
	}



	public void AcceptUserResponse()
	{
		userResponded = true;
	}

	public IEnumerator WaitForUserInput()
	{
		bool shouldWait = true;
		while (shouldWait) {
			if (userResponded)
				shouldWait = false;
			yield return 0;
		}

		userResponded = false;
		yield return null;
	}



//	public void SpawnSurprise()
//	{
//		Session.GetTrackables<TrackedPlane>(m_AllPlanes);
//		int randInt = Random.Range (0, m_AllPlanes.Count);
//		Vector3 position = GetRandomPosition (randInt);
//		Anchor anchor = m_AllPlanes [randInt].CreateAnchor (new Pose (position, Quaternion.identity));
//		var spawnObject = Instantiate(clownPrefab, position,Quaternion.identity,anchor.transform);
//
//		//				spawnObject.transform.localScale = new Vector3 (.025f, .025f, .025f);
//		spawnObject.transform.SetParent(anchor.transform);
//
//	}


	/// <summary>
	/// Quit the application if there was a connection error for the ARCore session.
	/// </summary>
	private void _QuitOnConnectionErrors()
	{
		if (m_IsQuitting)
		{
			return;
		}

		// Quit if ARCore was unable to connect and give Unity some time for the toast to appear.
		if (Session.Status == SessionStatus.ErrorPermissionNotGranted)
		{
			_ShowAndroidToastMessage("Camera permission is needed to run this application.");
			m_IsQuitting = true;
			Invoke("_DoQuit", 0.5f);
		}
		else if (Session.Status.IsError())
		{
			_ShowAndroidToastMessage("ARCore encountered a problem connecting.  Please start the app again.");
			m_IsQuitting = true;
			Invoke("_DoQuit", 0.5f);
		}
	}

	/// <summary>
	/// Actually quit the application.
	/// </summary>
	private void _DoQuit()
	{
		Application.Quit();
	}

	/// <summary>
	/// Show an Android toast message.
	/// </summary>
	/// <param name="message">Message string to show in the toast.</param>
	private void _ShowAndroidToastMessage(string message)
	{
		AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaObject unityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");

		if (unityActivity != null)
		{
			AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
			unityActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
				{
					AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity,
						message, 0);
					toastObject.Call("show");
				}));
		}
	}
}