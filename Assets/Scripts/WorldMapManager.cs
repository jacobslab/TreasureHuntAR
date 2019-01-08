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

    public RawImage mapScreenshot;

    private string path = "";


    public static int mapIndex = 0;

	serializableARWorldMap serializedWorldMap;

    // Use this for initialization
    void Start ()
    {
        if (savePanel != null)
        {
            savePanel.alpha = 0f;
        }
        if(canvasParent!=null)
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
        ScreenCapture.CaptureScreenshot("temp.png");
        savePanel.alpha = 1f;
    }

    public void BeginSaveSequence()
    {
        StartCoroutine("SaveMapScreenshot");
    }

    IEnumerator SaveMapScreenshot()
    {




        //save screenshot first
        savePanel.alpha = 0f;
        path = Path.Combine(Application.persistentDataPath, mapNameText.text);
        string sourceName = Path.Combine(Application.persistentDataPath, "temp.png");
        string destName = Path.Combine(Application.persistentDataPath, mapNameText.text + "_image.png");
        Debug.Log("searching for source at " + sourceName);
        if(File.Exists(sourceName))
        {
            Debug.Log("moving file to " + destName);
            File.Move(sourceName, destName);
        }

        
        //then load the image
        Debug.Log("loading image");
        if (File.Exists(destName))
        {
            Debug.Log("file exists at destination; about to load now");
            string imagePath = Path.Combine(Application.persistentDataPath, mapNameText.text + "_image.png");
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

        SaveMap();
        yield return null;
    }

    public void SaveMap()
    {

        Debug.Log("inside save map");
        mapIndex++;
      
        Debug.Log("new path is " + path);
        session.GetCurrentWorldMapAsync(OnWorldMap);

        Debug.Log("creating button prefab");
        //create button prefab
        GameObject buttonPrefab = Instantiate(mapButton, Vector3.zero, Quaternion.identity) as GameObject;
        buttonPrefab.transform.parent = canvasParent;
        buttonPrefab.GetComponent<RectTransform>().anchoredPosition3D = new Vector3(0f, -200f * mapIndex, 0f);
        buttonPrefab.GetComponent<MapButton>().selfMapIndex = mapIndex;
        buttonPrefab.GetComponent<MapButton>().worldMapManager = this;

    }

    IEnumerator LoadImage(string destName)
    {

     

        yield return null;
    }

    public void LoadDropdownSelectedMap()
    {
        int selectedOption = TreasureHuntController_ARKit.Instance.mapDropdown.value;
        string selectedMapName = TreasureHuntController_ARKit.Instance.mapList[selectedOption];
        Vector3 extents = Vector3.zero;
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
