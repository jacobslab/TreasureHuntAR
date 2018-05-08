using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using UnityEngine.Networking.NetworkSystem;
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

	void Start()
	{
		StartCoroutine ("AttemptConnection");
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


	public void SendMessage()
	{
		var msg = new StringMessage("maybe");
		Debug.Log ("about to send a message");
		myClient.Send(RegisterHostMsgId, msg);
	}


	// Create a client and connect to the server port
	public void SetupClient()
	{
		myClient = new NetworkClient();
		myClient.RegisterHandler(MsgType.Connect, OnConnected); 
		Debug.Log ("attempting to connect");
		myClient.Connect("160.39.198.142", 4444);
//		isAtStartup = false;
	}

	// Create a local client and connect to the local server
	public void SetupLocalClient()
	{
		myClient = ClientScene.ConnectLocalServer();
		Debug.Log ("attempting to connect to local server");
		myClient.RegisterHandler(MsgType.Connect, OnConnected);     
		isAtStartup = false;
	}

	// client function
	public void OnConnected(NetworkMessage netMsg)
	{
		Debug.Log("Connected to server");
		isAtStartup = false;
	}
}
