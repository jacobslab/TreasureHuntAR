using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Cubecast : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnCollisionEnter(Collision col)
    {
        if(col.gameObject.tag=="Rabbit")
        {
            DistractorGame.rabbitLooking = true;
        }
    }

    private void OnCollisionExit(Collision other)
    {
        if(other.gameObject.tag=="Rabbit")
        {
            DistractorGame.rabbitLooking = false;
        }
    }
}
