using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreManager : MonoBehaviour {

    public int[] scores = new int[10];
    private int index = 0;

    void Update() {
        if(Input.GetMouseButtonDown(0))
        {
            scores[index] = Random.Range(0, 100);
            index++;
        }
    }
}