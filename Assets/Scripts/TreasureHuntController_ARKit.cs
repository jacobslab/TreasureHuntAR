using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;
using System.Collections;
using UnityEngine.XR.iOS;
using UnityEngine.SceneManagement;
using System.IO;
public class TreasureHuntController_ARKit : MonoBehaviour
{

    public Camera FirstPersonCamera;
    public GameObject treasurePedestalPrefab;
    public GameObject treasureChestPrefab;
    public Text debugText;
    public Text camPosText;

    private List<GameObject> spawnables;
    public ObjectManager objManager;
    private GameObject spawnChest;
    private int chestIndex = 0;
    private List<GameObject> spawnableTrialList;

    private GameObject spawnObj;
    private List<Vector3> chestSpawnLocationList = new List<Vector3>();
    public List<int> spawnPlaneIndexList = new List<int>();
    private List<GameObject> spawnedObjList = new List<GameObject>();
    private List<GameObject> retrievalSequenceList = new List<GameObject>();
    private List<GameObject> choiceSelectionList = new List<GameObject>();
    private List<bool> correctResponseList = new List<bool>();
    private List<GameObject> testSpawnList = new List<GameObject>();
    private Object[] spawnArr;

    public List<int> spawnableItemCountList = new List<int>();
    private int spawnablesLeft = 0;
    private int spawnableCount = 0;
    private bool shouldSpawnItem = false;

    private bool treasureFound = false;
    private bool forcingOpen = false;

    private bool distractorSuccess = false;
    private bool finishedFeedback = false;

    private bool firstTrial = true;

    public Button forceOpenChestButton;

    public GameObject testCube;
    public GameObject centerSphere;
    public GameObject anchorCylinder;

    public GameObject choiceSelectionPrefab;
    public GameObject correctPositionIndicatorPrefab;

    //distractor
    public DistractorGame distractorGame;

    //ui
    public Button beginTrialButton;

    public CanvasGroup preSessionPanelUIGroup;
    public CanvasGroup beginTrialPanelUIGroup;
    public CanvasGroup mapButtonPanelUIGroup;
    public CanvasGroup retrievalPanelUIGroup;
    public CanvasGroup scorePanelUIGroup;
    public CanvasGroup endSessionPanelUIGroup;
    public CanvasGroup waitForReadyUIGroup;
    public CanvasGroup rotSyncUIGroup;

    public Text retrievalText;
    public Button acceptUserResponseButton;
    public Toggle debugVisualsToggle;
    public Text preSessionInstructionText;
    public Button confirmMarkersButton;
    public Dropdown mapDropdown;
    public Text trialCountText;
    


    //feedback
    public GameObject feedbackConnectingLinePrefab;

    //scoring
    public Text scoreText;
    public CanvasGroup scoreboardPanel;

    public List<string> mapList;


    //timer
    public Timer timer;
    //logging
    public TrialLogTrack trialLog;

    //tracking status
    public CanvasGroup trackingPanel;
    public Image trackingImage;
    public Text trackingReasonText;

    //debug visuals
    public PointCloudParticleExample pointCloudManager;
    public bool debugVisuals = false;

    private GameObject currentChest;

    public GameObject coinShowerParticles;

    private float distance = 0f;
    private float distanceLeft = 0f;

    //scoring
    private int totalScore = 0;

    //navigation feature
    public bool canNavigate = true;
    public Toggle canNavigateToggle;

    private Touch touch;
    private bool userResponded = false;



    //managers
    public ARKitManager arkitManager;
    public AudioManager audioManager;

    public Transform m_HitTransform;

    public GameObject markerPrefab;
    public List<GameObject> markerObjList;
    private List<Vector2> markerPosList;

    public GeoUtils geoUtils;

    public Bounds playBounds;
    public LineRenderer lineRenderer;

    private List<GameObject> testObjList;

    public GameObject testObj;
    bool finishedMapping = false;

    private int markerNeeded = 4; // how many minimum markers to define the playable area

    private bool spawnablesReady = false; //whether spawnable list has been prepared or not

    bool notInPlayBounds = false;

    bool sessionValid = false;

    private bool continueProcess = false;
    private bool waitingForMarker = false;

    public ClockSynchronization clockSync;

    public int currentTrialIndex = 0;
    private int maxTrials = 3;

    public Logger_Threading eegLog;
    public Logger_Threading subjectLog;

    public string sessionDirectory = "";
    public int sessionID = 0;
    public string sessionStartedFileName = "";
    


    //save-load
    public List<string> spawnToJson;
    public List<GameObject> sceneObjList;

    public float maxRayDistance = 30.0f;
    public LayerMask collisionLayer = 1 << 10;  //ARKitPlane layer
    //A SINGLETON
    private static TreasureHuntController_ARKit _instance;


    public static TreasureHuntController_ARKit Instance
    {
        get
        {
            return _instance;
        }
    }



    void Awake()
    {
        if (_instance != null)
        {
            Debug.Log("Instance already exists!");
            return;
        }
        _instance = this;
        markerPosList = new List<Vector2>();
        spawnables = new List<GameObject>();
        testObjList = new List<GameObject>();
        spawnArr = Resources.LoadAll("Prefabs/Objects");
        retrievalPanelUIGroup.alpha = 0f;
        DisablePanel(endSessionPanelUIGroup);
        scorePanelUIGroup.alpha = 0f;
        EnablePanel(beginTrialPanelUIGroup);
        scoreboardPanel.alpha = 0f;
        forceOpenChestButton.gameObject.SetActive(false);
        acceptUserResponseButton.gameObject.SetActive(false);

        mapDropdown.ClearOptions(); //clear dropdown options

        debugVisuals = debugVisualsToggle.isOn;
        sceneObjList = new List<GameObject>();

        Debug.Log("persistent path: " + Application.persistentDataPath);
    }
    // Use this for initialization
    void Start()
    {
        debugVisuals = true;
        markerObjList = new List<GameObject>();
        //		ChangeDebugVisualsStatus(true);
        UpdateNavigationStatus();
        Debug.Log("frrrrrrrrrrrrrcrrrcrcrcrcrrsrcrvrcxsrcvcxrscvcdrvrvtyvtcrxzescr vttcxrezecrcrxex" + Configuration.isSyncing);
        if (Configuration.isSyncing)
            StartCoroutine(clockSync.RunSyncInterval());

        //arkitManager.arWorldMapManager.Load();
        StartCoroutine("InitLogging");
        waitForReadyUIGroup.alpha = 1f;
        UnityARSessionNativeInterface.ARSessionTrackingChangedEvent += UpdateTrackingStatus;


        //beginTrialPanelUIGroup.alpha = 1f;
    }

 

    void UpdateTrackingStatus(UnityARCamera cam)
    {
        Debug.Log("Is it reaching here? T1");
        if(cam.trackingState == ARTrackingState.ARTrackingStateNormal)
        {
            Debug.Log("Is it reaching here? T2");
            trackingImage.color = Color.green;
            if(arkitManager.arWorldMapManager.isRelocalizing)
            {
                arkitManager.arWorldMapManager.TurnOffMapPreview();
                arkitManager.arWorldMapManager.isRelocalizing = false;

            }
            Debug.Log("Is it reaching here? T3");
        }
        else if(cam.trackingState == ARTrackingState.ARTrackingStateLimited)
        {
            trackingImage.color = Color.yellow;
        }
        else if(cam.trackingState==ARTrackingState.ARTrackingStateNotAvailable)
        {
            trackingImage.color = Color.red;
        }
        if(cam.trackingReason == ARTrackingStateReason.ARTrackingStateReasonInitializing)
        {
            trackingReasonText.transform.parent.GetComponent<CanvasGroup>().alpha = 1f;
            trackingReasonText.text = "Initializing";
        }
        else if(cam.trackingReason == ARTrackingStateReason.ARTrackingStateReasonRelocalizing)
        {
            trackingReasonText.transform.parent.GetComponent<CanvasGroup>().alpha = 1f;
            trackingReasonText.text = "Relocalizing";
        }
        else if(cam.trackingReason == ARTrackingStateReason.ARTrackingStateReasonExcessiveMotion)
        {
            trackingReasonText.transform.parent.GetComponent<CanvasGroup>().alpha = 1f;
            trackingReasonText.text = "Excessive Motion";
        }
        else if(cam.trackingReason == ARTrackingStateReason.ARTrackingStateReasonInsufficientFeatures)
        {
            trackingReasonText.transform.parent.GetComponent<CanvasGroup>().alpha = 1f;
            trackingReasonText.text = "Insufficient Features";
        }
        else if(cam.trackingReason==ARTrackingStateReason.ARTrackingStateReasonNone)
        {
            trackingReasonText.transform.parent.GetComponent<CanvasGroup>().alpha = 0f;
        }
    }


    public void LoadSessionMap(int mapIndex)
    {
        //arkitManager.arWorldMapManager.LoadSpecificMap(mapIndex,);
        waitForReadyUIGroup.alpha = 0f;
        //StartCoroutine("MakeSpawnableList");
    }


