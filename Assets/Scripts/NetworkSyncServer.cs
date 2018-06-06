using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Text;
public class NetworkSyncServer : MonoBehaviour {

	public bool isAtStartup = true;
	public SyncboxControl syncControl;
	private short handleID = 888;
	public int port = 4444;
	void Update()
	{
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
//		Debug.Log ("Received a message: " + msgReceived);
		long time = long.Parse (msgReceived);
		long latency = GameClock.SystemTime_Milliseconds - time;
		Debug.Log ("ipad time: " + time.ToString () + "pc time: " + GameClock.SystemTime_Milliseconds);
		Debug.Log("latency is : " + latency.ToString ());
//		if (msgReceived == "ON")
//			syncControl.ToggleLEDOn ();
//		else if (msgReceived == "OFF")
//			syncControl.ToggleLEDOff ();

	}
}
