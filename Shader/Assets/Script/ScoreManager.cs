using System.Collections;
using System.Collections.Generic;   //List과 그외 Generic관련 기능을 사용하기위해!
using UnityEngine;

public class ScoreManager : MonoBehaviour {

    public List<int> scores = new List<int>();

    void Start() {
        //while(scores.Count > 0)
        //{
        //    scores.RemoveAt(0);
        //}
    }
    void Update() {
        if(Input.GetMouseButtonDown(0))
        {
            int randomNumber = Random.Range(0, 100);
            scores.Add(randomNumber);
        }

        if(Input.GetMouseButtonDown(1))
        {
            scores.RemoveAt(3);
        }
    }
}