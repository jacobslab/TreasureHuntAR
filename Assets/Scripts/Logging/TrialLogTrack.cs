using UnityEngine;
using System.Collections;

public class TrialLogTrack : LogTrack {


	bool firstLog = false;

	void Update(){
		if (Configuration.isLogging && !firstLog) {
			LogVersion();
			LogLanguage ();
//			LogEnvironmentDimensions ();
			firstLog = true;
		}
	}

	//gets called from trial controller instead of in update!
	public void Log(int trialNumber, int numTreasureChests, int numSpecialObjects, bool isSequential, bool isStim){
		if (Configuration.isLogging) {
			LogTrial (trialNumber, numTreasureChests, numSpecialObjects, isSequential, isStim);
		}
	}

	void LogVersion(){
		Debug.Log ("LOGGED VERSION");
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Experiment Info" + separator + "VERSION" + separator + Configuration.BuildVersion.ToString() + separator + Configuration.VersionNumber);
	}

	void LogLanguage(){
		Debug.Log ("LOGGED LANGUAGE");
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Experiment Info" + separator + "LANGUAGE" + separator + Configuration.myLanguage);
	}

	//LOGGED ON THE START OF THE TRIAL.
	void LogTrial(int trialNumber, int numTreasureChests, int numSpecialObjects, bool isSequential, bool isStim){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Trial Info" + separator + "NUM_TRIALS" + separator + trialNumber + separator
		                + "NUM_TREASURE" + separator + numTreasureChests + separator + "NUM_SPECIAL_OBJECTS" + separator + numSpecialObjects + separator 
							+ "IS_SEQUENTIAL" + separator + isSequential + separator + "IS_STIM" + separator + isStim);
	}


	//TODO: move to an experiment or an environment logger... just want to log this once at the beginning of the trials so there is a reference for all positions in the world.
//	void LogEnvironmentDimensions(){
//		//log center
//		Vector3 envCenter = exp.environmentController.center;
//		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "ENV_CENTER" + separator + envCenter.x + separator + envCenter.y + separator + envCenter.z);
//	
//		//log walls
//		Vector3 wallPos = exp.environmentController.WallsXPos.position;
//		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "ENV_WALL_XPOS" + separator + wallPos.x + separator + wallPos.y + separator + wallPos.z);
//
//		wallPos = exp.environmentController.WallsXNeg.position;
//		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "ENV_WALL_XNEG" + separator + wallPos.x + separator + wallPos.y + separator + wallPos.z);
//
//		wallPos = exp.environmentController.WallsZPos.position;
//		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "ENV_WALL_ZPOS" + separator + wallPos.x + separator + wallPos.y + separator + wallPos.z);
//
//		wallPos = exp.environmentController.WallsZNeg.position;
//		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "ENV_WALL_ZNEG" + separator + wallPos.x + separator + wallPos.y + separator + wallPos.z);
//		Debug.Log ("LOGGED ENV");
//	}


	//TODO: move to an experiment logger
	public void LogWaitForJitterStarted(float jitter){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "RANDOM_JITTER_STARTED" + separator + jitter);
		Debug.Log ("JITTER STARTED LOGGED: " + jitter);
	}
	
	//TODO: move to an experiment logger
	public void LogWaitForJitterEnded(float jitter){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "RANDOM_JITTER_ENDED" + separator + jitter);
		Debug.Log ("JITTER ENDED LOGGED: " + jitter);
	}




	public void LogAreYouSureResponse(bool response){
		//TODO: CHANGE THE "DOUBLE DOWN" TO ARE YOU SURE OR SOMETHING.
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "DOUBLE_DOWN_RESPONSE" + separator + response);
		Debug.Log ("DOUBLE DOWN LOGGED: " + response);
	}


	#if MRIVERSION

	public void LogMRITimeout(){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "MRI_TIMEOUT");
		Debug.Log ("MRI timeout");
	}

	public void LogPlayerNavigationTimeout(){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "MRI_NAVIGATION_TIMEOUT");
		Debug.Log ("chest navigation timeout");
	}

	public void LogPlayerAutodrive(bool isStarted){
		if(isStarted){
			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "MRI_AUTODRIVE_STARTED");
			Debug.Log ("chest autodrive starting");
		}
		else{
			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "MRI_AUTODRIVE_ENDED");
			Debug.Log ("chest autodrive ending");
		}
	}

	/*public void LogRememberResponseTimeout(){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "MRI_REMEMBER_RESPONSE_TIMEOUT");
		Debug.Log ("remember response timeout");
	}

	public void LogScoreScreenTimeout(){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "MRI_SCORESCREEN_TIMEOUT");
		Debug.Log ("scorescreen timeout");
	}

	public void LogFeedbackTimeout(){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "MRI_FEEDBACK_TIMEOUT");
		Debug.Log ("feedback timeout");
	}

	public void LogDistractorResponseTimeout(){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "MRI_DISTRACTOR_RESPONSE_TIMEOUT");
		Debug.Log ("distractor response timeout");
	}

	public void LogDistractorFeedbackTimeout(){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "MRI_DISTRACTOR_FEEDBACK_TIMEOUT");
		Debug.Log ("distractor feedback timeout");
	}*/
	#endif

	//if the UI answer selector has moved TODO: move to an answer selector logger?
