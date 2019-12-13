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
            while (!gameClock._ntpSync.didUpdateNTP)
            {
                yield return 0;
            }
            DateTime currentNTPTime = gameClock._ntpSync.lastSyncedNTPTime;
            gameClock._ntpSync.didUpdateNTP = false; //set the updated flag to false now that we have retrieved the most recent NTP time
            Debug.Log("current ntp time " + currentNTPTime.ToString());


            long ntpTime = GameClock.GetClockMilliseconds(currentNTPTime);
            TreasureHuntController_ARKit.Instance.debugText.text = ntpTime.ToString();
            long localTime = GameClock.GetClockMilliseconds(DateTime.Now);
            long difference = ntpTime - localTime;

            //Debug.Log("difference is " + difference.ToString());
            string message = ntpTime.ToString() + "\t" + localTime.ToString();
            //Debug.Log("sending message to EPAD");
            NetworkManager.Instance.SendMessageToEPAD(message);
            //TreasureHuntController_ARKit.Instance.trialLog.LogTimeSyncEvent(ntpTime, localTime, difference);
            yield return 0;
        }
        yield return null;
    }
}
