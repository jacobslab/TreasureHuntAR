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

    public GameObject foundCube; //the invisible cube that will serve as a collision check for the rabbit

    public static bool rabbitLooking = false; //used to control if the device camera is looking at the rabbit or not; this is to make sure the rabbit is centrally viewed before it begins its movement

    private bool caughtRabbit =false; // flag that determines whether rabbit was caught or not

    private string catchInstructions = "Catch the rabbit by going near its location!";
    private string successInstructions = "Success! You caught the rabbit!";
    private string failureInstructions = "The rabbit escaped! Better luck next time!";
    TreasureHuntController_ARKit taskController { get { return TreasureHuntController_ARKit.Instance; }}

	// Use this for initialization
	void Start () {
        //debugText.enabled = false;
        distractorPanel.gameObject.SetActive(false);
        distractorText.text = "";
        rabbitObj.SetActive(false);
        foundCube.SetActive(false);
        Debug.Log("rabbit tag is " + rabbitObj.tag);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void AutoCatchRabbit()
    {
        rabbitLooking = true;
        MarkRabbitCaught();
    }

    public void MarkRabbitCaught()
    {
        caughtRabbit = true;
    }

    public void ResetRabbitFlag()
    {
        caughtRabbit = false;
    }

    public IEnumerator Run()
    {

        //debugText.enabled = true;
        //make the rabbit visible
        rabbitObj.SetActive(true);
        foundCube.SetActive(true);

        distractorPanel.gameObject.SetActive(true);
        distractorText.text = catchInstructions;

        UnityEngine.Debug.Log("loaded map extents are "  + arkitManager.arWorldMapManager.m_LoadedMap.extent.ToString());

        UnityARAnchorManager arAnchorManager = arkitManager.arGenPlane.GetAnchorManager();
        LinkedList<ARPlaneAnchorGameObject> arPlaneAnchors = arAnchorManager.GetCurrentPlaneAnchors();

        ARPlaneAnchorGameObject planeAnchor = arPlaneAnchors.First.Value;

        int randPlaneIndex = -1;
        //find random spawn position for rabbit
        Vector3 spawnPos = taskController.GetRandomPosition(out randPlaneIndex);
        rabbitObj.transform.parent = planeAnchor.gameObject.transform;
        rabbitObj.transform.localPosition =spawnPos;
        Debug.Log("put rabbit on a random spawn pos");

        //find a random position that is reasonable distance away from the rabbit
        Vector3 targetPos = Vector3.zero;

        Debug.Log("finding targetpos for the rabbit");
        while(Vector3.Distance(targetPos,rabbitObj.transform.localPosition) < Configuration.minRabbitSpawnDistance)
        {
            targetPos = taskController.GetRandomPosition(out randPlaneIndex);
            yield return 0;
        }
        //wait for the rabbit to move




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
        //rabbitObj.transform.parent = planeAnchor.gameObject.transform;
        //rabbitObj.transform.localPosition = Vector3.zero;


        float moveTimer = 0f;
        //float maxWaitFactor = 4f;
        float smoothTime = 4f;
        float xVelocity = 0.0f;
        float zVelocity = 0.0f;

        //first make sure the rabbit is looking at the targetpos
        rabbitObj.transform.LookAt(targetPos);
        rabbitObj.transform.localEulerAngles = new Vector3(0f, rabbitObj.transform.localEulerAngles.y, 0f); //reset x and z axes angles

        Debug.Log("waiting for rabbit to be looked at");
        yield return StartCoroutine(WaitTillRabbitLooked());

        Debug.Log("setting rabbit anim to move");
        rabbitObj.GetComponent<Animator>().SetBool("CanMove?", true);
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
        rabbitObj.transform.parent = null;

        //reset the rabbit caught flag
        ResetRabbitFlag();

        if (TreasureHuntController_ARKit.Instance.canNavigate)
        {
            //then wait for the player to come closer to the rabbit
            float distance = 10f;
            float durationTimer = 0f;
            while (distance > Configuration.minRabbitCatchDistance && durationTimer < 8f)
            {
                Debug.Log("waiting for the rabbit to be caught");
                durationTimer += Time.deltaTime;


                Matrix4x4 camMatrix = arkitManager.arCamManager.GetCurrentPose();
                Vector3 camPos = UnityARMatrixOps.GetPosition(camMatrix);
                Quaternion camRot = UnityARMatrixOps.GetRotation(camMatrix);
                distance = Vector3.Distance(rabbitObj.transform.position, camPos);
                yield return 0;
            }

            if (distance <= Configuration.minRabbitCatchDistance)
            {
                MarkRabbitCaught();
            }

        }
        //tapping on the rabbit will suffice
        else
        {
            yield return StartCoroutine(TreasureHuntController_ARKit.Instance.WaitTillObjectHit(rabbitObj,8f));

        }

        //set the rabbit inactive regardless of the result
        rabbitObj.SetActive(false);

        //show success or failure message
        if (caughtRabbit)
        {
            distractorText.text = successInstructions;
            GameObject correctParticleObj = Instantiate(correctParticlePrefab, Vector3.zero, Quaternion.identity) as GameObject;
            correctParticleObj.transform.parent = planeAnchor.gameObject.transform;
            correctParticleObj.transform.localPosition = rabbitObj.transform.localPosition;
            yield return new WaitForSeconds(2.5f);
            Destroy(correctParticleObj);
        }
        else
        {
            distractorText.text = failureInstructions;
            GameObject wrongParticleObj = Instantiate(wrongParticlePrefab, Vector3.zero, Quaternion.identity) as GameObject;
            wrongParticleObj.transform.parent = planeAnchor.gameObject.transform;
            wrongParticleObj.transform.localPosition = rabbitObj.transform.localPosition;
            yield return new WaitForSeconds(2.5f);
            Destroy(wrongParticleObj);
        }

        //reset rabbit looking var
        rabbitLooking = false;
        foundCube.SetActive(false);
        distractorPanel.gameObject.SetActive(false);

    yield return null;
    }

    bool HitTestWithResultType(ARPoint point, ARHitTestResultType resultTypes)
    {
        List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, resultTypes);
        if (hitResults.Count > 0)
        {
            foreach (var hitResult in hitResults)
            {
                foundCube.transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform);
                foundCube.transform.rotation = UnityARMatrixOps.GetRotation(hitResult.worldTransform);
                Debug.Log(string.Format("x:{0:0.######} y:{1:0.######} z:{2:0.######}", foundCube.transform.position.x, foundCube.transform.position.y, foundCube.transform.position.z));
                return true;
            }
        }
        return false;
    }


    IEnumerator WaitTillRabbitLooked()
    {
        Vector3 center = new Vector3(Screen.width / 2, Screen.height / 2, 0.5f);
        while (!rabbitLooking)
        {
            var screenPosition = Camera.main.ScreenToViewportPoint(center);
            ARPoint point = new ARPoint
            {
                x = screenPosition.x,
                y = screenPosition.y
            };
                                  //Debug.Log ("new ar point: (" + point.x.ToString () + ", " + point.y.ToString() + ")");
            // prioritize results types
            ARHitTestResultType[] resultTypes = {
                                ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent,
                            };

            foreach (ARHitTestResultType resultType in resultTypes)
            {
                GameObject hitObj = new GameObject();
                if (HitTestWithResultType(point, resultType))
                {
                    continue;
                }
            }
            yield return 0;
        }
        yield return null;
    }
}
