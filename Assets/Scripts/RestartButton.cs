using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using System.Runtime.InteropServices;
using UnityEditor;
using UnityEngine.SceneManagement;

public class RestartButton : MonoBehaviour
{
    static public bool restart_pressed = false;
    public bool isJumpedPressed = false;
    /// <summary>
    /// The position (X and Y distance) finger moved in previous frame
    /// </summary>
    public Vector2 fingerDeltaPosition;

    public Image JumpButton;
    public int JumpButtonFingerID = -1;

    private bool IsInRect(RectTransform rect, Vector2 screenPoint)
    {
        return RectTransformUtility.RectangleContainsScreenPoint(rect, screenPoint);
    }


    void Start()
    {
        //Obj = GameObject.Find("Cube");
        //Debug.Log(Obj.name);
    }

    // Update is called once per frame
    void Update()
    {
        /*if (TouchScreenInputWrapper.touches.Length > 0)
        {
            Ray rayCastPoint = Camera.main.ScreenPointToRay(TouchScreenInputWrapper.touches[0].position);
            //Debug.DrawRay(rayCastPoint.origin, rayCastPoint.direction * 10, Color.yellow);
            RaycastHit hit;
            if (TouchScreenInputWrapper.touches[0].phase == TouchPhase.Began)
            {
                if (Physics.Raycast(rayCastPoint, out hit))
                {
                    //obj.transform.position = hit.point;
                    //var hitPose = hits[0].pose;
                    if (hit.transform.gameObject.tag == "start")
                    {
                        Debug.Log("Hello There!!");
                        transform.position += new Vector3(0.1f,0,0);
                    }
                }
            }
        }*/

        foreach (Touch _touch in TouchScreenInputWrapper.touches)
        {
            if (_touch.phase == TouchPhase.Began)
            {
                if (IsInRect(JumpButton.rectTransform, _touch.position))
                {
                    //Jump button pressed
                    Debug.Log("Switch button pressed");
                    isJumpedPressed = true;
                    JumpButtonFingerID = _touch.fingerId;
                    GetComponent<Image>().color = Color.yellow;
                    //StartCoroutine("InitiateNextTrial");
                    //restart_pressed = true;
                    SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);

                }
            }
            else if (_touch.phase == TouchPhase.Stationary)
            {
                if (IsInRect(JumpButton.rectTransform, _touch.position))
                {
                    //Jump button pressed
                    Debug.Log("Switch button touched continuously");
                    isJumpedPressed = true;
                    JumpButtonFingerID = _touch.fingerId;
                    GetComponent<Image>().color = Color.yellow;
                }
            }

            else if (_touch.phase == TouchPhase.Ended || _touch.phase == TouchPhase.Canceled)
            {
                if (_touch.fingerId == JumpButtonFingerID)
                {
                    //Jump button released
                    Debug.Log("Switch button released");
                    JumpButtonFingerID = -1;
                    isJumpedPressed = false;
                    GetComponent<Image>().color = Color.white;
                }
            }

            fingerDeltaPosition = _touch.deltaPosition;
        }


    }

}