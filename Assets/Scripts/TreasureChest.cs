using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TreasureChest : MonoBehaviour {

	//opening variables
	public Transform pivotA;
	public Transform pivotB;
	public Transform top;
	public Transform specialObjectSpawnPoint;
	float angleToOpen = 150.0f; //degrees

	public TextMesh specialTextMesh;
	// Use this for initialization
	void Awake () {
		specialTextMesh.text = "";
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void SetItemText(string itemName)
	{
		specialTextMesh.text = itemName;
	}

	//open. most likely a treasure chest. could also be something like a giftbox.
	public IEnumerator Open(GameObject opener){


		float distOpenerToPivotA = (pivotA.position - opener.transform.position).magnitude;
		float distOpenerToPivotB = (pivotB.position - opener.transform.position).magnitude;

		//MAKE text mesh face player
//		specialTextMesh.transform.LookAt(TreasureHuntARController.Instance.FirstPersonCamera.transform);

		Vector3 pivotPos = transform.position;
		string closePivotName = ""; //actually want to use the closer pivot as our opener reference for Logging
		if (distOpenerToPivotA > distOpenerToPivotB) { //use the further away pivot
			pivotPos = pivotA.position;
			closePivotName = pivotB.name;
		} 
		else {
			pivotPos = pivotB.position;
			closePivotName = pivotA.name;
			angleToOpen = -angleToOpen;
		}


		//Quaternion origRotation = top.rotation;


		float angleChange = 8.0f;
		float directionMult = 1.0f;

		if (angleToOpen < 0) {
			directionMult = -1.0f;
		}

	
			while (directionMult*angleToOpen > 0) {
					top.RotateAround (pivotPos, -directionMult * transform.right, angleChange);
					angleToOpen -= directionMult * angleChange;
				yield return 0;
		} 

		yield return 0;
	}
}
