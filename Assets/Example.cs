using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Example : MonoBehaviour
{
	public GameObject cube1;
	public GameObject cube2;
	public GameObject cube3;
	public GameObject cube4;
	public GameObject target;
	Bounds bounds;
	Vector2 pos1,pos2,pos3,pos4,posTarget;

	bool pointInRectangle(Vector2 A, Vector2 B, Vector2 C, Vector2 D, Vector2 m ) {
		
		Vector2 AB = vect2d(A, B);  
		Debug.Log ("AB: " + AB.ToString ());
		float C1 = -1 * (AB.y*A.x + AB.x*A.y); 
		float  D1 = (AB.y*m.x + AB.x*m.y) + C1;

		Vector2 AD = vect2d(A, D);  
		Debug.Log ("AD: " + AD.ToString ());
		float C2 = -1 * (AD.y*A.x + AD.x*A.y); 
		float D2 = (AD.y*m.x + AD.x*m.y) + C2;

		Vector2 BC = vect2d(B, C);  	
		Debug.Log ("BC: " + BC.ToString ());
		float C3 = -1 * (BC.y*B.x + BC.x*B.y); 
		float D3 = (BC.y*m.x + BC.x*m.y) + C3;

		Vector2 CD = vect2d(C, D);  
		Debug.Log ("CD: " + CD.ToString ());
		float C4 = -1 * (CD.y*C.x + CD.x*C.y); 
		float D4 = (CD.y*m.x + CD.x*m.y) + C4;

		return     0 >= D1 && 0 >= D4 && 0 <= D2 && 0 >= D3;
	}

	void Start()
	{
		bounds = new Bounds (Vector3.Lerp (cube1.transform.position, cube3.transform.position, 0.5f), new Vector3 (Vector3.Distance(cube1.transform.position,cube2.transform.position), 1f, Vector3.Distance(cube1.transform.position,cube4.transform.position)));
	}

	void Update()
	{
//		pos1 = new Vector2 (cube1.transform.position.x, cube1.transform.position.z);
//		pos2 = new Vector2 (cube2.transform.position.x, cube2.transform.position.z);
//		pos3 = new Vector2 (cube3.transform.position.x, cube3.transform.position.z);
//		pos4 = new Vector2 (cube4.transform.position.x, cube4.transform.position.z);
//
//		posTarget = new Vector2 (target.transform.position.x, target.transform.position.z);
//		if (pointInRectangle (pos1, pos2, pos3, pos4, posTarget)) {
		if(bounds.Contains(target.transform.position))
		{
			Debug.Log ("INSIDE");
		} 
//			else
//			Debug.Log ("OUT");
	}





	Vector2 vect2d(Vector2 p1, Vector2 p2) {
		Vector2 temp;
		temp.x = (p2.x - p1.x);
		temp.y = -1 * (p2.y - p1.y);
		return temp;
	}

}


