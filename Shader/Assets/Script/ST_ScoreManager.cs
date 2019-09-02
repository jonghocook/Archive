using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ST_ScoreManager : MonoBehaviour {
    private int score = 0;

    public int GetScore()
    {
        return score;
    }

    public void AddScore(int newScore)
    {
        score = score + newScore;
    }
}