using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;
public class DistractorGame : MonoBehaviour {

    public GameObject rabbitObj;
    public ARKitManager arkitManager;
    public Text debugText;
    TreasureHuntController_ARKit taskController { get { return TreasureHuntController_ARKit.Instance; }}

	// Use this for initialization
	void Start () {
        debugText.enabled = false;
        rabbitObj.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public IEnumerator Run()
    {

        debugText.enabled = true;
        //make the rabbit visible
        rabbitObj.SetActive(true);

        UnityEngine.Debug.Log("loaded map extents are "  + arkitManager.arWorldMapManager.m_LoadedMap.extent.ToString());


        int randPlaneIndex = -1;
        //find a random position that is reasonable distance away from the rabbit
        Vector3 targetPos = Vector3.zero;
        while(Vector3.Distance(targetPos,rabbitObj.transform.localPosition) < Configuration.minRabbitSpawnDistance)
        {
            targetPos = taskController.GetRandomPosition(out randPlaneIndex);
            yield return 0;
        }

        rabbitObj.GetComponent<Animator>().SetBool("CanMove?", true);
        //lerp rabbit to the targetpos


        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();

        ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;
        int currentIndex = 0;
        foreach (var plane in arPlaneAnchors)
        {
            if (currentIndex == randPlaneIndex)
            {
                planeAnchor = plane;
            }
            currentIndex++;
        }
        rabbitObj.transform.parent = planeAnchor.gameObject.transform;
        rabbitObj.transform.localPosition = Vector3.zero;
        float moveTimer = 0f;
        float maxWaitFactor = 4f;
        while (moveTimer < maxWaitFactor)
        {
            moveTimer += Time.deltaTime;
            float lerpFactor = moveTimer / maxWaitFactor;
            debugText.text = rabbitObj.transform.localPosition.ToString() + " with time " + lerpFactor.ToString();
            rabbitObj.transform.localPosition = Vector3.Lerp(rabbitObj.transform.localPosition, targetPos, lerpFactor);
            yield return 0;
        }
        rabbitObj.GetComponent<Animator>().SetBool("CanMove?", false);
        rabbitObj.transform.parent = null;


        //then wait for the player to come closer to the rabbit
        float distanceLeft = 10f;
        float durationTimer = 0f;
        while (distanceLeft < 0f || durationTimer < 8f)
        {
            durationTimer += Time.deltaTime;

            Vector3 camPos = UnityARMatrixOps.GetPosition(arkitManager.arCamManager.m_camera.transform.localPosition);
            float distance = Vector3.Distance(rabbitObj.transform.position, camPos);
            distanceLeft = Mathf.Clamp(distance - Configuration.minOpenDistance, -0.1f, Configuration.minOpenDistance);
            debugText.text = "distance left " + distanceLeft.ToString() +  " timer " + durationTimer.ToString();
            //                                      debugText.text = distanceLeft.ToString ();
            //rabbitObj.gameObject.GetComponent<TreasureChest>().UpdateDistanceBar(distanceLeft);
            yield return 0;
        }
        debugText.enabled = false;
    yield return null;
    }
}
