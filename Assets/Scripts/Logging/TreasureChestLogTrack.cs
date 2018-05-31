using UnityEngine;
using System.Collections;

public class TreasureChestLogTrack : LogTrack { //currently a treasure chest.

	SpawnableObject spawnableObject;

	// Use this for initialization
	void Start () {
		spawnableObject = GetComponent<SpawnableObject> ();
	}

	public void LogOpening(string closerPivotName, bool isSpecial){ //the closer pivot is used as the object reference for opening the chest later --> thus, it will open with the opposite pivot
		if (Configuration.isLogging) {
			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), GetNameToLog() + separator + "TREASURE_OPEN" + separator
			                + "IS_SPECIAL" + separator + isSpecial + separator + "OPENER_REFERENCE" + separator + closerPivotName);
		}
	}

	public void LogPlayerChestCollision(){
		if (Configuration.isLogging) {
			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), GetNameToLog() + separator + "PLAYER_CHEST_COLLISION");
			Debug.Log ("Logged player chest collision event.");
		}
	}

	public void LogTreasureLabel(string labelText){
		if (Configuration.isLogging) {
			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), GetNameToLog() + separator + "TREASURE_LABEL" + separator + labelText);
		}
	}

	string GetNameToLog(){
		string name = gameObject.name;
		if (spawnableObject) {
			name = spawnableObject.GetName();
		}
		return name;
	}
}