    IEnumerator InitLogging()
    {
        string subjectDirectory = Configuration.defaultLoggingPath + "/" + Configuration.subjectName + "/";
        UnityEngine.Debug.Log("subj directory is " + subjectDirectory);
        sessionDirectory = subjectDirectory + "session_0" + "/";

        UnityEngine.Debug.Log("session directory is " + sessionDirectory);
        sessionID = 0;
        string sessionIDString = "_0";

        if (!Directory.Exists(subjectDirectory))
        {
            Directory.CreateDirectory(subjectDirectory);
        }
        while (File.Exists(sessionDirectory + sessionStartedFileName))
        {//Directory.Exists(sessionDirectory)) {
            sessionID++;

            sessionIDString = "_" + sessionID.ToString();

            sessionDirectory = subjectDirectory + "session" + sessionIDString + "/";
        }

        //delete old files.
        if (Directory.Exists(sessionDirectory))
        {

            UnityEngine.Debug.Log("deleting old files");
            DirectoryInfo info = new DirectoryInfo(sessionDirectory);
            FileInfo[] fileInfo = info.GetFiles();
            for (int i = 0; i < fileInfo.Length; i++)
            {
                File.Delete(fileInfo[i].ToString());
            }
        }
        else
        { //if directory didn't exist, make it!
            UnityEngine.Debug.Log("creating directory");
            Directory.CreateDirectory(sessionDirectory);
        }

        subjectLog.fileName = sessionDirectory + Configuration.subjectName + "Log" + ".txt";
        eegLog.fileName = sessionDirectory + Configuration.subjectName + "EEGLog" + ".txt";
        Debug.Log("SUBJECT LOG: " + subjectLog.fileName);


        yield return StartCoroutine(PrepareMapList());
        yield return null;
    }

    IEnumerator PrepareMapList()
    {
        //int testMapIndex = 1;
        DirectoryInfo directoryPath = new DirectoryInfo(Application.persistentDataPath);
        FileInfo[] listfiles = directoryPath.GetFiles("*.worldmap");

        mapList = new List<string>();


        foreach (FileInfo file in listfiles)
        {
            Debug.Log("file name " + file.Name);
            //GameObject buttonPrefab = Instantiate(arkitManager.arWorldMapManager.mapButton, Vector3.zero, Quaternion.identity) as GameObject;
            //buttonPrefab.transform.parent = arkitManager.arWorldMapManager.canvasParent;

            //buttonPrefab.GetComponent<RectTransform>().anchoredPosition3D = new Vector3(0f, -200f * testMapIndex, 0f);
            //buttonPrefab.GetComponent<MapButton>().selfMapIndex = testMapIndex;
            //buttonPrefab.GetComponent<MapButton>().worldMapManager = arkitManager.arWorldMapManager;
            //buttonPrefab.GetComponent<MapButton>().buttonText.text = file.Name;
            //testMapIndex++;
            mapList.Add(file.Name);
        }

        mapDropdown.AddOptions(mapList);

        yield return StartCoroutine(PreSessionMapping());

        yield return null;
    }

    IEnumerator PreSessionMapping()
    {
        UnityEngine.Debug.Log("INSIDE presession mapping");
        //bool needsMapping = true;
        EnablePanel(preSessionPanelUIGroup);
        DisablePanel(beginTrialPanelUIGroup);
        DisablePanel(mapButtonPanelUIGroup);


        //wait until arkitmanager has been created and assigned reference to
        while(arkitManager==null)
        {
            yield return 0;
        }
        UnityEngine.Debug.Log("found arkitmanager");
        yield return new WaitForSeconds(1.5f);
        UnityEngine.Debug.Log("finished waiting for a short period of time");

        while (arkitManager.arGenPlane.GetAnchorManager().GetPlaneCount() == 0)
        {
            UnityEngine.Debug.Log("waiting to have atleast one plane");
            yield return 0;
        }
        //UnityEngine.Debug.Log("found anchor manager");
        //UnityARAnchorManager anchorManager = arkitManager.arGenPlane.GetAnchorManager();
        //while (needsMapping)
        //{
        //    if (anchorManager.GetPlaneCount() > 0)
        //    {
        //        yield return StartCoroutine("DefineCornerMarkers");
        //        needsMapping = false;
        //    }
        //    yield return 0;
        //}

        UnityEngine.Debug.Log("finished with presession mapping");
        DisablePanel(preSessionPanelUIGroup);
        EnablePanel(beginTrialPanelUIGroup);
        EnablePanel(mapButtonPanelUIGroup);
        yield return null;
    }

    public void CompleteMarkingProcess()
    {
        Debug.Log("process should be complete");
        waitingForMarker = false;
        continueProcess = false;
    }


    public IEnumerator Save()
    {
        for (int i = 0; i < sceneObjList.Count; i++)
        {
            spawnToJson.Add(JsonUtility.ToJson(sceneObjList[i]));
        }

        yield return null;
    }

    public IEnumerator Load()
    {
        for (int i = 0; i < spawnToJson.Count; i++)
        {
            GameObject respawnedObj = JsonUtility.FromJson<GameObject>(spawnToJson[i]);
            Debug.Log("the name of the respawned object is: " + respawnedObj.name);
        }

        yield return null;
    }

    public void ActivateSaveChangeLoad()
    {
        StartCoroutine("SCLCoroutine");
    }

    IEnumerator SCLCoroutine()
    {
        yield return StartCoroutine(Save());
        sessionValid = false;

        SceneManager.LoadScene("Overview", LoadSceneMode.Additive);
        Scene currentScene = SceneManager.GetActiveScene();
        SceneManager.MoveGameObjectToScene(this.gameObject, SceneManager.GetSceneAt(1));
        SceneManager.SetActiveScene(SceneManager.GetSceneAt(1));
        SceneManager.UnloadSceneAsync(currentScene);


        yield return StartCoroutine(Load());
        yield return null;
    }

    IEnumerator DefineCornerMarkers()
    {
        continueProcess = true;
        confirmMarkersButton.enabled = true;
        confirmMarkersButton.interactable = false;
        int index = 0;
        while (continueProcess)
        {
            waitingForMarker = true;
            //			Debug.Log ("set waiting for marker to true");
            while (waitingForMarker)
            {
                UnityEngine.Debug.Log("waiting to mark corners");
                preSessionInstructionText.text = "Tap to mark Corner No." + index.ToString();
                if (Input.touchCount > 0)
                {
                    var touch = Input.GetTouch(0);
                    int id = touch.fingerId;

                    UnityEngine.Debug.Log("got a touch");
                    if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
                    {
                        // Check if there is a touch
                        // Check if finger is over a UI element
                        if (EventSystem.current.IsPointerOverGameObject(touch.fingerId))
                        {
                            Debug.Log("Touched the UI");
                        }
                        else
                        {
                            var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
                            ARPoint point = new ARPoint
                            {
                                x = screenPosition.x,
                                y = screenPosition.y
                            };
                            //						Debug.Log ("new ar point: (" + point.x.ToString () + ", " + point.y.ToString() + ")");
                            // prioritize results types
                            ARHitTestResultType[] resultTypes = {
                                ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent,
                            };

                            foreach (ARHitTestResultType resultType in resultTypes)
                            {
                                ARHitTestResult hitResult = new ARHitTestResult();
                                if (HitTestWithResultType(point, resultType, out hitResult))
                                {
                                    SpawnMarker(hitResult, index);
                                    preSessionInstructionText.text = "Great! You marked Corner No." + index.ToString();
                                    yield return new WaitForSeconds(1f);
                                    waitingForMarker = false;
                                    //								Debug.Log ("set waiting for marker to false");
                                }
                            }
                        }
                    }
                }
                //				Debug.Log ("waiting for touch");
                yield return 0;
            }
            index++;

            //set button to interactable after atleast four points have been selected
            if (index > 4)
                confirmMarkersButton.interactable = true;
            yield return 0;
        }
        Debug.Log("turned off the button");
        confirmMarkersButton.interactable = false;
        confirmMarkersButton.enabled = false;

        for (int i = 0; i < markerObjList.Count; i++)
        {
            markerPosList.Add(new Vector2(markerObjList[i].transform.position.x, markerObjList[i].transform.position.z));
        }
        Debug.Log("finished adding marker positions");
        //make the actual bounds here
        //		playBounds = new Bounds(Vector3.Lerp(markerObjArr[0].transform.position,markerObjArr[3].transform.position,0.5f),new Vector3(Vector3.Distance(markerObjArr[0].transform.position,markerObjArr[1].transform.position),1f,Vector3.Distance(markerObjArr[0].transform.position,markerObjArr[2].transform.position)));
        List<Vector3> markerList = new List<Vector3>();
        //		Vector3[] markerPos = new Vector3[4];

        //		Debug.Log ("playrect center is: " + playBounds.center.ToString ());
        //		Debug.Log ("playrect extents: " + playBounds.extents.ToString ());
        //		Debug.Log ("finished the for loop");


        finishedMapping = true;

        List<GameObject> testList = new List<GameObject>();
        //spawn random objects that appear within the playable area
        for (int k = 0; k < 100; k++)
        {
            int planeIndex = 0;
            Debug.Log("picking random positions");
            Vector3 pos = GetRandomPosition(out planeIndex);
            GameObject testSpawn = Instantiate(testObj, pos, Quaternion.identity) as GameObject;

            UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
            LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();

            ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;
            int currentIndex = 0;
            foreach (var plane in arPlaneAnchors)
            {
                if (currentIndex == planeIndex)
                {
                    planeAnchor = plane;
                }
                currentIndex++;
            }
            testSpawn.transform.parent = planeAnchor.gameObject.transform;
            testSpawn.transform.localPosition = pos;
            testSpawn.transform.parent = null;
            testList.Add(testSpawn);

            Debug.Log("instantiated test obj and set plane anchor as its transform parent");

            if (geoUtils.IsPointInPolygon(markerPosList, new Vector2(testSpawn.transform.position.x, testSpawn.transform.position.z)))
            {
                testSpawn.GetComponent<MeshRenderer>().material.color = Color.green;
            }
            else
                testSpawn.GetComponent<MeshRenderer>().material.color = Color.red;
        }

        yield return new WaitForSeconds(2.5f);

        //delete all the test spawned objects
        //for (int i = 0; i < testList.Count; i++) {
        //	Destroy (testList [i]);
        //}
        //turn off the marker obj renderers
        Debug.Log("turning off marker obj renderers");
        for (int j = 0; j < markerObjList.Count; j++)
        {
            markerObjList[j].GetComponent<MeshRenderer>().enabled = false;
        }
        yield return null;
    }

