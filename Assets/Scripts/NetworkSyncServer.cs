using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Text;
using System.Net;
using System.IO;
using System.Text.RegularExpressions;
using System.Net.Cache;
using UnityEngine.UI;
using System;

public class CoroutineWithData {
	public Coroutine coroutine { get; private set; }
	public object result;
	private IEnumerator target;
	public CoroutineWithData(MonoBehaviour owner, IEnumerator target) {
		this.target = target;
		this.coroutine = owner.StartCoroutine(Run());
	}

	private IEnumerator Run() {
		while(target.MoveNext()) {
			result = target.Current;
			yield return result;
		}
	}
}

public class NetworkSyncServer : MonoBehaviour {

	public bool isAtStartup = true;
	public SyncboxControl syncControl;
	private short handleID = 888;
	public int port = 4444;
	public long totalLatency = 0;
	public int samples = 0;
	public Text avgLatency;
	void Update()
	{
//		Debug.Log (GetNistTime ().ToString ());

		if (Input.GetKeyDown (KeyCode.E))
			GameClock.Pingy ();


		if (Input.GetKeyDown (KeyCode.A)) {
			long startTime = GameClock.SystemTime_Milliseconds;
			StartCoroutine (GameClock.GetNistTime (result => { Debug.Log(result);
			}));

			long endTime = GameClock.SystemTime_Milliseconds;
			long diff = endTime - startTime;
			Debug.Log ("difference is: " + diff.ToString ());
		}
		if (Input.GetKeyDown(KeyCode.S))
		{
			SetupServer();
		}
	}
	// Create a server and listen on a port
	public void SetupServer()
	{
		Debug.Log ("server is listening on port: " + port.ToString ());
		NetworkServer.Listen(port);
		NetworkServer.RegisterHandler (handleID, OnMsgReceived);
		isAtStartup = false;
	}

	public void OnMsgReceived(NetworkMessage netMsg)
	{
		string msgReceived = netMsg.reader.ReadString ();
		Debug.Log ("Received a message: " + msgReceived);
		long clientTime = long.Parse (msgReceived);
//		long latency = currentTime - time;
		StartCoroutine (GameClock.GetNistTime (result => {
			long currentTime = long.Parse(result);
			long latency = currentTime - clientTime;

			Debug.Log("latency is : " + latency.ToString ());

			totalLatency+=latency;
			samples++;
			avgLatency.text = (totalLatency/samples).ToString();
		
		}));

//		if (msgReceived == "ON")
//			syncControl.ToggleLEDOn ();
//		else if (msgReceived == "OFF")
//			syncControl.ToggleLEDOff ();

	}


}
