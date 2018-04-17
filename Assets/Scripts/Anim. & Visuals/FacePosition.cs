using UnityEngine;
using System.Collections;

public class FacePosition : MonoBehaviour {

	public Transform TargetPositionTransform;
	public bool ShouldFacePlayer = false;
	public bool ShouldFlip180 = false; //text meshes have their forward direction 180 degrees flipped...


	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
		if (!ShouldFacePlayer) {
			if(TargetPositionTransform != null){
				FaceThePosition (TargetPositionTransform.position,TargetPositionTransform.rotation);
			}
			else {
				Debug.Log("Face position transform is null! NAME: " + gameObject.name);
			}
		}
		else {
			FaceThePosition (TreasureHuntARController.Instance.FirstPersonCamera.transform);
		}
	}
	void FaceThePosition(Transform transformToFace){
		Quaternion origRot = transformToFace.rotation;
		transform.LookAt (transformToFace);
		float yRot = transform.rotation.eulerAngles.y;

		transform.rotation = Quaternion.Euler (origRot.eulerAngles.x, yRot, origRot.eulerAngles.z);

		if (ShouldFlip180) {
			transform.RotateAround(transform.position, Vector3.up, 180.0f);
		}
	}
	void FaceThePosition(Vector3 positionToFace,Quaternion rotationToFace){
		Quaternion origRot = transform.rotation;
		GameObject emptyObj = new GameObject ();
		emptyObj.transform.rotation = rotationToFace;
		emptyObj.transform.position = positionToFace;
		transform.LookAt (emptyObj.transform);
		float yRot = transform.rotation.eulerAngles.y;

		transform.rotation = Quaternion.Euler (origRot.eulerAngles.x, yRot, origRot.eulerAngles.z);

		if (ShouldFlip180) {
			transform.RotateAround(transform.position, Vector3.up, 180.0f);
		}
	}
}