using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClickBtn : MonoBehaviour
{
    public DataController dataController;
    public int gold = 0;
    
    public int goldPerClick = 1;

    public void OnClick(){
        int goldPerClick = dataController.GetGoldPerClick();
        dataController.AddGold(goldPerClick);
    }
}
