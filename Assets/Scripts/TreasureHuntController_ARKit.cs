using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;
using System.Collections;
using UnityEngine.XR.iOS;
using UnityEngine.SceneManagement;
public class TreasureHuntController_ARKit : MonoBehaviour {

	public Camera FirstPersonCamera;
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
	public List<int> spawnPlaneIndexList = new List<int>();
	private List<GameObject> spawnedObjList = new List<GameObject>();
	private List<GameObject> retrievalSequenceList = new List<GameObject>();
	private List<GameObject> choiceSelectionList = new List<GameObject> ();
	private List<bool> correctResponseList= new List<bool>();
	private Object[] spawnArr;

	public GameObject choiceSelectionPrefab;
	public GameObject correctPositionIndicatorPrefab;
	//ui
	public Button beginTrialButton;
	public CanvasGroup beginTrialPanelUIGroup;
	public CanvasGroup retrievalPanelUIGroup;
	public CanvasGroup scorePanelUIGroup;
	public Text retrievalText;
	public Button acceptUserResponseButton;
	public Toggle debugVisualsToggle;


	//debug visuals
	public PointCloudParticleExample pointCloudManager;
	public bool debugVisuals=false;

	private GameObject currentChest;

	//scoring
	private int totalScore = 0;

	//navigation feature
	public bool canNavigate=false;
	public Toggle canNavigateToggle;

	private Touch touch;
	private bool userResponded=false;

	//arkit components
	public UnityARCameraManager arCamManager;
	public UnityARGeneratePlane arGenPlane;

	public Transform m_HitTransform;
	public float maxRayDistance = 30.0f;
	public LayerMask collisionLayer = 1 << 10;  //ARKitPlane layer
	//A SINGLETON
	private static TreasureHuntController_ARKit _instance;

