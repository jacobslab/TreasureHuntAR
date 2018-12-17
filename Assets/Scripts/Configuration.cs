﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class Configuration : MonoBehaviour {


	public static float presentationTime=3f;
	public static int maxObjects =3;

	//LANGUAGE SELECTION
	public enum LanguageSetting
	{
		English,
		Spanish,
		German
	}

	public static LanguageSetting myLanguage= LanguageSetting.English;

	public static bool isLogging = true;

	public enum Version
	{
		THAR
	}
	public static Version BuildVersion = Version.THAR;

	public static string VersionNumber = "0.4";

	public static bool isSyncbox = false;

	public static string defaultLoggingPath;

    public static string subjectName = "test";

    public Slider responseDistSlider;
    public Text responseDistText;

    public static float minDistanceBetweenObjects = 0.5f;


    public static float minRetrievalDistance = 0.1f;
    public static float minOpenDistance = 1.2f;
    public static float minResponseDistance = 0.5f; //minimum distance to check to see if the response circle is close enough to the actual object position; higher value means greater margin of error
    public static float minRabbitSpawnDistance = 1.5f;
    public static float minRabbitCatchDistance = 1.2f;

    public static float minRabbitMoveWait = 2f;

    private static Subject _currentSubject;

	public static Subject currentSubject{ 
		get{ return _currentSubject; } 
		set{ 
			_currentSubject = value;
		}
	}

	void Awake()
	{
		defaultLoggingPath = Application.persistentDataPath;

	}


    // Use this for initialization
	void Start () {
		
	}


	
	// Update is called once per frame
	void Update () {
		
	}

    public void UpdateResponseDistance()
    {
        minResponseDistance = responseDistSlider.value;
        responseDistText.text = responseDistSlider.value.ToString();
    }
}
