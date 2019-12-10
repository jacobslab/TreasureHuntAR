using System;
using System.Collections;
using System.Net;
using System.Text;
using System.Net.Sockets;
using System.Collections.Generic;
using UnityEngine;

public class ClockSynchronization : MonoBehaviour
{
    public GameClock gameClock;

    // Use this for initialization
    void Start()
    {
        Configuration.isSyncing = true;
        StartCoroutine(RunSyncInterval());
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(GameClock.GetClockMilliseconds(GetNetworkTime()) - GameClock.GetClockMilliseconds(DateTime.Now));
    }

    public IEnumerator RunSyncInterval()
    {
        while (Configuration.isSyncing)
        {
            Debug.Log("waiting for NTP sync interval");
            yield return new WaitForSeconds(Configuration.syncNTPInterval);
            Debug.Log("finished waiting for seconds");
            gameClock._ntpSync.QueryNTPTime();
            DateTime currentNTPTime = gameClock._ntpSync.lastSyncedNTPTime;
            long ntpTime = GameClock.GetClockMilliseconds(currentNTPTime);
            long localTime = GameClock.GetClockMilliseconds(currentNTPTime);
            long difference = ntpTime - localTime;

            Debug.Log("difference is " + difference.ToString());
            string message = ntpTime.ToString() + "\t" + localTime.ToString();
            Debug.Log("sending message to EPAD");
            NetworkManager.Instance.SendMessageToEPAD(message);
            //TreasureHuntController_ARKit.Instance.trialLog.LogTimeSyncEvent(ntpTime, localTime, difference);
            yield return 0;
        }
        yield return null;
    }
}
