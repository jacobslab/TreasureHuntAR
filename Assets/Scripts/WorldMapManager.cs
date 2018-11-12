using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;
public class WorldMapManager : MonoBehaviour
{
    [SerializeField]
    UnityARCameraManager m_ARCameraManager;

    public ARWorldMap m_LoadedMap;
    public Transform canvasParent;
    public GameObject mapButton;


    public static int mapIndex = 0;

	serializableARWorldMap serializedWorldMap;

    // Use this for initialization
    void Start ()
    {
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

    static string path
    {
        get { return Path.Combine(Application.persistentDataPath, "test_map_"+mapIndex.ToString()+ ".worldmap"); }
    }

    void OnWorldMap(ARWorldMap worldMap)
    {
        if (worldMap != null)
        {
            worldMap.Save(path);
            Debug.LogFormat("ARWorldMap saved to {0}", path);
        }
    }

    public void Save()
    {
        session.GetCurrentWorldMapAsync(OnWorldMap);

        //create button prefab
        GameObject buttonPrefab = Instantiate(mapButton, Vector3.zero, Quaternion.identity) as GameObject;
        buttonPrefab.transform.parent = canvasParent;
        buttonPrefab.GetComponent<RectTransform>().anchoredPosition3D = new Vector3(0f, -200f * mapIndex, 0f);
        buttonPrefab.GetComponent<MapButton>().selfMapIndex = mapIndex;
        buttonPrefab.GetComponent<MapButton>().worldMapManager = this;
        mapIndex++;
    }

    public void Load(out Vector3 extents)
    {
        Debug.LogFormat("Loading ARWorldMap {0}", path);
        var worldMap = ARWorldMap.Load(path);
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

        }
    }

    public void LoadSpecificMap(int selfMapIndex,out Vector3 extents)
    {
        string newPath = Path.Combine(Application.persistentDataPath, "test_map_" + selfMapIndex.ToString() + ".worldmap");
        Load(out extents);
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
}
