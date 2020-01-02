using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class WorldMapManager : MonoBehaviour
{
    [SerializeField]
    UnityARCameraManager m_ARCameraManager;

    public ARWorldMap m_LoadedMap;
    public Transform canvasParent;
    public GameObject mapButton;

    public Transform worldOrigin;

    public Text mapNameText;
    public CanvasGroup savePanel;
    public CanvasGroup saveScreenshotPanel;
    public CanvasGroup mapButtonPanel;

    public RawImage mapScreenshot;
    public bool isRelocalizing = false;

    private string path = "";

    private bool waitForScreenshot = false;


    public static int mapIndex = 0;

	serializableARWorldMap serializedWorldMap;

    // Use this for initialization
    void Start ()
    {
        if (savePanel != null)
        {
            savePanel.alpha = 0f;
        }
        if(saveScreenshotPanel!=null)
        {
            saveScreenshotPanel.gameObject.SetActive(false);
            saveScreenshotPanel.alpha = 0f;
        }
        if (mapButtonPanel != null)
        {
            mapButtonPanel.alpha = 1f;

        }
        if(mapScreenshot!=null)
        {
            mapScreenshot.GetComponent<CanvasGroup>().alpha = 0f;
        }
        if (canvasParent!=null)
        {
            canvasParent.gameObject.SetActive(true);
        }
        ResetScene();
        mapIndex = 1;
        path = Path.Combine(Application.persistentDataPath, "test_map_" + mapIndex.ToString() + ".worldmap");
        UnityARSessionNativeInterface.ARFrameUpdatedEvent += OnFrameUpdate;
    }

    ARTrackingStateReason m_LastReason;

    void OnFrameUpdate(UnityARCamera arCamera)
    {
        if (arCamera.trackingReason != m_LastReason)
        {
            Application.SetStackTraceLogType(LogType.Log, StackTraceLogType.None);
            Debug.LogFormat("worldTransform: {0}", arCamera.worldTransform.column3);
            Debug.LogFormat("trackingState: {0} {1}", arCamera.trackingState, arCamera.trackingReason);
            m_LastReason = arCamera.trackingReason;
        }
    }

    static UnityARSessionNativeInterface session
    {
        get { return UnityARSessionNativeInterface.GetARSessionNativeInterface(); }
    }


    void OnWorldMap(ARWorldMap worldMap)
    {
        if (worldMap != null)
        {
            path += " " + worldMap.extent.ToString() + ".worldmap";
            worldMap.Save(path);

            Debug.LogFormat("ARWorldMap saved to {0}", path);
        }
    }

    public void OpenSavePanel()
    {
        Debug.Log("opening save panel");
        //pause plane detection
        PausePlaneDetection();
        savePanel.alpha = 1f;
    }

    public void BeginSaveSequence()
    {
        mapButtonPanel.alpha = 0f;
        StartCoroutine("SaveMapScreenshot");
    }

    public void SaveScreenshot()
    {
        waitForScreenshot = false; //turning it false will exit out of the while loop in SaveMapScreenshot coroutine
    }

    public void PausePlaneDetection()
    {

        //pause plane detection
        UnityEngine.Debug.Log("about to pause plane detection");
        UnityARPlaneDetection planeDetection = UnityARPlaneDetection.None;
        ARKitWorldTrackingSessionConfiguration config = new ARKitWorldTrackingSessionConfiguration();
        config.planeDetection = planeDetection;
        config.alignment = UnityARAlignment.UnityARAlignmentGravity;
        config.getPointCloudData = false;
        config.enableLightEstimation = false;
        session.RunWithConfig(config);
    }

    IEnumerator SaveMapScreenshot()
    {

        //turn off the save panel
        savePanel.alpha = 0f;

        waitForScreenshot = true; //to wait in the while loop below

        //turn on the save screenshot panel
        saveScreenshotPanel.gameObject.SetActive(true);
        saveScreenshotPanel.alpha = 1f;

        //wait until the save screenshot button has been pressed
        while(waitForScreenshot)
        {
            yield return 0;
        }

        saveScreenshotPanel.alpha = 0f;
        //save screenshot first
        ScreenCapture.CaptureScreenshot("temp.png");

        yield return new WaitForSeconds(1f);
        path = Path.Combine(Application.persistentDataPath, mapNameText.text);
        string sourceName = Path.Combine(Application.persistentDataPath, "temp.png");
        string destName = Path.Combine(Application.persistentDataPath, mapNameText.text + "_image.png");
        Debug.Log("searching for source at " + sourceName);
        if(File.Exists(sourceName))
        {
            Debug.Log("moving file to " + destName);
            File.Move(sourceName, destName);
        }


        yield return StartCoroutine(LoadImage(destName));
        SaveMap();

        yield return new WaitForSeconds(3f);
        mapScreenshot.gameObject.GetComponent<CanvasGroup>().alpha = 0f;
        mapButtonPanel.alpha = 1f;
        yield return null;
    }

    public void TurnOffMapPreview()
    {
        mapScreenshot.GetComponent<CanvasGroup>().alpha = 0f;
    }

    public void SaveMap()
    {

        Debug.Log("inside save map");
        mapIndex++;
      
        Debug.Log("new path is " + path);
        session.GetCurrentWorldMapAsync(OnWorldMap);

        //Debug.Log("creating button prefab");
        //create button prefab
        //GameObject buttonPrefab = Instantiate(mapButton, Vector3.zero, Quaternion.identity) as GameObject;
        //buttonPrefab.transform.parent = canvasParent;
        //buttonPrefab.GetComponent<RectTransform>().anchoredPosition3D = new Vector3(0f, -200f * mapIndex, 0f);
        //buttonPrefab.GetComponent<MapButton>().selfMapIndex = mapIndex;
        //buttonPrefab.GetComponent<MapButton>().worldMapManager = this;

    }

    IEnumerator LoadImage(string destName)
    {
        mapScreenshot.GetComponent<CanvasGroup>().alpha = 1f;
        //then load the image
        Debug.Log("loading image with dest " + destName);
        if (File.Exists(destName))
        {
            Debug.Log("file exists at destination; about to load now");
            string imagePath = destName;
            Debug.Log("image path is " + imagePath);
            //var texture = Resources.Load(imagePath) as Texture2D;
            string wwwPlayerFilePath = "file://" + imagePath;
            WWW www = new WWW(wwwPlayerFilePath);
            yield return www;
            Texture texture = www.texture;
            Debug.Log(texture);
            if (texture != null)
            {
                Debug.Log("texture exists; setting it on rawimage now");
                mapScreenshot.texture = texture;
            }
        }
        yield return null;
    }

    public void LoadDropdownSelectedMap()
    {
        int selectedOption = TreasureHuntController_ARKit.Instance.mapDropdown.value;
        string selectedMapName = TreasureHuntController_ARKit.Instance.mapList[selectedOption];
        Vector3 extents = Vector3.zero;

        string baseName = selectedMapName.Split('(')[0];
        Debug.Log("base name after removing parentheses " + baseName);
        baseName = baseName.Split(' ')[0];
        Debug.Log("base name after removing space " + baseName);
        string destName = Path.Combine(Application.persistentDataPath, baseName + "_image.png");
        StartCoroutine("LoadImage", destName);
        isRelocalizing = true;
        TreasureHuntController_ARKit.Instance.trialLog.LogWorldMapLoaded(baseName);

        LoadSpecificMap(selectedMapName, out extents);
    }

    public void Load(string newPath,out Vector3 extents)
    {
        Debug.LogFormat("Loading ARWorldMap {0}", newPath);
        var worldMap = ARWorldMap.Load(newPath);
        extents = Vector3.zero;
        if (worldMap != null)
        {
            m_LoadedMap = worldMap;
            Debug.LogFormat("Map loaded. Center: {0} Extent: {1}", worldMap.center, worldMap.extent);

            UnityARSessionNativeInterface.ARSessionShouldAttemptRelocalization = true;
            UnityARPlaneDetection planeDetect = UnityARPlaneDetection.None;
            var config = m_ARCameraManager.sessionConfiguration;
            config.planeDetection = planeDetect;
            config.getPointCloudData = false;
            config.alignment = UnityARAlignment.UnityARAlignmentGravity;
            config.worldMap = worldMap;
            extents = worldMap.extent;
            float extent_x = extents.x;
            float extent_z = extents.z;

            //update the map variables
            Configuration.AdjustMapVariables((extent_x > extent_z) ? extent_x : extent_z);

            UnityARSessionRunOption runOption = UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking;


            TreasureHuntController_ARKit.Instance.trialLog.LogWorldMapLoadSuccessful();
            ARPlaneAnchorGameObject planeObj = TreasureHuntController_ARKit.Instance.GetPlaneObject();
            Vector3 originVec = planeObj.gameObject.transform.position;
            Vector3 centerVec = planeObj.planeAnchor.center;
            Vector3[] verticesArray = planeObj.planeAnchor.planeGeometry.boundaryVertices;
            TreasureHuntController_ARKit.Instance.trialLog.LogEnvironmentDimensions(originVec, centerVec, verticesArray);
            Debug.Log("Restarting session with worldMap");
			session.RunWithConfigAndOptions(config, runOption);
            if (TreasureHuntController_ARKit.Instance!=null)
            {
                StartCoroutine(TreasureHuntController_ARKit.Instance.MakeSpawnableList());
            }

        }
    }

    public void ResetWorldOrigin()
    {
        UnityARSessionNativeInterface.GetARSessionNativeInterface().SetWorldOrigin(worldOrigin);

    }

    public void LoadSpecificMap(string mapName, out Vector3 extents)
    {
        canvasParent.GetComponent<CanvasGroup>().alpha = 0f;
        canvasParent.gameObject.SetActive(false);
        string newPath = Path.Combine(Application.persistentDataPath, mapName);
        Load(newPath,out extents);
        //Load();
    }


	void OnWorldMapSerialized(ARWorldMap worldMap)
	{
		if (worldMap != null)
		{
			//we have an operator that converts a ARWorldMap to a serializableARWorldMap
			serializedWorldMap = worldMap;
			Debug.Log ("ARWorldMap serialized to serializableARWorldMap");
		}
	}


	public void SaveSerialized()
	{
		session.GetCurrentWorldMapAsync(OnWorldMapSerialized);
	}

	public void LoadSerialized()
	{
		Debug.Log("Loading ARWorldMap from serialized data");
		//we have an operator that converts a serializableARWorldMap to a ARWorldMap
		ARWorldMap worldMap = serializedWorldMap;
		if (worldMap != null)
		{
			m_LoadedMap = worldMap;
			Debug.LogFormat("Map loaded. Center: {0} Extent: {1}", worldMap.center, worldMap.extent);

			UnityARSessionNativeInterface.ARSessionShouldAttemptRelocalization = true;

			var config = m_ARCameraManager.sessionConfiguration;
			config.worldMap = worldMap;
			UnityARSessionRunOption runOption = UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking;

			Debug.Log("Restarting session with worldMap");
			session.RunWithConfigAndOptions(config, runOption);
		}

	}

    public void ResetScene()
    {

        Debug.Log("ABOUT TO RESET THE SCENE");
        ARKitWorldTrackingSessionConfiguration sessionConfig = new ARKitWorldTrackingSessionConfiguration(UnityARAlignment.UnityARAlignmentGravity, UnityARPlaneDetection.HorizontalAndVertical);
        UnityARSessionNativeInterface.GetARSessionNativeInterface().RunWithConfigAndOptions(sessionConfig, UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking);
    }

    public void LoadMainMenu()
    {

        SceneManager.UnloadSceneAsync(2);

        SceneManager.LoadScene(0);
    }
}