    void Update()
    {
        // Check if there is a touch
        //		if (Input.touchCount > 0)
        //		{
        //			var touch = Input.GetTouch(0);
        //			if(touch.phase == TouchPhase.Began)
        //			{
        //			// Check if finger is over a UI element
        //			if (EventSystem.current.IsPointerOverGameObject(touch.fingerId))
        //			{
        //				Debug.Log("Touched the UI");
        //			}
        //			}
        //		}
        //		debugText.text = playBounds.center.ToString ();
        //		if (finishedMapping) {
        //			if (Input.touchCount > 0) {
        //				var touch = Input.GetTouch (0);
        ////				Debug.Log ("got a touch");
        //				if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved) {
        //					var screenPosition = Camera.main.ScreenToViewportPoint (touch.position);
        //					ARPoint point = new ARPoint {
        //						x = screenPosition.x,
        //						y = screenPosition.y
        //					};
        //					Debug.Log ("new ar point: (" + point.x.ToString () + ", " + point.y.ToString () + ")");
        //					// prioritize results types
        //					ARHitTestResultType[] resultTypes = {
        //						ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
        //					}; 
        //
        //					foreach (ARHitTestResultType resultType in resultTypes) {
        //						ARHitTestResult hitResult = new ARHitTestResult ();
        //						if (HitTestWithResultType (point, resultType, out hitResult)) {
        //							Vector3 position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
        //							Debug.Log ("hit position is:  " + position.ToString ());
        //							if (playBounds.Contains (position)) {
        //								debugText.text = "WITHIN: "+ position.ToString() ;
        //								Debug.Log ("WITHIN THE RECT");
        //							} else {
        //								debugText.text = "outside " + position.ToString(); 
        //								Debug.Log ("outside the RECT");
        //							}
        //						}
        //					}
        //				}
        //			}
        //		}
        if (beginexper.begin_exp_pressed == true)
        {
            beginexper.begin_exp_pressed = false;
            BeginNewSession();



        }

        if (Configuration.isSyncing)
            StartCoroutine(clockSync.RunSyncInterval());
    }


    void SpawnMarker(ARHitTestResult hitResult, int markerIndex)
    {

        //		GameObject markerObj = Instantiate (markerPrefab, Vector3.zero, Quaternion.identity) as GameObject;
        Vector3 position = UnityARMatrixOps.GetPosition(hitResult.worldTransform);
        Quaternion rotation = UnityARMatrixOps.GetRotation(hitResult.worldTransform);
        Color col = Color.black;
        markerObjList.Add(Instantiate<GameObject>(markerPrefab, position, rotation));

        //		Debug.Log ("spawned the marker obj");
        switch (markerIndex)
        {
            case 0:
                col = Color.red;
                break;
            case 1:
                col = Color.green;
                break;
            case 2:
                col = Color.blue;
                break;
            case 3:
                col = Color.white;
                break;
        }
        markerObjList[markerIndex].GetComponent<MeshRenderer>().material.color = col;
    }

    public IEnumerator WaitTillObjectHit(GameObject targetObj,float timeout)
    {
        bool objectHit = false;
        float timerVal = 0f;

        while (!objectHit && timerVal < timeout)
        {
            timerVal += Time.deltaTime;
            if (Input.touchCount > 0)
            {
                var hitTouch = Input.GetTouch(0);
                                          Debug.Log ("got a touch");
                if (hitTouch.phase == TouchPhase.Began || hitTouch.phase == TouchPhase.Moved)
                {
                    var screenPosition = Camera.main.ScreenToViewportPoint(hitTouch.position);
                    ARPoint point = new ARPoint
                    {
                        x = screenPosition.x,
                        y = screenPosition.y
                    };
                    // prioritize results types
                    ARHitTestResultType[] resultTypes = {
                                ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent,
                            };

                    foreach (ARHitTestResultType resultType in resultTypes)
                    {
                        GameObject hitObj = new GameObject();

                        if (HitTestWithResultType(point, resultType, out hitObj))
                        {
                            distractorGame.MarkRabbitCaught(); //this will mark rabbit caught inside DistractorGame script; if it doesn't reach here then DistractorGame will register it as a miss
                             objectHit = true; //makes it exit out of the while loop and end the coroutine

                        }
                    }
                }
                yield return 0;
            }
            yield return null;
        }
    }

