using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour {

    public bl_ProgressBar timerBar;
    public CanvasGroup timerGroup;

    private float timer = 0f;
    private float maxTimer = 60f;

    private bool timerInterrupt = false;
    private bool timerHold = false;

    public Color highColor;
    public Color medColor;
    public Color lowColor;
	// Use this for initialization
	void Start () {
        timerGroup.alpha = 0f;
        maxTimer = Configuration.maxTrialTime;
		
	}

    public void ToggleTimer(bool shouldActivate)
    {
        //Debug.Log("toggling timer");
        timerGroup.alpha = (shouldActivate) ? 1f : 0f;
    }

    public void Reset()
    {
        //Debug.Log("reset timer");
        timer = 0f;
        timerBar.Value = 100f;
        timerInterrupt = false;
        timerHold = false;
    }

    public void StartTimer()
    {

        //Debug.Log("starting timer");
        maxTimer = Configuration.maxTrialTime;
        StartCoroutine("TimerCoroutine");
    }

    public void PauseTimer()
    {
        //Debug.Log("pausing timer");
        timerHold = true;
    }

    public void UnpauseTimer()
    {
        //Debug.Log("unpausing timer");
        timerHold = false;
    }

    public void StopTimer()
    {
        timerHold = false; // we need to "unpause" the timer before stopping it
        timerInterrupt = true;
        StopCoroutine("TimerCoroutine");
        //Debug.Log("stopping timer");
    }

    IEnumerator TimerCoroutine()
    {

        //Debug.Log("inside timercoroutine");
        timer=0f;
        //Debug.Log("timerInterrupt at start" + timerInterrupt.ToString());
        while (timer < maxTimer && !timerInterrupt)
        {
            while(timerHold)
            {
                yield return 0;
            }
            timer += Time.deltaTime;
            float timeLeftFactor =  ((maxTimer - timer) * 100f) / maxTimer; //needs to be on 0-100 scale for the progress bar
            timerBar.Value = timeLeftFactor;
            if(timeLeftFactor > 66f)
            {
                timerBar.m_Image.color = highColor;
            }
            else if(timeLeftFactor > 33f && timeLeftFactor<=66f)
            {
                timerBar.m_Image.color = medColor;
            }
            else if(timeLeftFactor <= 33f)
            {
                timerBar.m_Image.color = lowColor;
            }
            yield return 0;
        }
        //if it timed out, then wait until the timer is stopped before finishing the coroutine
        while (!timerInterrupt)
        {
            yield return 0;
        }
        timerHold = false;
        timerInterrupt = false;
        
        //Debug.Log("timerInterrupt at end" + timerInterrupt.ToString());
        //Debug.Log("end of timerCoroutine");
        yield return null;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
