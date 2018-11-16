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

    public Text mapNameText;
    public CanvasGroup savePanel;

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
        savePanel.alpha = 1f;
    }

    public void SaveMap()
    {
        Debug.Log("inside save map");
        mapIndex++;
        savePanel.alpha = 0f;
        path = Path.Combine(Application.persistentDataPath, mapNameText.text);
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
			UnityARSessionRunOption runOption = UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking;

			Debug.Log("Restarting session with worldMap");
			session.RunWithConfigAndOptions(config, runOption);

            if(TreasureHuntController_ARKit.Instance!=null)
            {
                StartCoroutine(TreasureHuntController_ARKit.Instance.MakeSpawnableList());
            }

        }
    }

    public void LoadSpecificMap(int selfMapIndex, out Vector3 extents)
    {
        canvasParent.GetComponent<CanvasGroup>().alpha = 0f;
        string newPath = Path.Combine(Application.persistentDataPath, "test_map_" + selfMapIndex.ToString() + ".worldmap");
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
