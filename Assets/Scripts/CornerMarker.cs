using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class CornerMarker : MonoBehaviour {

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

	void Update()
	{
	}
}
