using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;

public class SpawnableObject : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public string GetName(){
		string name = gameObject.name;
		name = Regex.Replace (name, "(Clone)", "");
		name = Regex.Replace (name, "[()]", "");
		if (name == "Trick Location")
			return "trick";
		else
			return name;
	}
}
