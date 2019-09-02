using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreAdder : MonoBehaviour {
    public ST_ScoreManager scoreManager;

    void Update() {
        if(Input.GetMouseButtonDown(0))
        {
            scoreManager.AddScore(5);
            Debug.Log(scoreManager.GetScore());
        }
    }
}