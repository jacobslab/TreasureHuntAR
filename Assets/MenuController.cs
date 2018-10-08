using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class MenuController : MonoBehaviour {

    public InputField subjectInputField;
    public CanvasGroup menuGroup;

    SceneManager sceneManager;
    public Text subjectEmptyWarningText;

	// Use this for initialization
	void Start () {
        subjectEmptyWarningText.enabled = false;
        menuGroup.alpha = 1f;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void UpdateSubjectName()
    {
        Configuration.subjectName = subjectInputField.text;
    }

    //called by the BeginExperiment button in MenuCanvas
    public void BeginExperiment()
    {
        if (subjectInputField.text == "")
        {
            subjectEmptyWarningText.enabled = true;
        }
        else
        {
            SceneManager.LoadScene(1); //load the main game scene;
        }
    }
}
