using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmoothDamp : MonoBehaviour {

    public Transform target;
    float smoothTime =3f;
    float xVelocity = 0.0f;
    float zVelocity = 0.0f;
    void Update()
    {
        float newPositionX = Mathf.SmoothDamp(transform.position.x, target.position.x, ref xVelocity, smoothTime);
        float newPositionZ = Mathf.SmoothDamp(transform.position.z, target.position.z, ref zVelocity, smoothTime);
        transform.position = new Vector3(newPositionX,transform.position.y, newPositionZ);
    }
}
