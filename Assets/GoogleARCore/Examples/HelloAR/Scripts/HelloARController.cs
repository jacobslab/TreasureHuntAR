//-----------------------------------------------------------------------
// <copyright file="HelloARController.cs" company="Google">
//
// Copyright 2017 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// </copyright>
//-----------------------------------------------------------------------

namespace GoogleARCore.HelloAR
{
    using GoogleARCore;
    using UnityEngine;
	using UnityEngine.EventSystems;
    using UnityEngine.Rendering;
	using UnityEngine.UI;
	using System.Collections.Generic;

#if UNITY_EDITOR
    using Input = InstantPreviewInput;
#endif

    /// <summary>
    /// Controls the HelloAR example.
    /// </summary>
    public class HelloARController : MonoBehaviour
    {
        /// <summary>
        /// The first-person camera being used to render the passthrough camera image (i.e. AR background).
        /// </summary>
        public Camera FirstPersonCamera;

        /// <summary>
        /// A prefab for tracking and visualizing detected planes.
        /// </summary>
        public GameObject TrackedPlanePrefab;

        /// <summary>
        /// A model to place when a raycast from a user touch hits a plane.
        /// </summary>
        public GameObject AndyAndroidPrefab;

        /// <summary>
        /// A gameobject parenting UI for displaying the "searching for planes" snackbar.
        /// </summary>
        public GameObject SearchingForPlaneUI;

        /// <summary>
        /// A list to hold new planes ARCore began tracking in the current frame. This object is used across
        /// the application to avoid per-frame allocations.
        /// </summary>
        private List<TrackedPlane> m_NewPlanes = new List<TrackedPlane>();

        /// <summary>
        /// A list to hold all planes ARCore is tracking in the current frame. This object is used across
        /// the application to avoid per-frame allocations.
        /// </summary>
        private List<TrackedPlane> m_AllPlanes = new List<TrackedPlane>();

        /// <summary>
        /// True if the app is in the process of quitting due to an ARCore connection error, otherwise false.
        /// </summary>
        private bool m_IsQuitting = false;

		public GameObject treasureChestPrefab;
		public GameObject clownPrefab;
		public Text debugText;

		private List<GameObject> spawnables;
		public ObjectManager objManager;
		private GameObject spawnChest;
		private int chestIndex=0;
		private List<GameObject> spawnableTrialList;

		private GameObject spawnObj;
		private List<GameObject> spawnedObjList = new List<GameObject>();
		private Object[] spawnArr;
		void Awake()
		{
			spawnables = new List<GameObject> ();
			spawnArr = Resources.LoadAll ("Prefabs/Objects");

			MakeSpawnableList ();
			
		}