//	public void LogAnswerPositionMoved(Config_CoinTask.MemoryState memoryState, bool isRememberResponse){ //either remember response or double down response
//		if (ExperimentSettings_CoinTask.isLogging) {
//			string answerPosition = "NO";
//
//			switch (memoryState) {
//			case Config_CoinTask.MemoryState.yes:
//				answerPosition = "YES";
//				break;
//			case Config_CoinTask.MemoryState.maybe:
//				answerPosition = "MAYBE";
//				break;
//			case Config_CoinTask.MemoryState.no:
//				answerPosition = "NO";
//				break;
//			}
//	
//			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "REMEMBER_ANSWER_MOVEMENT" + separator + answerPosition);
//			Debug.Log ("REMEMBER MOVEMENT LOGGED: " + answerPosition);
//		}
//	}



    public void LogCamPosition(Vector3 camPos)
    {
        //UnityEngine.Debug.Log("logging cam position");
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "CAM_POS" + separator + camPos.x.ToString() + separator + camPos.y.ToString() + separator + camPos.z.ToString());
    }
	//THE FOLLOWING ARE EVENTS

	public void LogPauseEvent(bool isPaused){
			if (Configuration.isLogging) {
			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), gameObject.name + separator + "TASK_PAUSED" + separator + isPaused); //logged for replay
			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "TASK_PAUSED" + separator + isPaused); //logged for parsing events
			Debug.Log ("Logged pause event. isPaused: " + isPaused);
		}
	}

	public void LogVideoEvent(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "INSTRUCTION_VIDEO_STARTED");
				Debug.Log ("Logged video started event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "INSTRUCTION_VIDEO_ENDED");
				Debug.Log ("Logged video ended event.");
			}
		}
	}

	public void LogInstructionEvent(){
		if (Configuration.isLogging) {
			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "SHOWING_INSTRUCTIONS");
			Debug.Log ("Logged instruction event.");
		}
	}

	public void LogBeginningExplorationEvent(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "FREE_EXPLORATION_STARTED");
				Debug.Log ("Logged exploration event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "FREE_EXPLORATION_ENDED");
				Debug.Log ("Logged exploration ended event.");
			}
		}
	}

	public void LogPlayerChestRotation(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "PLAYER_CHEST_ROTATION_STARTED");
				Debug.Log ("Logged player chest rotation started event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "PLAYER_CHEST_ROTATION_ENDED");
				Debug.Log ("Logged player chest rotation ended event.");
			}
		}
	}

	public void LogTransportationToHomeEvent(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "HOMEBASE_TRANSPORT_STARTED");
				Debug.Log ("Logged home transport event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "HOMEBASE_TRANSPORT_ENDED");
				Debug.Log ("Logged home transport ended event.");
			}
		}
	}

	public void LogTransportationToTowerEvent(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "TOWER_TRANSPORT_STARTED");
				Debug.Log ("Logged tower transport event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "TOWER_TRANSPORT_ENDED");
				Debug.Log ("Logged tower transport ended event.");
			}
		}
	}

	public void LogTrialNavigation(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "TRIAL_NAVIGATION_STARTED");
				Debug.Log ("Logged nav started event.");
			}
			else {
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "TRIAL_NAVIGATION_ENDED");
				Debug.Log ("Logged nav ended event.");
			}
		}
	}

	public void LogDistractorGame(bool isStarting){ //if it's not starting, then it's ending
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "DISTRACTOR_GAME_STARTED");
				Debug.Log ("Logged distractor game started event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "DISTRACTOR_GAME_ENDED");
				Debug.Log ("Logged distractor game ended event.");
			}
		}
	}

	public void LogRecallPhaseStarted(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "RECALL_PHASE_STARTED");
				Debug.Log ("Logged recall started event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "RECALL_PHASE_ENDED");
				Debug.Log ("Logged recall ended event.");
			}
		}
	}

	public void LogObjectToRecall(SpawnableObject spawnableToRecall){
		if (Configuration.isLogging) {
			subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "RECALL_SPECIAL" + separator + spawnableToRecall.GetName ());
			Debug.Log ("Logged object recall event.");
		}
	}

	public void LogRecallChoiceStarted(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "RECALL_CHOICE_STARTED");
				Debug.Log ("Logged recall choice started event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "RECALL_CHOICE_ENDED");
				Debug.Log ("Logged recall choice ended event.");
			}
		}
	}

	public void LogFeedback(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "FEEDBACK_STARTED");
				Debug.Log ("Logged feedback started event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "FEEDBACK_ENDED");
				Debug.Log ("Logged feedback ended event.");
			}
		}
	}

	public void LogScoreScreenStarted(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "SCORESCREEN_STARTED");
				Debug.Log ("Logged score screen started event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "SCORESCREEN_ENDED");
				Debug.Log ("Logged score screen ended event.");
			}
		}
	}

	public void LogBlockScreenStarted(bool isStarting){
		if (Configuration.isLogging) {
			if(isStarting){
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "BLOCKSCREEN_STARTED");
				Debug.Log ("Logged score screen started event.");
			}
			else{
				subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount (), "Trial Event" + separator + "BLOCKSCREEN_ENDED");
				Debug.Log ("Logged score screen ended event.");
			}
		}
	}

}