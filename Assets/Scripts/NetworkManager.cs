﻿using System.Collections;
using System.Runtime.InteropServices;
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

    NetworkServer _networkServer;


    //ui references
    public CanvasGroup connectionGroup;
    public Text connectionText;
    public Image connectionStatusImage;

    // Start is called before the first frame update
    void Start()
    {
        _networkServer = new NetworkServer();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public IEnumerator BeginDiscovery()
    {
        yield return StartCoroutine(SetConnectionUIStatus(false));
        _networkServer.Start();
        while(!_networkServer.isConnected)
        {
            yield return 0;
        }

        yield return StartCoroutine(SetConnectionUIStatus(true));
        yield return null;
    }

    IEnumerator SetConnectionUIStatus(bool isConnected)
    {
        if(!isConnected)
        {
            connectionText.text = "Connecting...";
            connectionStatusImage.color = Color.red;
            connectionGroup.alpha = 1f;
            yield return new WaitForSeconds(0.5f);
        }
        else
        {
            connectionText.text = "Connected!";
            connectionStatusImage.color = Color.green;
            yield return new WaitForSeconds(1.5f);
            connectionGroup.alpha = 0f;
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
            _networkServer.close();
            TerminateConnection();
        }
    }

}