		void MakeSpawnableList()
		{
			//clear any leftovers
			spawnables.Clear ();
			for (int i = 0; i < spawnArr.Length; i++) {
				spawnables.Add ((GameObject)spawnArr [i]);
			}

			int totalCount = spawnables.Count;
			spawnableTrialList = new List<GameObject> ();
			for(int i=0;i<totalCount;i++)
			{
				int randInt = Random.Range (0, spawnables.Count);
				spawnableTrialList.Add (spawnables [randInt]);	
				debugText.text=debugText.text.Insert (0, spawnables [randInt].ToString () + "\n");
				spawnables.RemoveAt (randInt);
			}
			debugText.text=debugText.text.Insert(0,spawnableTrialList.Count.ToString() + "\n");

		}
        /// <summary>
        /// The Unity Update() method.
        /// </summary>
        public void Update()
        {
            if (Input.GetKey(KeyCode.Escape))
            {
                Application.Quit();
            }
            _QuitOnConnectionErrors();

            // Check that motion tracking is tracking.
			if (Session.Status != SessionStatus.Tracking) {
				const int lostTrackingSleepTimeout = 15;
				Screen.sleepTimeout = lostTrackingSleepTimeout;
				if (!m_IsQuitting && Session.Status.IsValid ()) {
					SearchingForPlaneUI.SetActive (true);
				}

				return;
			} else {
//				debugText.text = Frame.Pose.position.ToString ();
			}
            Screen.sleepTimeout = SleepTimeout.NeverSleep;

            // Iterate over planes found in this frame and instantiate corresponding GameObjects to visualize them.
            Session.GetTrackables<TrackedPlane>(m_NewPlanes, TrackableQueryFilter.New);
            for (int i = 0; i < m_NewPlanes.Count; i++)
            {
                // Instantiate a plane visualization prefab and set it to track the new plane. The transform is set to
                // the origin with an identity rotation since the mesh for our prefab is updated in Unity World
                // coordinates.
                GameObject planeObject = Instantiate(TrackedPlanePrefab, Vector3.zero, Quaternion.identity,
                    transform);
                planeObject.GetComponent<TrackedPlaneVisualizer>().Initialize(m_NewPlanes[i]);
            }

            // Disable the snackbar UI when no planes are valid.
            Session.GetTrackables<TrackedPlane>(m_AllPlanes);
            bool showSearchingUI = true;
            for (int i = 0; i < m_AllPlanes.Count; i++)
            {
                if (m_AllPlanes[i].TrackingState == TrackingState.Tracking)
                {
                    showSearchingUI = false;
                    break;
                }
            }

            SearchingForPlaneUI.SetActive(showSearchingUI);

            // If the player has not touched the screen, we are done with this update.
            Touch touch;
            if (Input.touchCount < 1 || (touch = Input.GetTouch(0)).phase != TouchPhase.Began)
            {
                return;
            }

            // Raycast against the location the player touched to search for planes.
            TrackableHit hit;
            TrackableHitFlags raycastFilter = TrackableHitFlags.PlaneWithinPolygon |
                TrackableHitFlags.FeaturePointWithSurfaceNormal;
			if (!EventSystem.current.IsPointerOverGameObject (touch.fingerId)) {
				if (Frame.Raycast (touch.position.x, touch.position.y, raycastFilter, out hit)) {

					if (Vector3.Distance (spawnChest.transform.position, hit.Pose.position) < 0.1f) {
						debugText.text=debugText.text.Insert(0,"hit the chest \n");
						debugText.text=debugText.text.Insert (0, Vector3.Distance (spawnChest.transform.position, hit.Pose.position).ToString () + " \n");
						SpawnTreasureObject(spawnChest.transform.position,chestIndex);
						chestIndex++;
					}

//					var andyObject = Instantiate (AndyAndroidPrefab, hit.Pose.position, hit.Pose.rotation);
//
//					// Create an anchor to allow ARCore to track the hitpoint as understanding of the physical
//					// world evolves.
//					var anchor = hit.Trackable.CreateAnchor (hit.Pose);
//
//					// Andy should look at the camera but still be flush with the plane.
//					if ((hit.Flags & TrackableHitFlags.PlaneWithinPolygon) != TrackableHitFlags.None) {
//						// Get the camera position and match the y-component with the hit position.
//						Vector3 cameraPositionSameY = FirstPersonCamera.transform.position;
//						cameraPositionSameY.y = hit.Pose.position.y;
//
//						// Have Andy look toward the camera respecting his "up" perspective, which may be from ceiling.
//						andyObject.transform.LookAt (cameraPositionSameY, andyObject.transform.up);
//					}
//
//					// Make Andy model a child of the anchor.
//					andyObject.transform.parent = anchor.transform;
				}
			}
        }


		private Vector3 GetRandomPosition(int randInt)
		{
			Session.GetTrackables<TrackedPlane>(m_AllPlanes);
			// Pick a location.  This is done by selecting a vertex at random and then
			// a random point between it and the center of the plane.
			List<Vector3> vertices = new List<Vector3> ();

			m_AllPlanes[randInt].GetBoundaryPolygon (vertices);
			Vector3 pt = vertices [Random.Range (0, vertices.Count)];
			float dist = Random.Range (0.05f, 1f);
			//				Vector3 position = m_AllPlanes [randInt].CenterPose.position;
			Vector3 position = Vector3.Lerp (pt, m_AllPlanes[randInt].CenterPose.position, dist);
			// Move the object above the plane.
			position.y += .05f;
			return position;
		}

