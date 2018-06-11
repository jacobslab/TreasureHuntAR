using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using UnityEngine.Networking.NetworkSystem;
using System.Runtime.InteropServices;
using System.Diagnostics;
public class NetworkSyncClient : MonoBehaviour {

	public class TreasureHuntLogMessage : MessageBase
	{
		public long timestamp;
		public string dataType;
		public string[] dataValue;
	}
	public class MyMsgType {
		public static short THLog = MsgType.Highest + 1;
	};
	public bool isAtStartup = true;
	NetworkClient myClient;
	public const short RegisterHostMsgId = 888;
	private string serverAddress = "160.39.198.142";
	public InputField addressField;
	public CanvasGroup connectGroup;
	public CanvasGroup ledStatusGroup;
	private bool syncStatus = false;

	public RawImage ledStatus;

	//sync variables
	float syncPulseDuration = 0.05f;
	float syncPulseInterval = 1.0f;
	void Start()
	{
		ledStatusGroup.alpha = 0f;
		connectGroup.alpha = 1f;
	}
	IEnumerator AttemptConnection () 
	{
		while (isAtStartup)
		{
			SetupClient();
			yield return new WaitForSeconds (2f);
			yield return 0;
		}
	}

	public void ConnectToServer()
	{
		StartCoroutine ("AttemptConnection");
		connectGroup.alpha = 0f;
		ledStatusGroup.alpha = 1f;
	}

	IEnumerator BeginSync()
	{
		float jitterMin = 0.1f;
		float jitterMax = syncPulseInterval - syncPulseDuration;

		Stopwatch executionStopwatch = new Stopwatch ();
		UnityEngine.Debug.Log ("isAtStartup is: " + isAtStartup.ToString ());
		while (!isAtStartup) {
			executionStopwatch.Reset();
			UnityEngine.Debug.Log ("pulse running");

			float jitter = UnityEngine.Random.Range(jitterMin, jitterMax);//syncPulseInterval - syncPulseDuration);
			yield return StartCoroutine(WaitForShortTime(jitter));

			ToggleLEDOn();
			yield return StartCoroutine(WaitForShortTime(syncPulseDuration));
			ToggleLEDOff();

			float timeToWait = (syncPulseInterval - syncPulseDuration) - jitter;
			if(timeToWait < 0){
				timeToWait = 0;
			}

			yield return StartCoroutine(WaitForShortTime(timeToWait));

			executionStopwatch.Stop();
			yield return 0;
		}
		yield return null;
	}


	IEnumerator WaitForShortTime(float jitter){
		float currentTime = 0.0f;
		while (currentTime < jitter) {
			currentTime += Time.deltaTime;
			yield return 0;
		}

	}

	void ToggleLEDOn()
	{
		ledStatus.color = Color.green;
		StartCoroutine (GameClock.GetNistTime (result => {
			var msg = new StringMessage (result);
			UnityEngine.Debug.Log ("about to send a message");
			myClient.Send(RegisterHostMsgId, msg);

		}));
	}

	void ToggleLEDOff()
	{
		ledStatus.color = Color.white;
//		var msg = new StringMessage (System.DateTime.Now);
//		UnityEngine.Debug.Log ("about to send a message");
//		myClient.Send(RegisterHostMsgId, msg);
	}

	public void UpdateServerAddress()
	{
		serverAddress = addressField.text;
	}


	// Create a client and connect to the server port
	public void SetupClient()
	{
		myClient = new NetworkClient();
		myClient.RegisterHandler(MsgType.Connect, OnConnected); 
		UnityEngine.Debug.Log ("attempting to connect");
		myClient.Connect(serverAddress, 4444);
//		isAtStartup = false;
	}

	// Create a local client and connect to the local server
	public void SetupLocalClient()
	{
		myClient = ClientScene.ConnectLocalServer();
		UnityEngine.Debug.Log ("attempting to connect to local server");
		myClient.RegisterHandler(MsgType.Connect, OnConnected);     
		isAtStartup = false;
	}

	// client function
	public void OnConnected(NetworkMessage netMsg)
	{
		isAtStartup = false;
		UnityEngine.Debug.Log("Connected to server");
		StartCoroutine ("BeginSync");
	}
}
