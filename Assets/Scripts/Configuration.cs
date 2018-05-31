using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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

	public static string VersionNumber = "0.3";

	public static bool isSyncbox = true;

	public static string defaultLoggingPath="";

	private static Subject _currentSubject;

	public static Subject currentSubject{ 
		get{ return _currentSubject; } 
		set{ 
			_currentSubject = value;
		}
	}

	public static float minRetrievalDistance = 0.1f;
	public static float minResponseDistance = 0.75f;
	// Use this for initialization
	void Start () {
		
	}


	
	// Update is called once per frame
	void Update () {
		
	}
}
