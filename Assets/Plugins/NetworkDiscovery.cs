using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class NetworkDiscovery
{

    /* Interface to native implementation */

    [DllImport("__Internal")]
    private static extern int InitiateDiscovery();

    [DllImport("__Internal")]
    private static extern void Subscriber();

    [DllImport("__Internal")]
    private static extern void Publisher();


    //[DllImport("__Internal")]
    //private static extern int SentPulseNotification();



    public static int BeginDiscovery()
    {
        if (Application.platform != RuntimePlatform.OSXEditor)
            return InitiateDiscovery();
        else
            return 0;
    }

    public static void EstablishConnection()
    {
        if(Application.platform != RuntimePlatform.OSXEditor)
        {
            //the ipad client will be a Publisher
            Publisher();
        }
    }

    //public static void SendPulse()
    //{
    //    if (Application.platform != RuntimePlatform.OSXEditor)
    //        SendPulseMessage();
    //}

    /* Public interface for use inside C# / JS code */


}
