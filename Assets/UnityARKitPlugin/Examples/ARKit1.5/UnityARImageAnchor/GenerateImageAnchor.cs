using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class GenerateImageAnchor : MonoBehaviour {


	[SerializeField]
	private ARReferenceImage referenceImage;

	//numbered markers
	[SerializeField]
	private ARReferenceImage[] markerReferenceImages;

	[SerializeField]
	private GameObject prefabToGenerate;


	private GameObject imageAnchorGO;


	private GameObject[] anchorObjs;

	public LineRenderer lineRenderer;
	// Use this for initialization
	void Start () {
		UnityARSessionNativeInterface.ARImageAnchorAddedEvent += AddImageAnchor;
		UnityARSessionNativeInterface.ARImageAnchorUpdatedEvent += UpdateImageAnchor;
		UnityARSessionNativeInterface.ARImageAnchorRemovedEvent += RemoveImageAnchor;

		anchorObjs = new GameObject[markerReferenceImages.Length];
	}

	void AddImageAnchor(ARImageAnchor arImageAnchor)
	{
		Debug.Log ("image anchor added");
		for (int i = 0; i < markerReferenceImages.Length; i++) {
			if (arImageAnchor.referenceImageName == markerReferenceImages[i].imageName) {
				Vector3 position = UnityARMatrixOps.GetPosition (arImageAnchor.transform);
				Quaternion rotation = UnityARMatrixOps.GetRotation (arImageAnchor.transform);
				Color col = Color.black;
				anchorObjs[i] = Instantiate<GameObject> (prefabToGenerate, position, rotation);

				Debug.Log ("spawned the chest obj");
				switch(i)
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
				Debug.Log ("selected a color");
				anchorObjs[i].GetComponent<MeshRenderer> ().material.color = col;
				Debug.Log ("finished changing the color");

				i = markerReferenceImages.Length;
			}
		}
	}

	void UpdateImageAnchor(ARImageAnchor arImageAnchor)
	{
		Debug.Log ("image anchor updated");
		for (int i = 0; i < markerReferenceImages.Length; i++) {
			if (arImageAnchor.referenceImageName == markerReferenceImages[i].imageName) {
				anchorObjs[i].transform.position = UnityARMatrixOps.GetPosition (arImageAnchor.transform);
				anchorObjs[i].transform.rotation = UnityARMatrixOps.GetRotation (arImageAnchor.transform);
				if (i == 3) {
					Vector3[] linePos = new Vector3[4];
					linePos [0] = anchorObjs [0].transform.position;
					linePos [1] = anchorObjs [1].transform.position;
					linePos [2] = anchorObjs [2].transform.position;
					linePos [3] = anchorObjs [3].transform.position;
					Debug.Log ("about to set positions");
					lineRenderer.positionCount = 4;
					lineRenderer.SetPositions (linePos);
					Debug.Log ("finished setting positions");
				}
				i = markerReferenceImages.Length;
			}
		}

	}

	void RemoveImageAnchor(ARImageAnchor arImageAnchor)
	{
		Debug.Log ("image anchor removed");
		for (int i = 0; i < markerReferenceImages.Length; i++) {
			if (arImageAnchor.referenceImageName == markerReferenceImages [i].imageName) {
				if (anchorObjs [i]) {
					GameObject.Destroy (anchorObjs [i]);
				}
			}
		}

	}
		
	void OnDestroy()
	{
		UnityARSessionNativeInterface.ARImageAnchorAddedEvent -= AddImageAnchor;
		UnityARSessionNativeInterface.ARImageAnchorUpdatedEvent -= UpdateImageAnchor;
		UnityARSessionNativeInterface.ARImageAnchorRemovedEvent -= RemoveImageAnchor;

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
	void Update () {



		if (Input.touchCount > 0) {
			var touch = Input.GetTouch (0);
			Debug.Log ("got a touch");
			if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved) {
				var screenPosition = Camera.main.ScreenToViewportPoint (touch.position);
				ARPoint point = new ARPoint {
					x = screenPosition.x,
					y = screenPosition.y
				};
				Debug.Log ("new ar point: (" + point.x.ToString () + ", " + point.y.ToString() + ")");
				// prioritize results types
				ARHitTestResultType[] resultTypes = {
					ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
				}; 

				foreach (ARHitTestResultType resultType in resultTypes) {
					GameObject hitObj = new GameObject ();
					if (HitTestWithResultType (point, resultType, out hitObj)) {
					}
				}
			}
		}
	}
}
