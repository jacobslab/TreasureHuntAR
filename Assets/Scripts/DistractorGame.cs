using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;
public class DistractorGame : MonoBehaviour {

    public GameObject rabbitObj;
    public ARKitManager arkitManager;
    public Text debugText;
    public CanvasGroup distractorPanel;
    public Text distractorText;
    public GameObject correctParticlePrefab;
    public GameObject wrongParticlePrefab;
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

        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();

        ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;

        int randPlaneIndex = -1;
        //find random spawn position for rabbit
        Vector3 spawnPos = taskController.GetRandomPosition(out randPlaneIndex);
        rabbitObj.transform.parent = planeAnchor.gameObject.transform;
        rabbitObj.transform.localPosition =spawnPos;

        //find a random position that is reasonable distance away from the rabbit
        Vector3 targetPos = Vector3.zero;
        while(Vector3.Distance(targetPos,rabbitObj.transform.localPosition) < Configuration.minRabbitSpawnDistance)
        {
            targetPos = taskController.GetRandomPosition(out randPlaneIndex);
            yield return 0;
        }

        rabbitObj.GetComponent<Animator>().SetBool("CanMove?", true);
        //lerp rabbit to the targetpos
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
        //float maxWaitFactor = 4f;
        float smoothTime = 4f;
        float xVelocity = 0.0f;
        float zVelocity = 0.0f;

        //first make sure the rabbit is looking at the targetpos
        rabbitObj.transform.LookAt(targetPos);
        rabbitObj.transform.localEulerAngles = new Vector3(0f, rabbitObj.transform.localEulerAngles.y, 0f); //reset x and z axes angles
        Debug.Log("moving the rabbit");
        while (moveTimer < smoothTime)
        {
            moveTimer += Time.deltaTime;
            //float lerpFactor = moveTimer / maxWaitFactor;
            //debugText.text = rabbitObj.transform.localPosition.ToString() + " with move timer " + moveTimer.ToString();
            float newPositionX = Mathf.SmoothDamp(rabbitObj.transform.localPosition.x, targetPos.x, ref xVelocity, smoothTime);
            float newPositionZ = Mathf.SmoothDamp(rabbitObj.transform.localPosition.z, targetPos.z, ref zVelocity, smoothTime);
            rabbitObj.transform.localPosition = new Vector3(newPositionX, rabbitObj.transform.localPosition.y, newPositionZ);

            //rabbitObj.transform.localPosition = Vector3.Lerp(rabbitObj.transform.localPosition, targetPos, lerpFactor);
            yield return 0;
        }
        rabbitObj.GetComponent<Animator>().SetBool("CanMove?", false);
        //rabbitObj.transform.parent = null;

        //then wait for the player to come closer to the rabbit
        float distanceLeft = 10f;
        float durationTimer = 0f;
        while (distanceLeft > Configuration.minRabbitCatchDistance && durationTimer < 8f)
        {
            //Debug.Log("waiting for the rabbit to be caught");
            durationTimer += Time.deltaTime;

            Vector3 camPos = UnityARMatrixOps.GetPosition(arkitManager.arCamManager.m_camera.transform.localPosition);
            float distance = Vector3.Distance(rabbitObj.transform.position, camPos);
            distanceLeft = Mathf.Clamp(distance - Configuration.minOpenDistance, -0.1f, Configuration.minOpenDistance);
            //debugText.text = "distance left " + distanceLeft.ToString() +  " timer " + durationTimer.ToString();
            //                                      debugText.text = distanceLeft.ToString ();
            //rabbitObj.gameObject.GetComponent<TreasureChest>().UpdateDistanceBar(distanceLeft);
            yield return 0;
        }

        bool caughtRabbit = false;
        if(distanceLeft<=Configuration.minRabbitCatchDistance)
        {
            caughtRabbit = true;
        }

        //show a caught animation;display success message 
        Debug.Log("done with the distractor");
        rabbitObj.SetActive(false);
        debugText.enabled = false;

        if (caughtRabbit)
        {
            GameObject correctParticleObj = Instantiate(correctParticlePrefab, Vector3.zero, Quaternion.identity) as GameObject;
            correctParticleObj.transform.parent = planeAnchor.gameObject.transform;
            correctParticleObj.transform.localPosition = rabbitObj.transform.localPosition;
            yield return new WaitForSeconds(2.5f);
            Destroy(correctParticleObj);
        }
        else
        {

        }


    yield return null;
    }
}
