using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioSyncLogTrack : LogTrack
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void LogAudioSyncOn()
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "AUDIO_SYNC_ON");
    }

    public void LogAudioSyncOff()
    {
        subjectLog.Log(GameClock.SystemTime_Milliseconds, subjectLog.GetFrameCount(), "AUDIO_SYNC_OFF");
    }
}
