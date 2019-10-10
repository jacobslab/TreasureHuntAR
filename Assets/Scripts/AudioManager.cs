using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Diagnostics;
using UnityEngine;

public class AudioManager : MonoBehaviour {

    public AudioClip beepHigh;
    public AudioClip beepLow;
    public AudioClip magicWand;
    public AudioClip correctResult;
    public AudioClip incorrectResult;
    public AudioClip feedbackSplash;
    private AudioSource audioSource;

    private AudioSyncLogTrack audioSyncLogTrack;


    float syncPulseDuration = 0.05f;
    float syncPulseInterval = 1.0f;

    public bool isAtStartup = true;
    // Use this for initialization

    private void Awake()
    {
        audioSource = gameObject.GetComponent<AudioSource>();
        audioSyncLogTrack = gameObject.GetComponent<AudioSyncLogTrack>();
    }
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void InitiateSync()
    {
        Configuration.shouldSync = true;
        StartCoroutine("BeginSync");
    }

    public void StopSync()
    {
        Configuration.shouldSync = false;
        StopCoroutine("BeginSync");
    }
    IEnumerator BeginSync()
    {
        float jitterMin = 0.1f;
        float jitterMax = syncPulseInterval - syncPulseDuration;

        Stopwatch executionStopwatch = new Stopwatch();
        while (Configuration.shouldSync)
        {
            executionStopwatch.Reset();
            UnityEngine.Debug.Log("pulse running");

            float jitter = UnityEngine.Random.Range(jitterMin, jitterMax);//syncPulseInterval - syncPulseDuration);
            yield return StartCoroutine(WaitForShortTime(jitter));
            PlayClipOnce(beepHigh);
            audioSyncLogTrack.LogAudioSyncOn();
            yield return StartCoroutine(WaitForShortTime(syncPulseDuration));
            PlayClipOnce(beepLow);
            audioSyncLogTrack.LogAudioSyncOff();

            float timeToWait = (syncPulseInterval - syncPulseDuration) - jitter;
            if (timeToWait < 0)
            {
                timeToWait = 0;
            }

            yield return StartCoroutine(WaitForShortTime(timeToWait));

            executionStopwatch.Stop();
            yield return 0;
        }
        yield return null;
    }


    IEnumerator WaitForShortTime(float jitter)
    {
        float currentTime = 0.0f;
        while (currentTime < jitter)
        {
            currentTime += Time.deltaTime;
            yield return 0;
        }

    }


    public void PlayClipOnce(AudioClip clip)
    {
        audioSource.PlayOneShot(clip);
    }
}
