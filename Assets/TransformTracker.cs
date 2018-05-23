using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TransformTracker : MonoBehaviour {

	public TextMesh posText;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		posText.text = transform.position.ToString ();
	}
}
