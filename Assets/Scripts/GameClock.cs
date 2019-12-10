using UnityEngine;
using System.Collections;
using System;
using System.Net;
using System.Net.Sockets;
using System.Net.NetworkInformation;
using UnityEngine.Networking;
using System.Text;



public class NTPSynchronizer : ThreadedJob
{
    public bool isRunning = false;
    public bool shouldSyncNTP = false;
    public DateTime lastSyncedNTPTime = DateTime.Now;
    public NTPSynchronizer()
    {
        isRunning = true;
    }

    protected override void ThreadFunction()
    {
        while(isRunning)
        {
            while(shouldSyncNTP)
            {
                lastSyncedNTPTime= GetNetworkTime();
                shouldSyncNTP = false;
            }
        }
    }

    protected override void OnFinished()
    {

    }

    public void QueryNTPTime()
    {
        shouldSyncNTP = true;
    }


    public static DateTime GetNetworkTime()
    {
        //default Windows time server
        const string ntpServer = "time.windows.com";

        // NTP message size - 16 bytes of the digest (RFC 2030)
        var ntpData = new byte[48];

        //Setting the Leap Indicator, Version Number and Mode values
        ntpData[0] = 0x1B; //LI = 0 (no warning), VN = 3 (IPv4 only), Mode = 3 (Client Mode)

        var addresses = Dns.GetHostEntry(ntpServer).AddressList;

        //The UDP port number assigned to NTP is 123
        var ipEndPoint = new IPEndPoint(addresses[0], 123);
        //NTP uses UDP

        using (var socket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp))
        {
            socket.Connect(ipEndPoint);

            //Stops code hang if NTP is blocked
            socket.ReceiveTimeout = 1000;

            socket.Send(ntpData);
            socket.Receive(ntpData);
            socket.Close();
        }

        //Offset to get to the "Transmit Timestamp" field (time at which the reply 
        //departed the server for the client, in 64-bit timestamp format."
        const byte serverReplyTime = 40;

        //Get the seconds part
        ulong intPart = BitConverter.ToUInt32(ntpData, serverReplyTime);

        //Get the seconds fraction
        ulong fractPart = BitConverter.ToUInt32(ntpData, serverReplyTime + 4);

        //Convert From big-endian to little-endian
        intPart = SwapEndianness(intPart);
        fractPart = SwapEndianness(fractPart);

        var milliseconds = (intPart * 1000) + ((fractPart * 1000) / 0x100000000L);

        //**UTC** time
        var networkDateTime = (new DateTime(1900, 1, 1, 0, 0, 0, DateTimeKind.Utc)).AddMilliseconds((long)milliseconds);

        return networkDateTime.ToLocalTime();
    }

    // stackoverflow.com/a/3294698/162671
    static uint SwapEndianness(ulong x)
    {
        return (uint)(((x & 0x000000ff) << 24) +
                       ((x & 0x0000ff00) << 8) +
                       ((x & 0x00ff0000) >> 8) +
                       ((x & 0xff000000) >> 24));
    }

public virtual void close()
    {
        isRunning = false;
    }
}

public class GameClock : MonoBehaviour {

	public long GameTime_Milliseconds { get { return GetGameTime(); } }
	public static long SystemTime_Milliseconds { get { return GetSystemClockMilliseconds (); } }
	public static long SystemTime_Microseconds { get { return GetSystemClockMicroseconds (); } }

	public static string SystemTime_MillisecondsString { get { return FormatTime (SystemTime_Milliseconds); } }
	public static string SystemTime_MicrosecondsString { get { return FormatTime (SystemTime_Microseconds); } }


    public NTPSynchronizer _ntpSync;

	protected long microseconds = 1;
	long initialSystemClockMilliseconds;

	void Awake(){
		initialSystemClockMilliseconds = GetSystemClockMilliseconds();
	}

	// Use this for initialization
	void Start () {
        _ntpSync = new NTPSynchronizer();
        _ntpSync.Start();
	}


	// Update is called once per frame
	void Update () {

	}

	long GetGameTime(){
		return GetSystemClockMilliseconds () - initialSystemClockMilliseconds;
	}

