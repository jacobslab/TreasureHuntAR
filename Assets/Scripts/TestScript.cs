using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestScript : MonoBehaviour {

	public GameObject garlic;
	private bool isVisible=true;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.R)) {
			isVisible = !isVisible;
			garlic.GetComponent<VisibilityToggler> ().TurnVisible (isVisible);
		}
	}
}
