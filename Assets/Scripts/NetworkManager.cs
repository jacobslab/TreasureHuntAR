using System.Collections;
using System.Runtime.InteropServices;
using System.Net;
using System.Text;
using System.Net.Sockets;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class NetworkManager : MonoBehaviour
{


    //[DllImport("__Internal")]
    //private static extern int InitiateDiscovery();

    //[DllImport("__Internal")]
    //private static extern void Subscriber();

    //[DllImport("__Internal")]
    //private static extern void Publisher();


    //[DllImport("__Internal")]
    //private static extern int CheckIfPulseSent();

    //[DllImport("__Internal")]
    //private static extern void TerminateConnection();

    //NetworkServer _networkServer;
    private SocketControl _socketControl;


    //ui references
    public CanvasGroup connectionGroup;
    public Text epadConnectionText;
    public Image epadConnectionStatusImage;

    public Text neuralConnectionText;
    public Image neuralConnectionStatusImage;

    public InputField directIPAddress;
    public Text ipAddrWarningText;

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

        ipAddrWarningText.enabled = false;
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

        //while(!Configuration.neuralDeviceConnected)
        //{
        //    yield return 0;
        //}
        //yield return StartCoroutine(SetNeuralConnectionUIStatus(true));
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



    //public static int DoNetworkDiscovery()
    //{
    //    if (Application.platform != RuntimePlatform.OSXEditor)
    //        return InitiateDiscovery();
    //    else
    //        return 0;
    //}

    public void UpdateDirectIPAddress()
    {
        Debug.Log("updating ip address with " + directIPAddress.text);
        IPAddress targetAddr;
        bool parseResult = IPAddress.TryParse(directIPAddress.text, out targetAddr);
        Configuration.isTargetIPAddrValid = parseResult;
        ipAddrWarningText.enabled = !parseResult; // turn off the warning if IP address parsing was successful
        if (parseResult)
        {
            Debug.Log("able to parse the IP Address");
            Configuration.directIPAddress = directIPAddress.text;
        }
        else
        {
            ipAddrWarningText.enabled = true;
        }
    }



    //public static void EstablishConnection()
    //{
    //    if (Application.platform != RuntimePlatform.OSXEditor)
    //    {
    //        //the ipad client will be a Publisher
    //        Publisher();
    //    }
    //}

    //public IEnumerator CheckForPulses()
    //{
    //    if (Application.platform != RuntimePlatform.OSXEditor)
    //    {
    //        while (true)
    //        {
    //            int result = CheckIfPulseSent();
    //            if (result == 1)
    //            {
    //                NotifyPulse(true);
    //            }
    //            else
    //            {
    //                NotifyPulse(false);
    //            }
    //            yield return 0;
    //        }
    //    }

    //    yield return null;
    //}

    public int NotifyPulse(bool pulseSent)
    {
        return (pulseSent) ? 1 : 0;
    }

    private void OnApplicationQuit()
    {
        if (Application.platform != RuntimePlatform.OSXEditor)
        {
            _socketControl._client.close();
            //TerminateConnection();
        }
    }

}
