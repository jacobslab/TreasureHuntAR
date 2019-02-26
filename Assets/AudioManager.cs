using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour {

    public AudioClip beepHigh;
    public AudioClip beepLow;
    public AudioClip magicWand;
    private AudioSource audioSource;
    // Use this for initialization

    private void Awake()
    {
        audioSource = gameObject.GetComponent<AudioSource>();
    }
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void PlayClipOnce(AudioClip clip)
    {
        audioSource.PlayOneShot(clip);
    }
}
