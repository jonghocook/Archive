using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ninja : MonoBehaviour {

    public static Ninja ninjaKing;
    public string ninjaName;
    public bool isKing;

    void Start()
    {
        if (isKing)
        {
            ninjaKing = this;
        }
    }

    void Update()
    {
        Debug.Log("My name : " + ninjaName + ", Ninja King is " + ninjaKing);
    }
}