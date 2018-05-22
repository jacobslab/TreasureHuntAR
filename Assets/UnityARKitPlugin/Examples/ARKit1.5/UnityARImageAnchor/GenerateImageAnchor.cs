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

	// Use this for initialization
	void Start () {
		UnityARSessionNativeInterface.ARImageAnchorAddedEvent += AddImageAnchor;
		UnityARSessionNativeInterface.ARImageAnchorUpdatedEvent += UpdateImageAnchor;
		UnityARSessionNativeInterface.ARImageAnchorRemovedEvent += RemoveImageAnchor;

	}

	void AddImageAnchor(ARImageAnchor arImageAnchor)
	{
		Debug.Log ("image anchor added");
		for (int i = 0; i < markerReferenceImages.Length; i++) {
			if (arImageAnchor.referenceImageName == markerReferenceImages[i].imageName) {
				Vector3 position = UnityARMatrixOps.GetPosition (arImageAnchor.transform);
				Quaternion rotation = UnityARMatrixOps.GetRotation (arImageAnchor.transform);
				Color col = Color.black;
				imageAnchorGO = Instantiate<GameObject> (prefabToGenerate, position, rotation);

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
				imageAnchorGO.GetComponent<MeshRenderer> ().material.color = col;
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
//			Debug.Log ("changed the chest transform");
//			Debug.Log ("image transform pos: " + UnityARMatrixOps.GetPosition (arImageAnchor.transform).ToString ());
//			imageAnchorGO.transform.parent =  arImageAnchor.transform;
//			imageAnchorGO.transform.localPosition = UnityARMatrixOps.GetPosition (arImageAnchor.transform);
//			imageAnchorGO.transform.parent = null;
				imageAnchorGO.transform.position = UnityARMatrixOps.GetPosition (arImageAnchor.transform);
				imageAnchorGO.transform.rotation = UnityARMatrixOps.GetRotation (arImageAnchor.transform);
				i = markerReferenceImages.Length;
			}
		}

	}

	void RemoveImageAnchor(ARImageAnchor arImageAnchor)
	{
		Debug.Log ("image anchor removed");
		if (imageAnchorGO) {
			GameObject.Destroy (imageAnchorGO);
		}

	}

	void OnDestroy()
	{
		UnityARSessionNativeInterface.ARImageAnchorAddedEvent -= AddImageAnchor;
		UnityARSessionNativeInterface.ARImageAnchorUpdatedEvent -= UpdateImageAnchor;
		UnityARSessionNativeInterface.ARImageAnchorRemovedEvent -= RemoveImageAnchor;

	}

	// Update is called once per frame
	void Update () {
		
	}
}
