using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class DistractorGame : MonoBehaviour {

    public GameObject rabbitObj;
    public ARKitManager arkitManager;

    TreasureHuntController_ARKit taskController { get { return TreasureHuntController_ARKit.Instance; }}

	// Use this for initialization
	void Start () {
        rabbitObj.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public IEnumerator Run()
    {

        //make the rabbit visible
        rabbitObj.SetActive(true);

        UnityEngine.Debug.Log("loaded map extents are "  + arkitManager.arWorldMapManager.m_LoadedMap.extent.ToString());


        //find a random position that is reasonable distance away from the rabbit
        Vector3 targetPos = Vector3.zero;
        while(Vector3.Distance(targetPos,rabbitObj.transform.localPosition) < Configuration.minRabbitSpawnDistance)
        {
            yield return 0;
        }

        int randPlaneIndex = -1;
        targetPos = taskController.GetRandomPosition(out randPlaneIndex);
        yield return null;
    }
}