    public bool HitTestWithResultType(ARPoint point, ARHitTestResultType resultTypes, out ARHitTestResult chosenHitResult)
    {
        List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, resultTypes);
        chosenHitResult = new ARHitTestResult();
        if (hitResults.Count > 0)
        {
            foreach (var hitResult in hitResults)
            {
                //				Debug.Log ("Got hit!");
                //				markerObj.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
                //				markerObj.transform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
                chosenHitResult = hitResult;
                //				Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
                return true;
            }
        }
        return false;
    }

    public bool HitTestWithResultType(ARPoint point, ARHitTestResultType resultTypes, out GameObject hitObj)
    {
        hitObj = new GameObject();
        List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, resultTypes);
        if (hitResults.Count > 0)
        {
            foreach (var hitResult in hitResults)
            {
                //				Debug.Log ("Got hit!");
                //output the hit position,
                //NOTE: ONLY THE LAST HIT WILL OUTPUT
                hitObj.transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform);
                hitObj.transform.rotation = UnityARMatrixOps.GetRotation(hitResult.worldTransform);
                //				Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
                return true;
            }
        }
        return false;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        Vector3 camPos = Vector3.zero;

        if (arkitManager != null)
        {
            if (arkitManager.arCamManager != null)
            {
                Matrix4x4 camMatrix = arkitManager.arCamManager.GetCurrentPose();
                Transform currentTransform = arkitManager.arCamManager.m_camera.transform;
                trialLog.LogCamTransform(currentTransform);

                if(currentTransform.eulerAngles.z > 200f && currentTransform.eulerAngles.z <270f)
                {
                    ShowRotationSynchronization(true);
                }
                else
                {
                    ShowRotationSynchronization(false);
                }

                camPos = UnityARMatrixOps.GetPosition(camMatrix);
                Quaternion camRot = UnityARMatrixOps.GetRotation(camMatrix);
                UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();

                if (arAnchorManager != null)
                {

                    LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();

                    if (arPlaneAnchors != null)
                    {
                        if (arPlaneAnchors.Count > 0)
                        {
                            ARPlaneAnchorGameObject planeAnchorObj = arPlaneAnchors.First.Value;

                        }
                    }
                }
            }
        }


        scoreText.text = totalScore.ToString();

        if (canNavigate && spawnChest != null && !treasureFound)
        {
            distance = Vector3.Distance(spawnChest.transform.position, camPos);
            distanceLeft = Mathf.Clamp(distance - Configuration.minOpenDistance, -0.1f, Configuration.minOpenDistance);
            spawnChest.gameObject.GetComponent<TreasureChest>().UpdateDistanceBar(distanceLeft);
        }

    }

    public void BeginSpawnTest()
    {
        StartCoroutine(RunSpawnTest());
    }


    public void ShowRotationSynchronization(bool isRotSyncing)
    {
        //only trigger if the status has changed
        if (Configuration.rotSync != isRotSyncing)
        {
            Configuration.rotSync = isRotSyncing;
            trialLog.LogRotationSyncStatus(isRotSyncing);
            rotSyncUIGroup.alpha = (isRotSyncing ? 1f : 0f);
        }
    }

    public IEnumerator RunSpawnTest()
    {

        int randPlaneIndex = 0;
        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        int planeCount = arAnchorManager.GetPlaneCount();

        List<GameObject> testList= new List<GameObject>();
        List<GameObject> vertexMarkers = new List<GameObject>();

        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();
        ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;
        vertexMarkers = HighlightVertices();
        for (int i = 0; i < 500; i++)
        {

            //yield return StartCoroutine(CreateNewChestLocation());
            Vector3 pos = GetRandomPosition(out randPlaneIndex);
            chestSpawnLocationList.Add(pos);
            Debug.Log("length of chest location " + chestSpawnLocationList.Count.ToString());


            //int planeIndex = GetPlaneIndex(chestIndex);
            int planeIndex=0;
            Debug.Log("got plane index");

            int currentIndex = 0;
            foreach (var plane in arPlaneAnchors)
            {
                if (currentIndex == planeIndex)
                {
                    planeAnchor = plane;
                }
                currentIndex++;
            }
            Debug.Log("stored pos");
            Vector3 position = pos;
            Vector3 planeRotation = planeAnchor.gameObject.transform.rotation.eulerAngles;
            Vector3 modChestRot = new Vector3(planeRotation.x, planeRotation.y, -planeRotation.z);

            Debug.Log("about to spawn chest");
            GameObject testSpawnObj = Instantiate(testCube, position, Quaternion.Euler(modChestRot)) as GameObject;

            testSpawnObj.transform.parent = planeAnchor.gameObject.transform;
            testSpawnObj.transform.localPosition = position;
            testSpawnObj.transform.parent = null;
            testList.Add(testSpawnObj);

        }
        //wait for sometime
        yield return new WaitForSeconds(3f);

        //then destroy the spawned objects
        for (int j = 0; j < testList.Count;j++)
        {
            Destroy(testList[j]);
        }
        testList.Clear();
        for (int k = 0; k < vertexMarkers.Count;k++)
        {
            Destroy(vertexMarkers[k]);
        }
        vertexMarkers.Clear();
        yield return null;
    }

    IEnumerator GetItemTrialDistribution()
    {
        spawnableItemCountList.Clear(); //clear the list if it has any contents
        for (int i = 0; i < maxTrials;i++) //changed to 100% 3-item trials
        {
            spawnableItemCountList.Add(3);
        }
        yield return null;
    }

    public IEnumerator RunTrial()
    {
        treasureFound = false;
        //reset timer and start it
        timer.Reset();
        timer.ToggleTimer(true);
        timer.StartTimer();
        //trialLog.LogTrialStarted(true);
        trialLog.LogTrialNavigation(true);
        bool noTouch = false;
        //turn off the retrieval panel, if it hasn't been already
        retrievalPanelUIGroup.alpha = 0f;
        Debug.Log("running trial");
        //turn off debug visuals

        Debug.Log("Where it is is happening 1");
        //create a distribution of number of spawnable items spawned each trial for our session
        yield return StartCoroutine(GetItemTrialDistribution());
        //yield return StartCoroutine(CreateChestLocationList());

        //reset chest index
        chestIndex = 0;

        //turning it off by default
        ChangeDebugVisualsStatus(false);
        DisablePanel(beginTrialPanelUIGroup); //disable the begin trial UI panel
        scoreboardPanel.alpha = 1f;
        chestSpawnLocationList.Clear(); //clear the list
        Debug.Log("spawnableItemCountList length " + spawnableItemCountList.Count.ToString());
        int spawnableIndex =Random.Range(0, spawnableItemCountList.Count - 1);
        Debug.Log("spawnableIndex " + spawnableIndex.ToString());
        spawnableCount = spawnableItemCountList[spawnableIndex];
        spawnableItemCountList.RemoveAt(spawnableIndex);
        spawnablesLeft = spawnableCount;
        Debug.Log("spawnables in upcoming trial " + spawnablesLeft.ToString());

        //log the trial specifics before properly beginning it
        trialLog.Log(currentTrialIndex + 1, Configuration.numChestsPerTrial, spawnableCount);

        //let's make sure we don't exceed the max spawnables 
        for (int i = 0; i < Configuration.numChestsPerTrial; i++)
        {
            int chestsLeft = Configuration.numChestsPerTrial - i;
            shouldSpawnItem = false;

            Debug.Log("chestsleft-spawnablesleft " + (chestsLeft - spawnablesLeft).ToString());
            if (chestsLeft - spawnablesLeft > 0 && spawnablesLeft>0)
            {
                shouldSpawnItem = (Random.value > 0.5f) ? true : false;
            }
            //check to see if we have any more spawnables left
            else if(spawnablesLeft>0)
            {
                shouldSpawnItem = true;
            }
            //we ran out of spawnables, and thus last chest is empty
            else
            {
                shouldSpawnItem = false;
            }

            if (shouldSpawnItem)
            {
                Debug.Log("reducing spawnablesLeft");
                spawnablesLeft--;
                Debug.Log("spawnables left " + spawnablesLeft.ToString());
            }

            Debug.Log("SHOULD SPAWN ITEM " + shouldSpawnItem.ToString());
            yield return StartCoroutine(CreateNewChestLocation());
            treasureFound = false;
            //spawn a treasure chest at a random location
            yield return StartCoroutine(SpawnTreasureChest(chestIndex));
            //log the location of the treasure chest that we just spawned
            trialLog.LogTreasureChestSpawned(spawnChest.transform.position);
            //enable force open chest button
            forceOpenChestButton.gameObject.SetActive(true);

            //wait until it's picked up, then spawn an object
            while (!treasureFound)
            {
                // If the player has not touched the screen, we are done with this update.
                if (spawnChest != null)
                {

                    //Matrix4x4 camMatrix = arCamManager.GetCurrentPose ();
                    //Vector3 camPos = UnityARMatrixOps.GetPosition (camMatrix);
                    Vector3 camPos = UnityARMatrixOps.GetPosition(arkitManager.arCamManager.m_camera.transform.localPosition);
                    //debugText.text = camPos.ToString();
                    //trialLog.LogCamPosition(camPos);
                    //float distance = Vector3.Distance(spawnChest.transform.position, camPos);
                    //					debugText.text = distance.ToString ();
                }
                else
                {
                    //					debugText.text = "No chest exists";
                }

                if (Input.touchCount > 0)
                {
                    Debug.Log("a touch");
                    bool canOpen = false;
                    var touch = Input.GetTouch(0);
                    //							Debug.Log ("got a touch");
                    if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
                    {
                        var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
                        ARPoint point = new ARPoint
                        {
                            x = screenPosition.x,
                            y = screenPosition.y
                        };
                        //canNavigate = true;
                        if (!canNavigate)
                        {
                            Debug.Log("got a touch");
                            canOpen = true;
                            //Debug.Log("opening a chest");
                            //RaycastHit hit;
                            //Vector3 fwd= screenPosition.normalized * Vector3.forward;
                            //if (Physics.Raycast(arkitManager.arCamManager.m_camera.transform.position,fwd,out hit, 10f))
                            //{
                                //Debug.Log("HIT OBJECT " +  hit.collider.gameObject.name);
                                if (canOpen && !treasureFound && !forcingOpen)
                                {
                                    Debug.Log("forcing open due to touch");
                                    forcingOpen = true;
                                yield return StartCoroutine(OpenTreasureChest(shouldSpawnItem));
                                }
                        }
                        else
                        {
                            if (canOpen && !treasureFound && !forcingOpen)
                            {
                                Debug.Log("forcing open due to touch");
                                forcingOpen = true;

                                yield return StartCoroutine(OpenTreasureChest(shouldSpawnItem));
                            }
                            
                            // prioritize results types
                            ARHitTestResultType[] resultTypes = {
                                ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent,
                            };

                            foreach (ARHitTestResultType resultType in resultTypes)
                            {
                                GameObject hitObj = new GameObject();
                                if (HitTestWithResultType(point, resultType, out hitObj))
                                {
                                    Debug.Log("HIT OBJ " + hitObj.gameObject.name);

                                    //										Debug.Log ("GOT A HIT");
                                    //					
                                    //Matrix4x4 camMatrix = arkitManager.arCamManager.GetCurrentPose ();
                                    //Vector3 camPos = UnityARMatrixOps.GetPosition (camMatrix);
                                    ////Vector3 camPos = UnityARMatrixOps.GetPosition(arkitManager.arCamManager.m_camera.transform.localPosition);
                                    //float distance = Vector3.Distance(spawnChest.transform.position, camPos);
                                    ////								Debug.Log("hit distance is: " + distance.ToString ());
                                    if (!canNavigate)
                                    {
                                        canOpen = true;
                                    }
                                    else
                                    {
                                        if (distanceLeft < 0f)
                                        {
                                            canOpen = true;
                                        }
                                    }
                                    if (canOpen && !treasureFound && !forcingOpen)
                                    {
                                        Debug.Log("forcing open due to touch");
                                        forcingOpen = true;

                                        yield return StartCoroutine(OpenTreasureChest(shouldSpawnItem));
                                    }
                                    else
                                        Debug.Log("cannot open yet");
                                }
                            }
                        }
                        							//}

                    }

                }
                yield return 0;
            }

            Debug.Log("waiting for presentation");
            //wait for the needed time
            yield return new WaitForSeconds(Configuration.presentationTime);

            ////destroy the chest
            //if (!canNavigate)
            //{
            //    Destroy(spawnChest);
            //}
            //else
            //{
            //destroy only the spawned chest's parent "ChestPedestal" 
            Debug.Log("spawn chest before destroying" + spawnChest.gameObject.name);
            Destroy(spawnChest.transform.parent.gameObject);
            //}
            //			debugText.text = debugText.text.Insert (0, "spawn: " + spawnObj.gameObject.name.ToString ());
            //toggle visibility of the item
            if (spawnObj != null)
            {
                spawnObj.GetComponent<VisibilityToggler>().TurnVisible(false);
            }
            //				sessionValid = false;

            forceOpenChestButton.gameObject.SetActive(false);

            //make forcing chest open possible again
            forcingOpen = false;
            Debug.Log("made forcing open possible again");
            chestsLeft--;

        }
        //stop timer
        timer.PauseTimer();
        timer.ToggleTimer(false);

        //have a distractor task here

        trialLog.LogDistractorGame(true);
        yield return StartCoroutine(RunDistractor());
        trialLog.LogDistractorGame(false);

        //have the retrieval here
        //turn on the retrieval panel
        trialLog.LogRecallPhaseStarted(true);
        trialLog.LogRecallChoiceStarted(true);
        yield return StartCoroutine(PerformRetrieval());
        trialLog.LogRecallChoiceStarted(false);
        trialLog.LogRecallPhaseStarted(false);

        //have feedback
        trialLog.LogFeedback(true);
        yield return StartCoroutine(ShowFeedback());
        trialLog.LogFeedback(false);

        retrievalText.text = "End trial";
        yield return new WaitForSeconds(1f);
        retrievalPanelUIGroup.alpha = 0f;
        //EnablePanel(beginTrialPanelUIGroup);
        //ChangeDebugVisualsStatus(true);


        //stop the timer
        timer.StopTimer();

        ClearLists();
        //reset chest index
        chestIndex = 0;
        currentTrialIndex++; //increment the trial count

        //trialLog.LogTrialStarted(false);
        trialLog.LogTrialNavigation(false);
        finishedFeedback = true; //wait till here to "finish feedback" and clear flags so that next trial, if any, can run
        yield return null;
    }

    IEnumerator OpenTreasureChest(bool hasItem)
    {

        Debug.Log("forcing open coroutine");
        trialLog.LogChestOpening(chestIndex,forcingOpen);
        yield return StartCoroutine(spawnChest.GetComponent<TreasureChest>().Open(FirstPersonCamera.gameObject));
        if (hasItem)
        {
            Debug.Log("spawning item");
            yield return StartCoroutine(SpawnTreasure(spawnChest.transform, chestIndex));
            
            spawnObj.GetComponent<VisibilityToggler>().TurnVisible(true);
            string objName = spawnObj.GetComponent<SpawnableObject>().GetName();
            spawnChest.GetComponent<TreasureChest>().SetItemText(objName);

            trialLog.LogChestItem(chestIndex, objName);
        }
        else
        {
            Debug.Log("no item to spawn");
            trialLog.LogEmptyChest(chestIndex);
            //nothing; maybe play the empty chest sound
        }
        //set the text mesh to display the object name
        chestIndex++;
        //set treasure found as true so we can exit out of the while loop
        treasureFound = true;
        yield return null;
    }


    void ClearLists()
    {
        Debug.Log("clearing lists");
        spawnedObjList.Clear();
        retrievalSequenceList.Clear();
        choiceSelectionList.Clear();
    }

    public void ForceOpenChest()
    {
        if (!forcingOpen)
        {
            forcingOpen = true;
            Debug.Log("forcing open button method");
            trialLog.LogChestForceOpenEvent(chestIndex);
            StartCoroutine(OpenTreasureChest(shouldSpawnItem));
        }
    }

    //gets called in the pre-session mapping OR via worldMapManager's Load function
    public IEnumerator MakeSpawnableList()
    {

        //Debug.Log ("making spawnable lists");
        //clear any leftovers
        spawnables.Clear();
        ClearLists();
        spawnPlaneIndexList.Clear();
        maxTrials = spawnArr.Length / Configuration.maxObjects;
        //maxTrials = 3;
        Debug.Log("number of trials are: " + maxTrials.ToString());
        //		Configuration.maxObjects = spawnArr.Length; // 0 inclusive
        for (int i = 0; i < spawnArr.Length; i++)
        {
            spawnables.Add((GameObject)spawnArr[i]);

        }

        int totalCount = spawnables.Count;
        spawnableTrialList = new List<GameObject>();
        for (int i = 0; i < totalCount; i++)
        {
            int randInt = Random.Range(0, spawnables.Count);
            spawnableTrialList.Add(spawnables[randInt]);
            //Debug.Log ("adding: " + spawnables [randInt].ToString ());
            //debugText.text=debugText.text.Insert (0, spawnables [randInt].ToString () + "\n");
            spawnables.RemoveAt(randInt);
        }
        //Debug.Log ("total spawnables: " + spawnableTrialList.Count.ToString ());
        //debugText.text=debugText.text.Insert(0,spawnableTrialList.Count.ToString() + "\n");

        //reset chest index
        chestIndex = 0;

        spawnablesReady = true;
        yield return null;

    }

    public void SaveAllObjects()
    {

    }

    IEnumerator CreateNewChestLocation()
    {
        int randPlane = 0;
        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        int planeCount = arAnchorManager.GetPlaneCount();

        Debug.Log("got anchor manager and plane count");
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();
        ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;

        Vector3 chestSpawnLocation = Vector3.zero;
        Debug.Log("got the first plane anchor");
        int currentIndex = 0;
        //obtain the current player position
        Vector3 currentPlayerPos = UnityARMatrixOps.GetPosition(arkitManager.arCamManager.m_camera.transform.localPosition);
        spawnPlaneIndexList.Add(0);

        notInPlayBounds = true;
        while (notInPlayBounds)
        {
            chestSpawnLocation= GetRandomPosition(out randPlane);
            currentIndex = 0;
            foreach (var plane in arPlaneAnchors)
            {
                if (currentIndex == randPlane)
                {
                    planeAnchor = plane;
                }
                currentIndex++;
            }
            //we apply dual check to ensure there is enough distance between chests and the current player position so the chest doesn't spawn on their location
            while (!CheckSufficientDistanceBetweenChests(chestSpawnLocation, chestSpawnLocationList,-1) || (Vector3.Distance(chestSpawnLocation,currentPlayerPos) < Configuration.minPlayerToChestDistance)) //NOTE: the third argument referring to the current index in the list is set to -1 as it doesn't matter in this case as we are not doing intra-list check
            {
                chestSpawnLocation = GetRandomPosition(out randPlane);
                spawnPlaneIndexList[chestSpawnLocationList.Count] = randPlane; //the current index will be the amount of objects already spawned in this trial
                currentIndex = 0;
                foreach (var plane in arPlaneAnchors)
                {
                    if (currentIndex == randPlane)
                    {
                        planeAnchor = plane;
                    }
                    currentIndex++;
                }

                yield return 0;
            }
            notInPlayBounds = false;

            yield return 0;
        }
        Debug.Log("distance between chest and player " + Vector3.Distance(chestSpawnLocation, currentPlayerPos).ToString());
        chestSpawnLocationList.Add(chestSpawnLocation);

        yield return null;
    }


    IEnumerator CreateChestLocationList()
    {
        //Debug.Log ("creating chest locations");
        int randPlane = 0;
        chestSpawnLocationList.Clear();
        //Matrix4x4 matrix = arCamManager.GetCurrentPose();
        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        int planeCount = arAnchorManager.GetPlaneCount();

        Debug.Log("got anchor manager and plane count");
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();
        ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;


        Debug.Log("got the first plane anchor");
        int currentIndex = 0;

        //instantiate them all to the last recorded device position and first available plane
        for (int j = 0; j < Configuration.maxObjects; j++)
        {
            Vector3 tempPos = UnityARMatrixOps.GetPosition(arkitManager.arCamManager.m_camera.transform.localPosition);

            chestSpawnLocationList.Add(tempPos);
            spawnPlaneIndexList.Add(0);
        }

        Debug.Log("added chest spawn location and spawnplaneindexlist");
        for (int i = 0; i < Configuration.maxObjects; i++)
        {
            notInPlayBounds = true;
            while (notInPlayBounds)
            {
                chestSpawnLocationList[i] = GetRandomPosition(out randPlane);
                currentIndex = 0;
                foreach (var plane in arPlaneAnchors)
                {
                    if (currentIndex == randPlane)
                    {
                        planeAnchor = plane;
                    }
                    currentIndex++;
                }
                while (!CheckSufficientDistanceBetweenChests(chestSpawnLocationList[i], chestSpawnLocationList, i))
                {
                    chestSpawnLocationList[i] = GetRandomPosition(out randPlane);
                    spawnPlaneIndexList[i] = randPlane;
                    currentIndex = 0;
                    foreach (var plane in arPlaneAnchors)
                    {
                        if (currentIndex == randPlane)
                        {
                            planeAnchor = plane;
                        }
                        currentIndex++;
                    }

                    yield return 0;
                }
                notInPlayBounds = false;

                yield return 0;
            }


        }

        yield return null;
    }

    private bool CheckSufficientDistanceBetweenChests(Vector3 chestLocation, List<Vector3> chestLocationList, int currentIndex)
    {
        float dist = 0f;
        for (int i = 0; i < chestLocationList.Count; i++)
        {
            if (i != currentIndex)
            {
                if (Vector3.Distance(chestLocation, chestLocationList[i]) < Configuration.minDistanceBetweenObjects)
                    return false;
                dist = Vector3.Distance(chestLocation, chestLocationList[i]);
            }
        }
        Debug.Log("sufficient distance was:  " + dist.ToString());

        //debugText.text = "Sufficient dist: " + dist.ToString();
        return true;
    }

    // Return the polygon's area in "square units."
    private float PolygonArea(Vector3[] vertices)
    {
        // Add the first point to the end.
        int num_points = vertices.Length;
        Vector2[] pts = new Vector2[num_points + 1];
        for (int i = 0; i < num_points; i++)
        {
            pts[i] = new Vector2(vertices[i].x, vertices[i].z);
        }
        //wrap it around to the first point to form a closed polygon
        pts[num_points] = new Vector2(vertices[0].x, vertices[0].z);

        // Get the areas.
        float area = 0;
        for (int i = 0; i < num_points; i++)
        {
            area +=
                (pts[i + 1].x - pts[i].x) *
                (pts[i + 1].y + pts[i].y) / 2;
        }

        // Return the result.
        return Mathf.Abs(area);
    }

    public Vector3 FindCentroid(Vector3[] vertices)
    {
        // Add the first point at the end of the array.
        int num_points = vertices.Length;
        Vector2[] pts = new Vector2[num_points + 1];
        for (int i = 0; i < num_points;i++)
        {
            pts[i] = new Vector2(vertices[i].x,vertices[i].z);
        }
        //wrap it around to the first point to form a closed polygon
        pts[num_points] = new Vector2(vertices[0].x,vertices[0].z);

        // Find the centroid.
        float X = 0;
        float Y = 0;
        float second_factor;
        for (int i = 0; i < num_points; i++)
        {
            second_factor =
                pts[i].x * pts[i + 1].y -
                pts[i + 1].x * pts[i].y;
            X += (pts[i].x + pts[i + 1].x) * second_factor;
            Y += (pts[i].y + pts[i + 1].y) * second_factor;
        }

        // Divide by 6 times the polygon's area.
        float polygon_area = PolygonArea(vertices);
        Debug.Log("polygon area is " + polygon_area.ToString());
        X /= (6 * polygon_area);
        Y /= (6 * polygon_area);

        // If the values are negative, the polygon is
        // oriented counterclockwise so reverse the signs.
        if (X < 0)
        {
            X = -X;
            Y = -Y;
        }

        return new Vector3(X,0f, Y);
    }


    // Return the dot product AB · BC.
    // Note that AB · BC = |AB| * |BC| * Cos(theta).
    private static float DotProduct(float Ax, float Ay,
        float Bx, float By, float Cx, float Cy)
    {
        // Get the vectors' coordinates.
        float BAx = Ax - Bx;
        float BAy = Ay - By;
        float BCx = Cx - Bx;
        float BCy = Cy - By;

        // Calculate the dot product.
        return (BAx * BCx + BAy * BCy);
    }

    // Return the cross product AB x BC.
    // The cross product is a vector perpendicular to AB
    // and BC having length |AB| * |BC| * Sin(theta) and
    // with direction given by the right-hand rule.
    // For two vectors in the X-Y plane, the result is a
    // vector with X and Y components 0 so the Z component
    // gives the vector's length and direction.
    public static float CrossProductLength(float Ax, float Ay,
        float Bx, float By, float Cx, float Cy)
    {
        // Get the vectors' coordinates.
        float BAx = Ax - Bx;
        float BAy = Ay - By;
        float BCx = Cx - Bx;
        float BCy = Cy - By;

        // Calculate the Z coordinate of the cross product.
        return (BAx * BCy - BAy * BCx);
    }

    // Return the angle ABC.
    // Return a value between PI and -PI.
    // Note that the value is the opposite of what you might
    // expect because Y coordinates increase downward.
    public static float GetAngle(float Ax, float Ay,
        float Bx, float By, float Cx, float Cy)
    {
        // Get the dot product.
        float dot_product = DotProduct(Ax, Ay, Bx, By, Cx, Cy);

        // Get the cross product.
        float cross_product = CrossProductLength(Ax, Ay, Bx, By, Cx, Cy);

        // Calculate the angle.
        return (float)Mathf.Atan2(cross_product, dot_product);
    }

    // Return True if the point is in the polygon.
    public bool PointInPolygon(Vector2[] vertices,float X, float Y)
    {
        // Get the angle between the point and the
        // first and last vertices.
        int max_point = vertices.Length - 1;
        float total_angle = GetAngle(
            vertices[max_point].x, vertices[max_point].y,
            X, Y,
            vertices[0].x, vertices[0].y);

        // Add the angles from the point
        // to each other pair of vertices.
        for (int i = 0; i < max_point; i++)
        {
            total_angle += GetAngle(
                vertices[i].x, vertices[i].y,
                X, Y,
                vertices[i + 1].x, vertices[i + 1].y);
        }

        // The total angle should be 2 * PI or -2 * PI if
        // the point is in the polygon and close to zero
        // if the point is outside the polygon.
        return (Mathf.Abs(total_angle) > 0.000001);
    }

    public List<GameObject> HighlightVertices()
    {
        int randPlaneIndex = 0;
        List<GameObject> vertexMarkerList = new List<GameObject>();
        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        //Debug.Log ("got anchor manager");
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();
        //Debug.Log ("got anchor obj linked list");
        ARPlaneAnchorGameObject planeAnchorObj = arPlaneAnchors.First.Value;

        //set it to the default first value
        ARPlaneAnchor planeAnchor = arPlaneAnchors.First.Value.planeAnchor;
        randPlaneIndex = Random.Range(0, arPlaneAnchors.Count);
        //debugText.text = "plane anchor count " + arPlaneAnchors.Count.ToString();
        int currentIndex = 0;
        foreach (var plane in arPlaneAnchors)
        {
            if (currentIndex == randPlaneIndex)
            {
                planeAnchor = plane.planeAnchor;
            }
            currentIndex++;
        }
        Debug.Log("plane extent " + planeAnchor.extent.ToString());
        Vector3[] vertices = planeAnchor.planeGeometry.boundaryVertices;
        for (int i = 0; i < vertices.Length; i++)
        {
            Vector3 pt = vertices[i];
            Debug.Log("vertex " + i.ToString() + " position " + pt.ToString());
            //float dist = Random.Range(0.05f, 1f);
            //Vector3 position = Vector3.Lerp(pt, planeAnchorObj.planeAnchor.center, dist);
            GameObject vertexMarker = Instantiate(testCube, pt, Quaternion.identity) as GameObject;
            vertexMarker.transform.parent = planeAnchorObj.gameObject.transform;
            vertexMarker.transform.localPosition = pt;
            vertexMarker.transform.parent = null;
            vertexMarker.gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
            vertexMarkerList.Add(vertexMarker);

        }
        return vertexMarkerList;
    }

    public Vector3 GetRandomPosition(out int randPlaneIndex)
    {
        // Pick a location.  This is done by selecting a vertex at random and then
        // a random point between it and the center of the plane. This will be followed by checking to see if the point is INSIDE the AR polygon or not
        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        //Debug.Log ("got anchor manager");
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();
        //Debug.Log ("got anchor obj linked list");
        ARPlaneAnchorGameObject planeAnchorObj = arPlaneAnchors.First.Value;

        //set it to the default first value
        ARPlaneAnchor planeAnchor = arPlaneAnchors.First.Value.planeAnchor;
        randPlaneIndex = Random.Range(0, arPlaneAnchors.Count);
        //debugText.text = "plane anchor count " + arPlaneAnchors.Count.ToString();
        //UnityEngine.Debug.Log("plane anchor count " + arPlaneAnchors.Count.ToString());
        int currentIndex = 0;
        foreach (var plane in arPlaneAnchors)
        {
            if (currentIndex == randPlaneIndex)
            {
                planeAnchor = plane.planeAnchor;
            }
            currentIndex++;
        }
        bool isPointInside = false;
        Vector3[] vertices = planeAnchor.planeGeometry.boundaryVertices;
        Vector3[] extentVertices = GetAxisExtents(vertices); //the first vector in this array is the "minimum" extent and the second vector is the "maximum" extent.
        Vector2[] twoDimVertices = new Vector2[vertices.Length];
        for (int i = 0; i < twoDimVertices.Length;i++)
        {
            twoDimVertices[i] = new Vector2(vertices[i].x, vertices[i].z);
        }

        Vector3 position = Vector3.zero;
        while(!isPointInside)
        {
            //Debug.Log("searching for point inside");
            Debug.Log("");
            //Vector3 pt = vertices[Random.Range(0, vertices.Length)];
            //float dist = Random.Range(0.05f, 1f);
            position = new Vector3(Random.Range(extentVertices[0].x, extentVertices[1].x), 0f, Random.Range(extentVertices[0].z, extentVertices[1].z));
            //position = Vector3.Lerp(pt, planeAnchorObj.planeAnchor.center, dist);
            isPointInside = PointInPolygon(twoDimVertices, position.x, position.z);
        }


        return position;
    }

    //this is under the assumption that we are only interested in horizontal planes
    Vector3[] GetAxisExtents(Vector3[] verts)
    {
        Vector3[] vertExtents = new Vector3[2];
        float minX = 100f;
        float minZ = 100f;
        float maxX = -100f;
        float maxZ = -100f;
        for (int i = 0; i < verts.Length;i++)
        {
            if(verts[i].x < minX)
            {
                minX = verts[i].x;
            }
            else if(verts[i].x > maxX)
            {
                maxX = verts[i].x;
            }

            if(verts[i].z < minZ)
            {
                minZ = verts[i].z;
            }
            else if(verts[i].z > maxZ)
            {
                maxZ = verts[i].z;
            }

        }
        vertExtents[0] = new Vector3(minX, 0f, minZ);
        vertExtents[1] = new Vector3(maxX,0f, maxZ);
        return vertExtents;
    }


    IEnumerator RunDistractor()
    {
        yield return StartCoroutine(distractorGame.Run());
        yield return null;
    }

    private int GetPlaneIndex(int chestInt)
    {
        return spawnPlaneIndexList[chestInt];
    }

    private Vector3 GetChestPosition(int chestInt)
    {
        return chestSpawnLocationList[chestInt];
    }


    public void EndCurrentTrial()
    {
        AcceptUserResponse(); //mark that the user responded
        StartCoroutine("InitiateNextTrial");
    }

    public void BeginNewSession()
    {
        Debug.Log("beginning new session");
        firstTrial = true; //set the first trial flag 
        arkitManager.arWorldMapManager.canvasParent.gameObject.GetComponent<CanvasGroup>().alpha = 0f;
        trialLog.LogSessionStarted(true);
        if(canNavigate)
        {
            Configuration.maxTrialTime = Configuration.maxTrialTime_navigate;
        }
        else
        {
            Configuration.maxTrialTime = Configuration.maxTrialTime_sitting;
        }
        StartCoroutine("InitiateNextTrial");
        
    }

    public IEnumerator InitiateNextTrial()
    {
        Debug.Log("initiating next trial");
        while (!finishedFeedback && !firstTrial)
        {
            yield return 0;
        }
        firstTrial = false;
        Debug.Log("about to begin trial sequence");
        
        if ((currentTrialIndex ) < maxTrials)
        {
            finishedFeedback = false;
            sessionValid = true;
            DisablePanel(beginTrialPanelUIGroup);
            yield return StartCoroutine(BeginTrial());
        }
        else
        {
            DisablePanel(beginTrialPanelUIGroup);
            sessionValid = true;
            EnablePanel(endSessionPanelUIGroup);
            trialLog.LogSessionStarted(false);
        }
        yield return null;
    }


    //public void BeginTrialSequence()
    //{
    //    arkitManager.arWorldMapManager.canvasParent.gameObject.GetComponent<CanvasGroup>().alpha = 0f;
    //    Debug.Log("initiating next trial");
    //    Debug.Log("about to begin trial sequence");
    //    if (currentTrialIndex < maxTrials)
    //    {
    //        //EnablePanel(beginTrialPanelUIGroup);
    //        sessionValid = true;
    //        StartCoroutine("BeginTrial");
    //    }
    //    else
    //    {
    //        DisablePanel(beginTrialPanelUIGroup);
    //        sessionValid = true;
    //        EnablePanel(endSessionPanelUIGroup);
    //    }

    //}

    IEnumerator BeginTrial()
    {
        //reset user response
        ResetUserResponse();
        //play start trial sound
        audioManager.PlayClipOnce(audioManager.beepHigh);
        //yield return StartCoroutine(FillMarkerPosList());
        Debug.Log("preparing spawnables");
        //wait until spawnable list is ready
        /*while (!spawnablesReady)
        {
            yield return 0;
        }*/
        Debug.Log("spawnables are ready");
        Debug.Log("Where it is is happening 0");
        yield return StartCoroutine(RunTrial());
        //play end trial sound
        audioManager.PlayClipOnce(audioManager.beepLow);
        yield return null;
    }

    IEnumerator FillMarkerPosList()
    {
        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        //Debug.Log ("got anchor manager");
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();

        //set it to the default first value
        ARPlaneAnchor planeAnchor = arPlaneAnchors.First.Value.planeAnchor;
        int randPlaneIndex = Random.Range(0, arPlaneAnchors.Count);
        int currentIndex = 0;
        foreach (var plane in arPlaneAnchors)
        {
            if (currentIndex == randPlaneIndex)
            {
                planeAnchor = plane.planeAnchor;
            }
            currentIndex++;
        }
        Vector3[] vertices = planeAnchor.planeGeometry.boundaryVertices;

        for (int j = 0; j < vertices.Length / 4; j++)
        {
            markerPosList.Add(vertices[j * 4]);
            Debug.Log("added " + vertices[j * 4].ToString());
        }



        yield return null;
    }

    public IEnumerator SpawnTreasureChest(int chestIndex)
    {

        Debug.Log("chest index is " + chestIndex.ToString());
        //reset current chest reference
        currentChest = null;

        //Session.GetTrackables<TrackedPlane>(m_AllPlanes);
        //int randInt = Random.Range (0, m_AllPlanes.Count);
        //		Vector3 position = GetRandomPosition (randInt);


        //int planeIndex = GetPlaneIndex(chestIndex);
        int planeIndex = 0;
        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();

        ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;
        int currentIndex = 0;
        foreach (var plane in arPlaneAnchors)
        {
            if (currentIndex == planeIndex)
            {
                planeAnchor = plane;
            }
            currentIndex++;
        }
        //Debug.Log("about to get chest pos");
        Vector3 position = GetChestPosition(chestIndex);
        Vector3 planeRotation = planeAnchor.gameObject.transform.rotation.eulerAngles;
        Vector3 modChestRot = new Vector3(planeRotation.x, planeRotation.y, -planeRotation.z);
        //Anchor anchor = m_AllPlanes [randInt].CreateAnchor (new Pose (position, Quaternion.identity));

        spawnChest = Instantiate(treasurePedestalPrefab, position, Quaternion.Euler(modChestRot)) as GameObject;
        spawnChest.transform.parent = planeAnchor.gameObject.transform;
        spawnChest.transform.localPosition = position;
        spawnChest.transform.parent = null;
        //now set the spawnchest reference to the actual treasure chest which is the top-most child in its hierarchy
        spawnChest = spawnChest.transform.GetChild(0).gameObject;
        currentChest = spawnChest;

        ARAnchor anchor = spawnChest.GetComponent<ARAnchor>();
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

        if (currentChest != null)
        {
            //play chest opening sound
            audioManager.PlayClipOnce(audioManager.magicWand);
            int randSpawnIndex = Random.Range(0, spawnableTrialList.Count - 1);
            GameObject spawnPrefab = spawnableTrialList[randSpawnIndex];
            spawnableTrialList.RemoveAt(randSpawnIndex);

            spawnObj = Instantiate(spawnPrefab, Vector3.zero, Quaternion.identity) as GameObject;
            spawnObj.transform.parent = currentChest.transform;
            spawnObj.transform.rotation = currentChest.transform.rotation;
            spawnObj.transform.localPosition = Vector3.zero;
            spawnObj.transform.parent = null;
            trialLog.LogTreasure(spawnObj.name, spawnObj.transform.position);

            GameObject particlePrefab = Instantiate(coinShowerParticles, Vector3.zero, Quaternion.identity) as GameObject;
            particlePrefab.transform.parent = currentChest.transform;
            particlePrefab.transform.rotation = currentChest.transform.rotation;
            particlePrefab.transform.localPosition = Vector3.zero;
            particlePrefab.transform.parent = null;

            //		debugText.text=debugText.text.Insert(0,"spawned " + spawnObj.gameObject.name + "\n" );

            //add to the spawn obj list
            Debug.Log("adding to spawnedObjList " + spawnObj.name);
            spawnedObjList.Add(spawnObj);
        }
        else
            Debug.Log("no chest exists currently");


        yield return null;
    }

    IEnumerator PerformRetrieval()
    {

        bool noTouch = false;
        bool retrievalChoiceMade = false;
        retrievalPanelUIGroup.alpha = 1f;
        int spawnCount = spawnedObjList.Count;
        //Debug.Log("spawn count " + spawnCount.ToString());
        for (int i = 0; i<spawnCount ; i++)
        {
            int randInt = Random.Range(0, spawnedObjList.Count);
            //Debug.Log ("adding to the retrieval sequence list");
            retrievalSequenceList.Add(spawnedObjList[randInt]);
            //Debug.Log("removing from spawn obj list " + spawnedObjList[randInt].gameObject.name);
            spawnedObjList.RemoveAt(randInt);
        }

        Debug.Log("retrievalSequenceList length " + retrievalSequenceList.Count.ToString());

        for (int j = 0; j < retrievalSequenceList.Count; j++)
        {
            retrievalChoiceMade = false;

            string displayName = retrievalSequenceList[j].GetComponent<SpawnableObject>().GetName();
            //Debug.Log("asking about " + displayName);
            retrievalText.text = "Where did you find the " + displayName + "?";
            trialLog.LogObjectToRecall(retrievalSequenceList[j].GetComponent<SpawnableObject>());
            //			debugText.text = debugText.text.Insert (0, displayName + " pos: " + retrievalSequenceList [j].transform.position.ToString ());

            //wait until it's picked up, then spawn an object
            while (!retrievalChoiceMade)
            {
                // If the player has not touched the screen, we are done with this update.

                //				if (Input.touchCount < 1 || (touch = Input.GetTouch (0)).phase != TouchPhase.Began) {
                //					noTouch = true;
                //				} else
                //					noTouch = false;

                //				if (!noTouch) {

                if (Input.touchCount > 0)
                {
                    var touch = Input.GetTouch(0);
                    //					Debug.Log ("got a touch");
                    if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
                    {
                        var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
                        ARPoint point = new ARPoint
                        {
                            x = screenPosition.x,
                            y = screenPosition.y
                        };

                        // prioritize results types
                        ARHitTestResultType[] resultTypes = {
                                    ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent
                                };

                        foreach (ARHitTestResultType resultType in resultTypes)
                        {
                            GameObject hitObj = new GameObject();
                            if (HitTestWithResultType(point, resultType, out hitObj))
                            {
                                //Anchor anchor = m_AllPlanes [0].CreateAnchor (new Pose (hit.Pose.position, Quaternion.identity));
                                GameObject choiceObj = Instantiate(choiceSelectionPrefab, hitObj.transform.position, hitObj.transform.rotation);
                                choiceSelectionList.Add(choiceObj);

                                //log both the player's choice position and the correct object position
                                trialLog.LogRetrievalChoice(choiceObj.transform.position, displayName);
                                trialLog.LogCorrectRetrieval(retrievalSequenceList[j].transform.position, displayName);


                                //wait to show their choice, then make it invisible
                                yield return new WaitForSeconds(1f);
                                choiceObj.GetComponent<VisibilityToggler>().TurnVisible(false);
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

    public void MarkDistractorResult(bool isSuccessful)
    {
        distractorSuccess = isSuccessful;
    }

    IEnumerator ShowFeedback()
    {
        Color lineColor = Color.red; //wrong by default
        List<GameObject> correctPositionIndicatorList = new List<GameObject>();
        List<GameObject> connectingLinesList = new List<GameObject>();
        retrievalText.text = "Showing feedback...";
        //debugText.text = "";
        //make all the spawned objects and choice selection visible
        for (int i = 0; i < retrievalSequenceList.Count; i++)
        {

            //reset the line color first
            lineColor = Color.red;
             GameObject correctPositionIndicator  = null;
               if (retrievalSequenceList[i].GetComponent<VisibilityToggler>() != null)
            {
                Debug.Log(retrievalSequenceList[i].gameObject.name + " pos: " + retrievalSequenceList[i].transform.position.ToString());

                retrievalSequenceList[i].GetComponent<VisibilityToggler>().TurnVisible(true);
                //instantiate a correct position indicator
                correctPositionIndicator = Instantiate(correctPositionIndicatorPrefab, Vector3.zero, Quaternion.identity) as GameObject;
                correctPositionIndicator.transform.parent = retrievalSequenceList[i].gameObject.transform;
                correctPositionIndicator.transform.localPosition = Vector3.zero - new Vector3(0f, 0.519f, 0f); //adjust so that the indicator is at the foot of the pedestal
                correctPositionIndicator.transform.parent = null;

                Debug.Log("correct position indicator " + correctPositionIndicator.transform.position.ToString());

                //make this adjustment for non-navigation so that the indicators are on the same vertical level as the indicators
                if(!canNavigate)
                {
                    correctPositionIndicator.transform.position = new Vector3(correctPositionIndicator.transform.position.x, choiceSelectionList[i].transform.position.y, correctPositionIndicator.transform.position.z);
                }

                //now determine if the response was within range; here we can directly use the correctpositionindicator as a comparison metric
                float responseDistance = Vector2.Distance(new Vector2(correctPositionIndicator.transform.position.x, correctPositionIndicator.transform.position.z), new Vector2(choiceSelectionList[i].transform.position.x, choiceSelectionList[i].transform.position.z));
                //debugText.enabled = true;
                //debugText.text += responseDistance.ToString() + " \n";
                Debug.Log("response distance is " + responseDistance.ToString());
                trialLog.LogResponseDistance(responseDistance); //logging response distance
                if (responseDistance < Configuration.minResponseDistance)
                {
                    lineColor = Color.green;
                    correctResponseList.Add(true);
                    trialLog.LogCorrectAnswer(correctPositionIndicator.transform.position, retrievalSequenceList[i].gameObject.name);
                }
                else
                {
                    correctResponseList.Add(false);
                    trialLog.LogIncorrectAnswer(correctPositionIndicator.transform.position, retrievalSequenceList[i].gameObject.name);
                
                }
                correctPositionIndicator.GetComponent<MeshRenderer>().material.color = lineColor;
                correctPositionIndicatorList.Add(correctPositionIndicator);
            }
            else
                Debug.Log(retrievalSequenceList[i].gameObject.name + " has viztoggle null");

            //for (int j = 0; j < choiceSelectionList.Count; j++)
            int j = i;
        //{
            if (choiceSelectionList[j].GetComponent<VisibilityToggler>() != null)
                choiceSelectionList[j].GetComponent<VisibilityToggler>().TurnVisible(true);
            else
                Debug.Log(choiceSelectionList[j].gameObject.name + " has viztoggle null ");

            //spawn connecting line
            GameObject feedbackConnectingLineObj = Instantiate(feedbackConnectingLinePrefab, Vector3.zero, Quaternion.identity) as GameObject;
            Vector3[] positions = new Vector3[2];
            positions[0] = choiceSelectionList[j].transform.position; //start position
            Debug.Log("choice selection list " + choiceSelectionList[j].transform.position.ToString());
            if (correctPositionIndicator != null)
                positions[1] = correctPositionIndicator.transform.position; // end position
            else
                positions[1] = Vector3.zero;
            Debug.Log("setting connecting line positions");
            feedbackConnectingLineObj.GetComponent<LineRenderer>().SetPositions(positions);
            feedbackConnectingLineObj.GetComponent<LineRenderer>().startColor = lineColor;
            feedbackConnectingLineObj.GetComponent<LineRenderer>().endColor = lineColor;
            connectingLinesList.Add(feedbackConnectingLineObj);
            audioManager.PlayClipOnce(audioManager.feedbackSplash);
            yield return new WaitForSeconds(1f);
        }

        //wait for few seconds before showing the scoreboard
        yield return new WaitForSeconds(2f);

        //update trials and max trials text
        trialCountText.text = "Trial " + (currentTrialIndex + 1).ToString() + "/" + maxTrials.ToString() + " completed";
        //prepare scoreboard
        yield return StartCoroutine(PrepareScoreboard());

        retrievalPanelUIGroup.alpha = 0f;
        acceptUserResponseButton.gameObject.SetActive(true);
        //wait for user input
        Debug.Log("now waiting for user input");
        yield return StartCoroutine(WaitForUserInput());

        acceptUserResponseButton.gameObject.SetActive(false);
        //then destroy them
        for (int i = 0; i < retrievalSequenceList.Count; i++)
        {
            if (retrievalSequenceList[i].transform.parent != null)
                Destroy(retrievalSequenceList[i].transform.parent.gameObject);
            else
                Destroy(retrievalSequenceList[i].gameObject);
        }
        for (int j = 0; j < choiceSelectionList.Count; j++)
        {
            if (choiceSelectionList[j].transform.parent != null)
                Destroy(choiceSelectionList[j].transform.parent.gameObject);
            else
                Destroy(choiceSelectionList[j].gameObject);
        }
        for (int k = 0; k < correctPositionIndicatorList.Count; k++)
        {
            Destroy(correctPositionIndicatorList[k].gameObject);
        }
        for (int m = 0; m < connectingLinesList.Count; m++)
        {
            Destroy(connectingLinesList[m]);
        }

        //disable scoreboard and clear response list
        scorePanelUIGroup.alpha = 0f;
        correctResponseList.Clear();
        Debug.Log("finishing feedback");
        yield return null;
    }




    IEnumerator PrepareScoreboard()
    {
        int itemScore = 0;
        scorePanelUIGroup.alpha = 1f;
        for (int i = 0; i < 3; i++)
        {

            Debug.Log("preparing scoreboard for " + retrievalSequenceList[i].gameObject.name);
            scorePanelUIGroup.transform.GetChild(i).gameObject.GetComponent<ObjectScoreLine>().SetScore(retrievalSequenceList[i].gameObject.GetComponent<SpawnableObject>().GetName(), correctResponseList[i], out itemScore);
            totalScore += itemScore;
            trialLog.LogItemScore(itemScore, retrievalSequenceList[i].gameObject.GetComponent<SpawnableObject>().GetName());
        }
        //time bonus
        int timeBonus = 0;
        if (timer.timerBar.Value > 50f)
        {
            timeBonus = 50;
        }
        else
        {
            timeBonus = 0;
        }

        totalScore += timeBonus;
        scorePanelUIGroup.transform.GetChild(3).gameObject.GetComponent<ObjectScoreLine>().scoreText.text = timeBonus.ToString();
        trialLog.LogTimeBonus(timeBonus);
        //distractor bonus
        int distractorBonus = (distractorSuccess) ? 50 : 0;
        totalScore += distractorBonus;
        trialLog.LogDistractorBonus(distractorBonus);
        scorePanelUIGroup.transform.GetChild(4).gameObject.GetComponent<ObjectScoreLine>().scoreText.text = distractorBonus.ToString();

        //total score
        scorePanelUIGroup.transform.GetChild(5).gameObject.GetComponent<ObjectScoreLine>().scoreText.text = totalScore.ToString();
        scoreText.text = totalScore.ToString();
        trialLog.LogTotalScore(totalScore);

        yield return null;
    }


    public void UpdateNavigationStatus()
    {
        canNavigate = canNavigateToggle.isOn;
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
        StartCoroutine("UpdateDebugVisuals");
    }
    //
    IEnumerator UpdateDebugVisuals()
    {

        //		debugText.text = "Debug viz: " + debugVisuals.ToString ();
        //keep things on, else turn it off
        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();
        if (arPlaneAnchors.Count > 0)
        {
            foreach (var plane in arPlaneAnchors)
            {
                plane.gameObject.GetComponent<VisibilityToggler>().TurnVisible(debugVisuals);
            }
        }

        for (int i = 0; i < testSpawnList.Count;i++)
        {
            testSpawnList[i].gameObject.GetComponent<VisibilityToggler>().TurnVisible(debugVisuals);
        }

        pointCloudManager.TogglePointCloud(debugVisuals);
        yield return null;
    }

    public void AcceptUserResponse()
    {
        Debug.Log("accepted user response");
        userResponded = true;
    }

    void ResetUserResponse()
    {
        Debug.Log("reset user response");
        userResponded = false;
    }

    void EnablePanel(CanvasGroup uiPanel)
    {
        Debug.Log("enabling panel " + uiPanel.gameObject.name);
        uiPanel.gameObject.SetActive(true);
        uiPanel.alpha = 1f;
    }


    void DisablePanel(CanvasGroup uiPanel)
    {
        Debug.Log("disabling panel " + uiPanel.gameObject.name);
        uiPanel.alpha = 0f;
        uiPanel.gameObject.SetActive(false);
    }

    public IEnumerator WaitForUserInput()
    {
        bool shouldWait = true;
        while (shouldWait)
        {
            if (userResponded)
                shouldWait = false;
            yield return 0;
        }

        userResponded = false;
        yield return null;
    }


    public ARPlaneAnchorGameObject GetPlaneObject()
    {
        Vector3 originVec = Vector3.zero;
        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        //Debug.Log ("got anchor manager");
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();
        //Debug.Log ("got anchor obj linked list");
        ARPlaneAnchorGameObject planeAnchorObj = arPlaneAnchors.First.Value;

        //set it to the default first value
        ARPlaneAnchor planeAnchor = arPlaneAnchors.First.Value.planeAnchor;

        return planeAnchorObj;

    }

    private void OnDestroy()
    {

        UnityARSessionNativeInterface.ARSessionTrackingChangedEvent -= UpdateTrackingStatus;
    }


    //TODO: NO LONGER USED
    void RemoveSpawnedObjects()
    {
        //first destroy all the spawned objects
        for (int i = 0; i < spawnedObjList.Count; i++)
        {
            Destroy(spawnedObjList[i]);
        }

        //then clear the list
        spawnedObjList.Clear();

        //destroy any spawned chests as well ; make sure to destroy their parent "ChestPedestal" object
        if (currentChest != null)
        {
            UnityEngine.Debug.Log("DESTROYED CHEST");
            Destroy(currentChest.transform.parent.gameObject);
        }
    }

    public void ExitToMainMenu()
    {
        RemoveSpawnedObjects();
        SceneManager.UnloadSceneAsync(1);
        SceneManager.LoadSceneAsync(0);
    }

    public void QuitApplication()
    {
        Application.Quit();
    }

 
	//	//remove any spawned objects
	//	RemoveSpawnedObjects();

	//	//reload the scene
	//	SceneManager.UnloadSceneAsync(0);
	//	SceneManager.LoadScene(0);
	//}

	public void ChangeScene(int sceneIndex)
	{
		if (spawnChest != null)
			Destroy (spawnChest);
		SceneManager.LoadScene (sceneIndex,LoadSceneMode.Single);

	}
}