	public static TreasureHuntController_ARKit Instance {
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
		scorePanelUIGroup.alpha = 0f;
		beginTrialPanelUIGroup.alpha = 1f;
		acceptUserResponseButton.gameObject.SetActive (false);

		debugVisuals = debugVisualsToggle.isOn;

	

	}
	// Use this for initialization
	void Start () {
		debugVisuals = true;
//		ChangeDebugVisualsStatus(true);
		UpdateNavigationStatus ();
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

	// Update is called once per frame
	void FixedUpdate () {

		if (canNavigate && spawnChest != null) {
			Matrix4x4 camMatrix = arCamManager.GetCurrentPose ();
			Vector3 camPos = UnityARMatrixOps.GetPosition (camMatrix);
			float distance = Vector3.Distance (spawnChest.transform.position, camPos);
			float distanceLeft = Mathf.Clamp(distance - Configuration.minResponseDistance,-0.1f,Configuration.minResponseDistance);
//			debugText.text = "Distance: " + distance.ToString() + " \n" + "Distance Left: " + distanceLeft.ToString ();
			spawnChest.gameObject.GetComponent<TreasureChest> ().UpdateDistanceBar (distanceLeft);
		}

//		if (Input.touchCount > 0 && m_HitTransform != null)
//		{
//			var touch = Input.GetTouch(0);
//			if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
//			{
//				var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
//				ARPoint point = new ARPoint {
//					x = screenPosition.x,
//					y = screenPosition.y
//				};
//
//				// prioritize results types
//				ARHitTestResultType[] resultTypes = {
//					//ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingGeometry,
//					ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
//					// if you want to use infinite planes use this:
//					//ARHitTestResultType.ARHitTestResultTypeExistingPlane,
//					//ARHitTestResultType.ARHitTestResultTypeEstimatedHorizontalPlane, 
//					//ARHitTestResultType.ARHitTestResultTypeEstimatedVerticalPlane, 
//					//ARHitTestResultType.ARHitTestResultTypeFeaturePoint
//				}; 
//
//				foreach (ARHitTestResultType resultType in resultTypes)
//				{
//					if (HitTestWithResultType (point, resultType))
//					{
//						return;
//					}
//				}
//			}
//		}

	}



	public IEnumerator RunTrial()
	{
		Debug.Log ("trial has BEGUN!");
		bool treasureFound = false;
		bool noTouch = false;
		//turn off the retrieval panel, if it hasn't been already
		retrievalPanelUIGroup.alpha=0f;

		//turn off debug visuals
		ChangeDebugVisualsStatus(false);


		//make a simple spawnable list for this trial
		yield return StartCoroutine (MakeSpawnableList ());
		yield return StartCoroutine (CreateChestLocationList ());
		//let's make sure we don't exceed the max spawnables 
		for(int i=0;i<Configuration.maxObjects;i++) {

			treasureFound = false;
			//spawn a treasure chest at a random location
			Debug.Log("about to spawn chest");
			yield return StartCoroutine(SpawnTreasureChest(chestIndex));

			//wait until it's picked up, then spawn an object
			while (!treasureFound) {
				// If the player has not touched the screen, we are done with this update.

//				if (Input.touchCount < 1 || (touch = Input.GetTouch (0)).phase != TouchPhase.Began) {
////					Debug.Log ("NO TOUCH");
//
//					noTouch = true;
//				} else
//					noTouch = false;

//				if (!noTouch) {

					// Raycast against the location the player touched to search for planes.
//					Debug.Log("MIGHT have a touch");
				if (spawnChest != null) {

					Matrix4x4 camMatrix = arCamManager.GetCurrentPose ();
					Vector3 camPos = UnityARMatrixOps.GetPosition (camMatrix);
					float distance = Vector3.Distance (spawnChest.transform.position, camPos);
//					debugText.text = distance.ToString ();
				} else {
//					debugText.text = "No chest exists";
				}
						if (Input.touchCount > 0)
						{
							var touch = Input.GetTouch(0);
							Debug.Log ("got a touch");
							if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
							{
								var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
								ARPoint point = new ARPoint {
									x = screenPosition.x,
									y = screenPosition.y
								};
								Debug.Log ("new ar point: " + point.ToString ());
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

								foreach (ARHitTestResultType resultType in resultTypes)
								{
							GameObject hitObj = new GameObject ();
							if (HitTestWithResultType (point, resultType,out hitObj))
									{
								
//										Debug.Log ("GOT A HIT");
//										Debug.Log ("opening a chest");
								bool canOpen=false;
								Matrix4x4 camMatrix = arCamManager.GetCurrentPose ();
								Vector3 camPos = UnityARMatrixOps.GetPosition (camMatrix);
								float distance = Vector3.Distance (spawnChest.transform.position, camPos);
//								Debug.Log("hit distance is: " + distance.ToString ());
								if (!canNavigate) {
									canOpen = true;
								} else {
									float distanceLeft = Mathf.Clamp(distance - Configuration.minResponseDistance,-0.1f,Configuration.minResponseDistance);
									debugText.text = distanceLeft.ToString ();
									spawnChest.gameObject.GetComponent<TreasureChest> ().UpdateDistanceBar (distanceLeft);
									if (distanceLeft < 0f) {
										canOpen = true;
									}
								}
								if (canOpen) {
									yield return StartCoroutine (spawnChest.GetComponent<TreasureChest> ().Open (FirstPersonCamera.gameObject));
									yield return StartCoroutine (SpawnTreasure (spawnChest.transform, chestIndex));
									spawnObj.GetComponent<VisibilityToggler> ().TurnVisible (true);
									//set the text mesh to display the object name
									spawnChest.GetComponent<TreasureChest> ().SetItemText (spawnObj.GetComponent<SpawnableObject> ().GetName ());
									chestIndex++;
									//set treasure found as true so we can exit out of the while loop
									treasureFound = true;
								} else
									Debug.Log ("cannot open yet");
									}
								}
//							}
								
							}

						}
				yield return 0;
			}

			//wait for the needed time
			yield return new WaitForSeconds (Configuration.presentationTime);

			//destroy only the spawned chest
			Destroy (spawnChest);

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
		beginTrialPanelUIGroup.alpha = 1f;
		ChangeDebugVisualsStatus (true);
		yield return null;
	}

	IEnumerator MakeSpawnableList()
	{

		//Debug.Log ("making spawnable lists");
		//clear any leftovers
		spawnables.Clear ();
		spawnedObjList.Clear ();
		retrievalSequenceList.Clear ();
		choiceSelectionList.Clear ();
		spawnPlaneIndexList.Clear ();

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
			//Debug.Log ("adding: " + spawnables [randInt].ToString ());
			//debugText.text=debugText.text.Insert (0, spawnables [randInt].ToString () + "\n");
			spawnables.RemoveAt (randInt);
		}
		//Debug.Log ("total spawnables: " + spawnableTrialList.Count.ToString ());
		//debugText.text=debugText.text.Insert(0,spawnableTrialList.Count.ToString() + "\n");

		//reset chest index
		chestIndex=0;
		yield return null;

	}
	IEnumerator CreateChestLocationList()
	{
		//Debug.Log ("creating chest locations");
		int randPlane = 0;
		chestSpawnLocationList.Clear ();
		Matrix4x4 matrix = arCamManager.GetCurrentPose();
		UnityARAnchorManager arAnchorManager = arGenPlane.GetAnchorManager ();
		int planeCount = arAnchorManager.GetPlaneCount ();
		//instantiate them all to the last recorded device position and first available plane
		for (int j = 0; j < Configuration.maxObjects; j++) {
			Vector3 tempPos = UnityARMatrixOps.GetPosition (matrix);
			chestSpawnLocationList.Add (tempPos);
			spawnPlaneIndexList.Add (0);
		}
		for (int i = 0; i < Configuration.maxObjects; i++) {
			chestSpawnLocationList [i] = GetRandomPosition (Random.Range(0,planeCount),out randPlane);
			spawnPlaneIndexList [i] = randPlane;
			while (!CheckSufficientDistanceBetweenChests (chestSpawnLocationList[i],chestSpawnLocationList,i)) {
				chestSpawnLocationList [i] = GetRandomPosition (Random.Range(0,planeCount),out randPlane);
				spawnPlaneIndexList [i] = randPlane;
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

	private int GetPlaneIndex(int chestInt)
	{
		return spawnPlaneIndexList [chestInt];
	}

	private Vector3 GetChestPosition(int chestInt)
	{
		Debug.Log ("returned chest position: " + chestSpawnLocationList [chestInt].ToString());
		return chestSpawnLocationList [chestInt];
	}

	public void BeginTrial()
	{
		beginTrialPanelUIGroup.alpha = 0f;
		StartCoroutine ("RunTrial");
	}

	public IEnumerator SpawnTreasureChest(int chestIndex)
	{
		Debug.Log ("spawning chest number: " + chestIndex.ToString ());

		//reset current chest reference
		currentChest = null;

		//Session.GetTrackables<TrackedPlane>(m_AllPlanes);
		//int randInt = Random.Range (0, m_AllPlanes.Count);
		//		Vector3 position = GetRandomPosition (randInt);


		int planeIndex = GetPlaneIndex (chestIndex);
		UnityARAnchorManager arAnchorManager = arGenPlane.GetAnchorManager ();
		LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors ();

		ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;
		int currentIndex = 0;
		foreach(var plane in arPlaneAnchors)
		{
			if (currentIndex == planeIndex) {
				planeAnchor = plane;
			}
			currentIndex++;
		}


		Vector3 position = GetChestPosition (chestIndex);
		Vector3 planeRotation = planeAnchor.gameObject.transform.rotation.eulerAngles;
		Vector3 modChestRot = new Vector3 (planeRotation.x, planeRotation.y, -planeRotation.z);
		//Anchor anchor = m_AllPlanes [randInt].CreateAnchor (new Pose (position, Quaternion.identity));
		spawnChest = Instantiate(treasureChestPrefab,position,Quaternion.Euler(modChestRot)) as GameObject;
		spawnChest.transform.parent =  planeAnchor.gameObject.transform;
		spawnChest.transform.localPosition = position;
		spawnChest.transform.parent = null;
		//Debug.Log ("about to set current chest ref");
		currentChest = spawnChest;

		ARAnchor anchor = spawnChest.GetComponent<ARAnchor> ();
		//			var spawnObject = Instantiate(spawnables[randSpawnable], position,Quaternion.identity,anchor.transform);

		//				spawnObject.transform.localScale = new Vector3 (.025f, .025f, .025f);
		//spawnChest.transform.SetParent(anchor.transform);
		//		debugText.text=debugText.text.Insert(0,"spawned chest \n");

		yield return null;
	}


	public IEnumerator SpawnTreasure(Transform chestTransform, int chestIndex)
	{
		//Session.GetTrackables<TrackedPlane>(m_AllPlanes);
		//Anchor anchor = m_AllPlanes [0].CreateAnchor (new Pose (chestPosition, Quaternion.identity));

		if (currentChest != null) {
			spawnObj = Instantiate (spawnableTrialList [chestIndex], Vector3.zero, Quaternion.identity);
			spawnObj.transform.parent = currentChest.transform;
			spawnObj.transform.rotation = currentChest.transform.rotation;
			spawnObj.transform.localPosition = Vector3.zero;
			spawnObj.transform.parent = null;
			//		debugText.text=debugText.text.Insert(0,"spawned " + spawnObj.gameObject.name + "\n" );

			//add to the spawn obj list
			spawnedObjList.Add (spawnObj);
		} else
			Debug.Log ("no chest exists currently");


		yield return null;
	}

	IEnumerator PerformRetrieval()
	{

		bool noTouch = false;
		bool retrievalChoiceMade = false;
		retrievalPanelUIGroup.alpha=1f;
		for (int i = 0; i < Configuration.maxObjects; i++) {
			int randInt = Random.Range (0, spawnedObjList.Count);
			//Debug.Log ("adding to the retrieval sequence list");
			retrievalSequenceList.Add (spawnedObjList [randInt]);
			spawnedObjList.RemoveAt (randInt);
		}

		for(int j=0;j<retrievalSequenceList.Count;j++)
		{
			retrievalChoiceMade = false;

			string displayName = retrievalSequenceList [j].GetComponent<SpawnableObject> ().GetName ();
			retrievalText.text = "Where did you find the " + displayName + "?";

//			debugText.text = debugText.text.Insert (0, displayName + " pos: " + retrievalSequenceList [j].transform.position.ToString ());

			//wait until it's picked up, then spawn an object
			while (!retrievalChoiceMade) {
				// If the player has not touched the screen, we are done with this update.

//				if (Input.touchCount < 1 || (touch = Input.GetTouch (0)).phase != TouchPhase.Began) {
//					noTouch = true;
//				} else
//					noTouch = false;

//				if (!noTouch) {

				if (Input.touchCount > 0)
				{
					var touch = Input.GetTouch(0);
					Debug.Log ("got a touch");
					if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
					{
								var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
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

								foreach (ARHitTestResultType resultType in resultTypes)
								{
							GameObject hitObj = new GameObject ();
							if (HitTestWithResultType (point, resultType, out hitObj))
									{
										//Anchor anchor = m_AllPlanes [0].CreateAnchor (new Pose (hit.Pose.position, Quaternion.identity));
								Debug.Log("hit position is: " + hitObj.transform.position.ToString());
								GameObject choiceObj = Instantiate (choiceSelectionPrefab, hitObj.transform.position, hitObj.transform.rotation);
								choiceSelectionList.Add (choiceObj);

										//wait to show their choice, then make it invisible
										yield return new WaitForSeconds (1f);
										choiceObj.GetComponent<VisibilityToggler> ().TurnVisible (false);
										//choice made bool set to true so we can exit out of the loop
										retrievalChoiceMade = true;
									}
								}
							}
						}
						
//				}
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
		Debug.Log("retseq count : " + retrievalSequenceList.Count.ToString());
		//make all the spawned objects and choice selection visible
		for (int i = 0; i < retrievalSequenceList.Count; i++) {

			//reset the line color first
			lineColor = Color.red;


			if (retrievalSequenceList [i].GetComponent<VisibilityToggler> () != null) {
				Debug.Log(retrievalSequenceList[i].gameObject.name + " pos: " + retrievalSequenceList [i].transform.position.ToString ());
				retrievalSequenceList [i].GetComponent<VisibilityToggler> ().TurnVisible (true);
				//instantiate a correct position indicator
				GameObject correctPositionIndicator = Instantiate(correctPositionIndicatorPrefab, Vector3.zero,Quaternion.identity) as GameObject;
				correctPositionIndicator.transform.parent = retrievalSequenceList [i].gameObject.transform;
				correctPositionIndicator.transform.localPosition = Vector3.zero;
				//now determine if the response was within range
				float responseDistance = Vector3.Distance (retrievalSequenceList [i].transform.position, choiceSelectionList [i].transform.position);
				Debug.Log("response distance: " + responseDistance.ToString ());
				if (responseDistance < Configuration.minResponseDistance) {
					lineColor = Color.green;
					correctResponseList.Add (true);
				} else
					correctResponseList.Add (false);
				correctPositionIndicator.GetComponent<MeshRenderer> ().material.color = lineColor;
				correctPositionIndicatorList.Add(correctPositionIndicator);
			}
			else
				Debug.Log(retrievalSequenceList [i].gameObject.name + " has viztoggle null");
		}
		for (int j = 0; j < choiceSelectionList.Count; j++) {
			if(choiceSelectionList [j].GetComponent<VisibilityToggler> ()!=null)
				choiceSelectionList [j].GetComponent<VisibilityToggler> ().TurnVisible (true);
			else
				Debug.Log(choiceSelectionList [j].gameObject.name + " has viztoggle null ");
		}
		Debug.Log("now waiting for user input");

		//wait for few seconds before showing the scoreboard
		yield return new WaitForSeconds(2f);
		//prepare scoreboard
		yield return StartCoroutine (PrepareScoreboard ());

		retrievalPanelUIGroup.alpha = 0f;
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

		//disable scoreboard and clear response list
		scorePanelUIGroup.alpha=0f;
		correctResponseList.Clear ();
		yield return null;
	}

	IEnumerator PrepareScoreboard()
	{
		int itemScore = 0;
		scorePanelUIGroup.alpha = 1f;
		for(int i=0;i<Configuration.maxObjects;i++)
		{
			scorePanelUIGroup.transform.GetChild(i).gameObject.GetComponent<ObjectScoreLine> ().SetScore (retrievalSequenceList [i].gameObject.GetComponent<SpawnableObject>().GetName(), correctResponseList [i], out itemScore);
			totalScore += itemScore;
		}
		scorePanelUIGroup.transform.GetChild (Configuration.maxObjects).gameObject.GetComponent<ObjectScoreLine> ().SetTotalScore (totalScore);
		yield return null;
	}

	public void UpdateNavigationStatus()
	{
		canNavigate = canNavigateToggle.isOn;
		Debug.Log ("CAN NAVIGATE IS: " + canNavigate.ToString ());
	}

	public void ToggleDebugVisuals()
	{
		debugVisuals = debugVisualsToggle.isOn;
		StartCoroutine("UpdateDebugVisuals");
	}

	//non-UI, direct from script version of the ToggleDebugVisuals function
	public void ChangeDebugVisualsStatus(bool shouldEnable)
	{
		debugVisuals = shouldEnable;
		Debug.Log ("turning debug visuals off");
		StartCoroutine("UpdateDebugVisuals");
	}
//
	IEnumerator UpdateDebugVisuals()
	{
		//keep things on, else turn it off
			UnityARAnchorManager arAnchorManager = arGenPlane.GetAnchorManager ();
		Debug.Log ("found ar anchormanager");
			LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors ();
		if (arPlaneAnchors.Count > 0) {
			Debug.Log ("changing ar plane anchors");
			foreach (var plane in arPlaneAnchors) {
				Debug.Log ("trying to find visibility toggler");
				plane.gameObject.transform.GetChild (0).gameObject.GetComponent<VisibilityToggler> ().TurnVisible (debugVisuals);
			}
		}
		Debug.Log ("about to turn off point cloud system");
		pointCloudManager.TogglePointCloud (debugVisuals);
		Debug.Log ("debug visuals should be " + debugVisuals.ToString());
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

	public void ChangeScene(int sceneIndex)
	{
		if (spawnChest != null)
			Destroy (spawnChest);
		SceneManager.LoadScene (sceneIndex,LoadSceneMode.Single);

	}
}
