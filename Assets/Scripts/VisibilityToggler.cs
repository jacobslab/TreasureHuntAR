using UnityEngine;
using System.Collections;

public class VisibilityToggler : MonoBehaviour {

	bool isVisible = true;
	float currentAlpha = 1.0f;

	public bool isPlane=false;

	// Use this for initialization
	void Start () {
		//do initial visibility check upon spawn
		if (isPlane) {
			if(TreasureHuntController_ARKit.Instance!=null)
				TurnVisible (TreasureHuntController_ARKit.Instance.debugVisuals);
		}
	}

	// Update is called once per frame
	void Update () {

	}

//	public bool GetVisibility(){
//		return isVisible;
//	}

	//function to turn off (or on) the object without setting it inactive -- because we want to keep logging on
	public void TurnVisible(bool shouldBeVisible){ 

		//if it is a plane, then turn off the line renderer showing the plane geometry as well
		if (isPlane) {
			GetComponent<LineRenderer> ().enabled = shouldBeVisible;
		}
		if(GetComponent<MeshRenderer>() != null){
			GetComponent<MeshRenderer>().enabled = shouldBeVisible;
		}

		MeshRenderer[] renderers = GetComponentsInChildren<MeshRenderer>();
		for(int i = 0; i < renderers.Length; i++){
			renderers[i].enabled = shouldBeVisible;
		}

//		TreasureHuntARController.Instance.debugText.text = TreasureHuntARController.Instance.debugText.text.Insert (0, gameObject.name + "visible: " + shouldBeVisible.ToString ());


//		//turn off all colliders of an object
//		if(GetComponent<Collider>() != null){
//			GetComponent<Collider>().enabled = shouldBeVisible;
//		}
//		Collider[] colliders = GetComponentsInChildren<Collider>();
//		for(int i = 0; i < colliders.Length; i++){
//			colliders[i].enabled = shouldBeVisible;
//		}


		isVisible = shouldBeVisible;

	}

//	public void SetAlpha(float newAlpha){
//		currentAlpha = newAlpha;
//
//		Renderer myRenderer = GetComponent<Renderer> ();
//		if(myRenderer != null){
//			Color materialColor = myRenderer.material.color;
//			myRenderer.material.color = new Color(materialColor.r, materialColor.g, materialColor.b, newAlpha);
//		}
//
//		Renderer[] renderers = GetComponentsInChildren<Renderer>();
//		for(int i = 0; i < renderers.Length; i++){
//			Color materialColor = renderers[i].material.color;
//			renderers[i].material.color = new Color(materialColor.r, materialColor.g, materialColor.b, newAlpha);
//		}
//	}
//
//	public float GetAlpha(){
//		return currentAlpha;
//	}

}