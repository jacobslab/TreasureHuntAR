using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GiftWrapping : MonoBehaviour {

	public List<GameObject> cubes;
	private List<Vector2> points;
	// Use this for initialization
	void Start () {
		points = new List<Vector2> ();
		Debug.Log ("cubes count is: " + cubes.Count.ToString ());
		for (int i = 0; i < cubes.Count; i++) {
			points.Add(new Vector2 (cubes [i].transform.position.x, cubes [i].transform.position.z));
		}
		Debug.Log ("points size is: " + points.Count.ToString());
	}
	
	// Update is called once per frame
	void Update () {
		
		if (Input.GetKeyDown (KeyCode.D)) {
			StartCoroutine ("PerformGiftWrapping", points);
			Debug.Log ("point x is: " + points [1].ToString ());
//			Debug.Log(isLeft(points[0],points[1],points[2]));
		}
	}

	public IEnumerator PerformGiftWrapping(List<Vector2> points) // only considering xz-plane
	{
		float minX = 1000f;
		Vector2 minPoint = Vector2.zero;
		for (int i = 0; i < points.Count; i++) {
			float current = points [i].x;
			if (current < minX) {
				minX = current;
				minPoint = points [i];
			}
		}
		List<Vector2> hull = new List<Vector2> ();
		Debug.Log ("first point on hull is: " + minPoint.ToString ());
		//add that as the first point of the convex hull
		hull.Add (minPoint);
		Vector2 endpoint = Vector2.zero;
		int candidateIndex = 0;
		int hullIndex = 0;
		while (endpoint != hull [0]) {
			endpoint = points [0];
			Debug.Log ("endpoint candidate is: " + endpoint.ToString ());
			for (int index = 0; index < points.Count; index++) {
				Debug.Log ("considering : " + points [index].ToString ());
				if ((endpoint == hull [hullIndex]) || !isLeft(endpoint,hull[hullIndex],points[index])) {
					Debug.Log (points [index].ToString () + " is right of " + endpoint.ToString () + " and  " + hull [hullIndex].ToString ());
					endpoint = points [index];
				}
			}
			Debug.Log ("adding " + endpoint.ToString () + " to hull");
			hull.Add(endpoint);
			hullIndex++;
			yield return 0;
		}
		for (int j = 0; j < hull.Count; j++) {
			Debug.Log ("hull point is:" + hull [j].ToString ());
		}
		yield return null;
	}

	public bool isLeft(Vector2 a, Vector2 b, Vector2 c){
		bool res = ((b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x)) > 0;
		Debug.Log ("is " + c.ToString () + " left of : " + a.ToString () + " and " + b.ToString () + res.ToString());
		return ((b.x - a.x)*(c.y - a.y) - (b.y - a.y)*(c.x - a.x)) > 0;
	}
}
