using UnityEngine;
using System.Collections;

public class Subject {
	
	public string name;
	public int score;
	public int trials;

	public Subject(){

	}

	public Subject(string newName, int newScore, int newTrial){
		name = newName;
		score = newScore;
		trials = newTrial;
	}

	public void IncrementTrial () {
		Debug.Log("incrementing session");
		trials++;
	}

}
