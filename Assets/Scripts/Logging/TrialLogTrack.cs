using UnityEngine;
using System.Collections;

public class TrialLogTrack : LogTrack {


	bool firstLog = false;

	void Update(){
		if (Configuration.isLogging && !firstLog) {
			LogVersion();
			LogLanguage ();
            //LogEnvironmentDimensions();
            firstLog = true;
		}
	}

	//gets called from trial controller instead of in update!
	public void Log(int trialNumber, int numTreasureChests, int numSpecialObjects){
		if (Configuration.isLogging) {
			LogTrial (trialNumber, numTreasureChests, numSpecialObjects);
		}
	}
    public void LogTrialStarted(bool isStart)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TRIAL_" + ((isStart) ? "STARTED" : "ENDED"));
    }

    public void LogSessionStarted(bool isStart)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "SESSION_" + ((isStart) ? "STARTED" : "ENDED"));
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
	void LogTrial(int trialNumber, int numTreasureChests, int numSpecialObjects){
		subjectLog.Log (GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Trial Info" + separator + "TRIAL_NUM" + separator + trialNumber + separator
		                + "NUM_TREASURE" + separator + numTreasureChests + separator + "NUM_SPECIAL_OBJECTS" + separator + numSpecialObjects);
	}

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


    public void LogCamTransform(Transform camTransform)
    {
        //UnityEngine.Debug.Log("logging cam position");
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "PLAYER" + separator + "POSITION" + separator + camTransform.position.x.ToString() + separator + camTransform.position.y.ToString() + separator + camTransform.position.z.ToString());
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "PLAYER" + separator + "ROTATION" + separator + camTransform.eulerAngles.x.ToString() + separator + camTransform.eulerAngles.y.ToString() + separator + camTransform.eulerAngles.z.ToString());
    }

    public void LogWorldMapLoaded(string worldMapName)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "WORLD_MAP_LOADING" + separator + worldMapName);
    }

    public void LogWorldMapLoadSuccessful()
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "WORLD_MAP_LOAD_SUCCESSFUL");
    }
    public void LogTreasureChestSpawned(Vector3 spawnLocation)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "CHEST_SPAWNED" + separator + spawnLocation.x.ToString() + separator + spawnLocation.y.ToString() + separator + spawnLocation.z.ToString());
    }
    public void LogTreasure(string itemName,Vector3 chestPosition)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TREASURE_ITEM" + separator + itemName.ToString() + separator + chestPosition.x.ToString() + separator + chestPosition.y.ToString() + separator + chestPosition.z.ToString());
    }

    public void LogDistractorResult(bool isRabbitCaught)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "DISTRACTOR_RESULT" + separator + isRabbitCaught.ToString());
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

    //chest logging

    public void LogChestForceOpenEvent(int chestIndex)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TREASURE_CHEST" + separator + chestIndex.ToString() + separator + "FORCE_OPENING");
    }
    public void LogChestOpening(int chestIndex)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TREASURE_CHEST" + separator + chestIndex.ToString() + separator + "OPENING");
    }

    public void LogChestItem(int chestIndex, string itemName)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TREASURE_CHEST" + separator + chestIndex.ToString() + separator + "TREASURE_LABEL" + separator + itemName);

    }

    public void LogEmptyChest(int chestIndex)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TREASURE_CHEST" + separator + chestIndex.ToString() + separator + "EMPTY");

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

    public void LogRetrievalChoice(Vector3 choicePosition,string displayName)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "CHOSEN_TEST_POSITION" + separator + choicePosition.x.ToString() + separator + choicePosition.y.ToString() +separator + choicePosition.z.ToString() + separator + displayName);
    }

    public void LogCorrectRetrieval(Vector3 correctPosition, string displayName)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "CORRECT_TEST_POSITION" + separator + correctPosition.x.ToString() + separator + correctPosition.y.ToString() + separator + correctPosition.z.ToString() + separator + displayName);
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

    public void LogMapVariables(float minResponseDistance, float minRabbitSpawnDistance, float minRabbitCatchDistance, float minDistanceBetweenObjects)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "MIN_RESPONSE_DISTANCE" + separator + minResponseDistance.ToString());
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "MIN_RABBIT_SPAWN_DISTANCE" + separator + minRabbitSpawnDistance.ToString());
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "MIN_RABBIT_CATCH_DISTANCE" + separator + minRabbitCatchDistance.ToString());
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "MIN_DISTANCE_BETWEEN_OBJECTS" + separator + minDistanceBetweenObjects.ToString());
    }

    //only logs environment origins for now
    public void LogEnvironmentDimensions(Vector3 envOrigin, Vector3 envCenter, Vector3[] verticesArr)
    {
        //log origin & center
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "ENV_ORIGIN" + separator + envOrigin.x.ToString() + separator + envOrigin.y.ToString() + separator + envOrigin.z.ToString());
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "ENV_CENTER" + separator + envCenter.x.ToString() + separator + envCenter.y.ToString() + separator + envCenter.z.ToString());

        for (int i=0;i<verticesArr.Length;i++)
        {
            subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "Experiment Info" + separator + "ENV_VERTEX" + separator + verticesArr[i].x.ToString() + separator + verticesArr[i].y.ToString() + separator + verticesArr[i].z.ToString());
        }
    }

    public void LogResponseDistance(float responseDistance)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "RESPONSE_DISTANCE" + separator + responseDistance.ToString());
    }

    public void LogCorrectAnswer(Vector3 indicatorPos, string cuedObjName)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "CORRECT_ANSWER" + separator + indicatorPos.x.ToString() + separator + indicatorPos.y.ToString() + separator + indicatorPos.z.ToString() + separator + cuedObjName);
    }

    public void LogIncorrectAnswer(Vector3 indicatorPos,string cuedObjName)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "INCORRECT_ANSWER" + separator + indicatorPos.x.ToString() + separator + indicatorPos.y.ToString() + separator + indicatorPos.z.ToString() + separator + cuedObjName);
    }

    public void LogItemScore(int itemScore, string objName)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "ITEM_SCORE" + separator + itemScore.ToString() + separator +  objName);
    }

    public void LogTimeBonus(int timeBonus)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TIME_BONUS" + separator + timeBonus.ToString());
    }

    public void LogDistractorBonus(int distractorBonus)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "DISTRACTOR_BONUS" + separator + distractorBonus.ToString());
    }

    public void LogTotalScore(int totalScore)
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TOTAL_SCORE" + separator + totalScore.ToString());

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


    //timer logging

    public void LogStartTimer()
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TIMER_STARTED");
    }

    public void LogStopTimer()
    {

        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TIMER_STOPPED");
    }

    public void LogPauseTimer()
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TIMER_PAUSED");

    }

    public void LogUnpauseTimer()
    {

        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TIMER_UNPAUSED");
    }

    public void LogResetTimer()
    {

        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TIMER_RESET");
    }
    public void LogTimerValue(float timerVal)
    {

        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "TIMER_VALUE" + separator + timerVal.ToString());
    }
}