using System.Collections;
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
            int discoveryResult = NetworkDiscovery.BeginDiscovery();
            if(discoveryResult == 1)
            {
                isConnected = true;
            }
            NetworkDiscovery.EstablishConnection(); //establish connection as a PUBLISHER

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
        Debug.Log("closing");
    }

}


public class NetworkManager : MonoBehaviour
{
    NetworkServer _networkServer;

    //ui referneces
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
        StartCoroutine("SetConnectionUIStatus", false);
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
}