	public static void Pingy()
	{
		string who = "160.39.244.23"; // ip address of the ipad in the ad-hoc network
//		string who = "www.google.com";

		System.Net.NetworkInformation.Ping pingSender = new System.Net.NetworkInformation.Ping();

		// When the PingCompleted event is raised,
		// the PingCompletedCallback method is called.
		pingSender.PingCompleted += PingCompletedCallback;

		// Create a buffer of 32 bytes of data to be transmitted.
		string data = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
		byte[] buffer = Encoding.ASCII.GetBytes(data);

		// Wait 12 seconds for a reply.
		int timeout = 12000; // in milliseconds

		// Set options for transmission:
		// The data can go through 64 gateways or routers
		// before it is destroyed, and the data packet
		// cannot be fragmented.
		PingOptions options = new PingOptions(64, true);

//		Console.WriteLine("Time to live: {0}", options.Ttl);
//		Console.WriteLine("Don't fragment: {0}", options.DontFragment);

		// Send the ping asynchronously.
		// Use the waiter as the user token.
		// When the callback completes, it can wake up this thread.
		pingSender.SendAsync(who, timeout, buffer, options);

		// Prevent this example application from ending.
		// A real application should do something useful
		// when possible.
//		Debug.Log("Ping example completed.");
	}

	public static void PingCompletedCallback(object sender, PingCompletedEventArgs e)
	{
		// If the operation was canceled, display a message to the user.
		if (e.Cancelled)
		{
//			Debug.Log("Ping canceled.");

			// Let the main thread resume. 
			// UserToken is the AutoResetEvent object that the main thread 
			// is waiting for.
		}

		// If an error occurred, display the exception to the user.
		if (e.Error != null)
		{
//			Debug.Log("Ping failed:");
			Debug.Log(e.Error.ToString());

		}

		Debug.Log ("Roundtrip Time: " + e.Reply.RoundtripTime);

	}


	//method only works with an active internet connection
	//it has a callback which will return the retrieved result in string
	public static IEnumerator GetNistTime(System.Action<string> callback)
	{


		UnityWebRequest www = UnityWebRequest.Get("http://nist.time.gov/actualtime.cgi?lzbc=siqm9b");
		yield return www.SendWebRequest();
		string result = "";

		if(www.isNetworkError || www.isHttpError) {
			Debug.Log(www.error);
		}
		else {
			// Show results as text
			Debug.Log(www.downloadHandler.text);

			result=www.downloadHandler.text.Substring(17,16);


			// Or retrieve results as binary data
			byte[] results = www.downloadHandler.data;
		}

		yield return null;
		callback (result);
		//		return result;
		//		return dateTime;
	}

    public static long GetClockMilliseconds(DateTime queryTime)
    {
        long milliseconds;
        
        DateTime s = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
        TimeSpan t = (queryTime - s);
        milliseconds = (long)t.TotalMilliseconds;
        return milliseconds;
    }

    public static long GetClockMicroseconds(DateTime queryTime)
    {
        long milliseconds = GetClockMilliseconds(queryTime);
        return milliseconds * 1000;
    }


	static long GetSystemClockMilliseconds(){
		//long ticks = DateTime.Now.Ticks;
		//Debug.Log (DateTime.Now.Ticks);
		//Debug.Log (DateTime.Now);

		//long seconds = tick / TimeSpan.TicksPerSecond;
		long milliseconds;// = ticks / TimeSpan.TicksPerMillisecond;





		DateTime e = DateTime.UtcNow;//new DateTime(2011, 12, 31, 0, 0, 0, DateTimeKind.Utc);
		DateTime s = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		TimeSpan t = (e - s);
		milliseconds = (long)t.TotalMilliseconds;

		return milliseconds;
	}

	static long GetSystemClockMicroseconds(){
		//Convenience method to return the system time.

		//long ticks = DateTime.Now.Ticks;

		long microseconds;// = ticks / (TimeSpan.TicksPerMillisecond / 1000);

		microseconds = GetSystemClockMilliseconds () * 1000; //NOTE: TECHNICALLY JUST MILLISECONDS, NOT ACCURATE MICROSECONDS.

		return microseconds;
	}

	static string GetFormattedMillisecondsAsString(){
		return FormatTime(SystemTime_Milliseconds);
	}

	static string GetFormattedMicrosecondsAsString(){
		return FormatTime(SystemTime_Microseconds);
	}

	public static string FormatTime(long time){
		return time.ToString().PadLeft(20, '0');
	}

    private void OnApplicationQuit()
    {

    }


}