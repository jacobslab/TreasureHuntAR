using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;

public class MapButton : MonoBehaviour {

    public WorldMapManager worldMapManager;
    public Text buttonText;
    public int selfMapIndex = -1;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void LoadMap()
    {
        Vector3 extents = Vector3.zero;
        worldMapManager.LoadSpecificMap(buttonText.text, out extents);
        //buttonText.text = "worldmap " + selfMapIndex.ToString() + " \n " + extents.ToString();
    }
}
