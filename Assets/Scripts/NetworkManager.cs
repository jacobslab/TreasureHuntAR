using System.Collections;
using System.Runtime.InteropServices;
using System.Net;
using System.Text;
using System.Net.Sockets;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NetworkServer : ThreadedJob
{
    public bool isRunning = false;
    public bool isConnected = false;

    public NetworkServer()
    {

    }

    protected override void ThreadFunction()
    {
        isRunning = true;
        // Do your threaded task. DON'T use the Unity API here
        while (isRunning)
        {
            int discoveryResult = NetworkManager.DoNetworkDiscovery();
            if(discoveryResult == 1)
            {
                isConnected = true;
            }
            NetworkManager.EstablishConnection(); //establish connection as a PUBLISHER

        }
    }
    protected override void OnFinished()
    {
        // This is executed by the Unity main thread when the job is finished

    }



    public void End()
    {
        isRunning = false;
    }

    public virtual void close()
    {
        isConnected = false;
        isRunning = false;
        Debug.Log("closing");
    }

}


public class NetworkManager : MonoBehaviour
{


    [DllImport("__Internal")]
    private static extern int InitiateDiscovery();

    [DllImport("__Internal")]
    private static extern void Subscriber();

    [DllImport("__Internal")]
    private static extern void Publisher();


    [DllImport("__Internal")]
    private static extern int CheckIfPulseSent();

    [DllImport("__Internal")]
    private static extern void TerminateConnection();

    //NetworkServer _networkServer;
    private SocketControl _socketControl;


    //ui references
    public CanvasGroup connectionGroup;
    public Text epadConnectionText;
    public Image epadConnectionStatusImage;

    public Text neuralConnectionText;
    public Image neuralConnectionStatusImage;


    private static NetworkManager _instance;


    public static NetworkManager Instance
    {
        get
        {
            return _instance;
        }
    }


    private void Awake()
    {

        if (_instance != null)
        {
            Debug.Log("Instance already exists!");
            return;
        }
        _instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        //_networkServer = new NetworkServer();

        _socketControl = gameObject.GetComponent<SocketControl>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void SendMessageToEPAD(string message)
    {
        _socketControl._client.AddMessageToBuffer(message);
    }

    public IEnumerator BeginDiscovery()
    {
        connectionGroup.alpha = 1f;
        yield return StartCoroutine(SetEPADConnectionUIStatus(false));
        yield return StartCoroutine(SetNeuralConnectionUIStatus(false));

        StartCoroutine(_socketControl.RunClient());
        while (!_socketControl._client.isConnected)
        {
            yield return 0;
        }

        yield return StartCoroutine(SetEPADConnectionUIStatus(true));

        while(!Configuration.neuralDeviceConnected)
        {
            yield return 0;
        }
        yield return StartCoroutine(SetNeuralConnectionUIStatus(true));
        connectionGroup.alpha = 0f;
        Configuration.isSyncing = true;
        yield return null;
    }

    IEnumerator SetEPADConnectionUIStatus(bool isConnected)
    {
        if(!isConnected)
        {
            //connectionText.text = "Connecting...";
            epadConnectionStatusImage.color = Color.red;
            connectionGroup.alpha = 1f;
            yield return new WaitForSeconds(0.5f);
        }
        else
        {
            //connectionText.text = "Connected!";
            epadConnectionStatusImage.color = Color.green;
            yield return new WaitForSeconds(1.5f);
            //connectionGroup.alpha = 0f;
        }

        yield return null;
    }


    IEnumerator SetNeuralConnectionUIStatus(bool isConnected)
    {
        if (!isConnected)
        {
            //connectionText.text = "Connecting...";
            neuralConnectionStatusImage.color = Color.red;
            connectionGroup.alpha = 1f;
            yield return new WaitForSeconds(0.5f);
        }
        else
        {
            //connectionText.text = "Connected!";
            neuralConnectionStatusImage.color = Color.green;
            yield return new WaitForSeconds(1.5f);
            //connectionGroup.alpha = 0f;
        }

        yield return null;
    }



    public static int DoNetworkDiscovery()
    {
        if (Application.platform != RuntimePlatform.OSXEditor)
            return InitiateDiscovery();
        else
            return 0;
    }



    public static void EstablishConnection()
    {
        if (Application.platform != RuntimePlatform.OSXEditor)
        {
            //the ipad client will be a Publisher
            Publisher();
        }
    }

    public IEnumerator CheckForPulses()
    {
        if (Application.platform != RuntimePlatform.OSXEditor)
        {
            while (true)
            {
                int result = CheckIfPulseSent();
                if (result == 1)
                {
                    NotifyPulse(true);
                }
                else
                {
                    NotifyPulse(false);
                }
                yield return 0;
            }
        }

        yield return null;
    }

    public int NotifyPulse(bool pulseSent)
    {
        return (pulseSent) ? 1 : 0;
    }

    private void OnApplicationQuit()
    {
        if (Application.platform != RuntimePlatform.OSXEditor)
        {
            _socketControl._client.close();
            TerminateConnection();
        }
    }

}
