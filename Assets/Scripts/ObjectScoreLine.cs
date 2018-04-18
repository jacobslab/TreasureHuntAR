using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ObjectScoreLine : MonoBehaviour {

	public Text nameText;
	public Text scoreText;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void SetScore(string itemName, bool isCorrect, out int itemScore)
	{
		itemScore = 0;
		if (isCorrect)
			itemScore = 250;
		else
			itemScore = -100;
		nameText.text = itemName;
		scoreText.text = itemScore.ToString();
	}

	public void SetTotalScore(int totalScore)
	{
		scoreText.text = totalScore.ToString ();
	}
}
