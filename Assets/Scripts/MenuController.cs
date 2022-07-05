using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class MenuController : MonoBehaviour {


    //UI references
    public InputField subjectInputField;
    public InputField IPInputField;
    public CanvasGroup menuGroup;
    public Text subjectEmptyWarningText;
    public Toggle syncToggle;

    //network manager
    public NetworkManager networkManager;

    SceneManager sceneManager;

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

    public void UpdateIPAdd()
    {
        Configuration.ipadd = IPInputField.text;
    }

    //called by the BeginExperiment button in MenuCanvas
    public void BeginExperiment()
    {
        StartCoroutine("PrepExperiment");
    }

    IEnumerator PrepExperiment()
    {
        Debug.Log("Hello There!!12111111111111111111111982348924982392394093240");
        if (subjectInputField.text == "")
        {
            subjectEmptyWarningText.enabled = true;
        }
        else
        {
            //should synchronize first
            syncToggle.isOn = true;
            Debug.Log("kjvnkernkerkvjekvnrkegvkrevgkwefnr3ef" + syncToggle.isOn);
            
//#if !NONSYNC
            if(syncToggle.isOn)
            {
                yield return StartCoroutine(networkManager.BeginDiscovery());
                Debug.Log("kjvnkernkerkvjekvnrkegvkrevgkwefnr3efiojwfoicjreofo - I am here bro");
            }
//#endif
            SceneManager.LoadScene(1); //load the main game scene;
        }
        yield return null;
    }

    public void LoadMapMaker()
    {
        SceneManager.UnloadSceneAsync(0);
        SceneManager.LoadScene(2); //load the map maker scene;
    }
}