		public void SpawnTreasureChest()
		{
			Session.GetTrackables<TrackedPlane>(m_AllPlanes);
				int randInt = Random.Range (0, m_AllPlanes.Count);
				Vector3 position = GetRandomPosition (randInt);
				Anchor anchor = m_AllPlanes [randInt].CreateAnchor (new Pose (position, Quaternion.identity));
			spawnChest = Instantiate(treasureChestPrefab,position,Quaternion.identity,anchor.transform);
//			var spawnObject = Instantiate(spawnables[randSpawnable], position,Quaternion.identity,anchor.transform);

//				spawnObject.transform.localScale = new Vector3 (.025f, .025f, .025f);
			spawnChest.transform.SetParent(anchor.transform);
			debugText.text=debugText.text.Insert(0,"spawned chest \n");
		}

		public void SpawnTreasureObject (Vector3 chestPosition, int chestIndex)
		{
			Session.GetTrackables<TrackedPlane>(m_AllPlanes);
			Anchor anchor = m_AllPlanes [0].CreateAnchor (new Pose (chestPosition, Quaternion.identity));
			spawnObj = Instantiate(spawnableTrialList[chestIndex],new Vector3(chestPosition.x,chestPosition.y+0.5f,chestPosition.z),Quaternion.identity,anchor.transform);
			spawnObj.transform.SetParent(anchor.transform);
			debugText.text=debugText.text.Insert(0,"spawned " + spawnObj.gameObject.name + "\n" );


			//add to the spawn obj list
			spawnedObjList.Add(spawnObj);

			//would destroy the anchor and the object
			Destroy (spawnChest.transform.parent.gameObject);

		}

		public void SpawnSurprise()
		{
			Session.GetTrackables<TrackedPlane>(m_AllPlanes);
			int randInt = Random.Range (0, m_AllPlanes.Count);
			Vector3 position = GetRandomPosition (randInt);
			Anchor anchor = m_AllPlanes [randInt].CreateAnchor (new Pose (position, Quaternion.identity));
			var spawnObject = Instantiate(clownPrefab, position,Quaternion.identity,anchor.transform);

			//				spawnObject.transform.localScale = new Vector3 (.025f, .025f, .025f);
			spawnObject.transform.SetParent(anchor.transform);

		}


        /// <summary>
        /// Quit the application if there was a connection error for the ARCore session.
        /// </summary>
        private void _QuitOnConnectionErrors()
        {
            if (m_IsQuitting)
            {
                return;
            }

            // Quit if ARCore was unable to connect and give Unity some time for the toast to appear.
            if (Session.Status == SessionStatus.ErrorPermissionNotGranted)
            {
                _ShowAndroidToastMessage("Camera permission is needed to run this application.");
                m_IsQuitting = true;
                Invoke("_DoQuit", 0.5f);
            }
            else if (Session.Status.IsError())
            {
                _ShowAndroidToastMessage("ARCore encountered a problem connecting.  Please start the app again.");
                m_IsQuitting = true;
                Invoke("_DoQuit", 0.5f);
            }
        }

        /// <summary>
        /// Actually quit the application.
        /// </summary>
        private void _DoQuit()
        {
            Application.Quit();
        }

        /// <summary>
        /// Show an Android toast message.
        /// </summary>
        /// <param name="message">Message string to show in the toast.</param>
        private void _ShowAndroidToastMessage(string message)
        {
            AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject unityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");

            if (unityActivity != null)
            {
                AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
                unityActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
                {
                    AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity,
                        message, 0);
                    toastObject.Call("show");
                }));
            }
        }
    }
}
