using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpgradeBtn : MonoBehaviour
{
    public DataController dataController;
    public Text upgradeDisplayer;
    public string upgradeName;
    [HideInInspector]
    public int goldByUpgrade;
    public int startGoldByUpgrade;
    [HideInInspector]
    public int currentCost = 1;
    public int startCurrentCost = 1;
    [HideInInspector]
    public int level = 1;
    public float upgradePow = 1.07f;
    public float costPow = 3.14f;

    void Start()
    {
        currentCost = startCurrentCost;
        level = 1;
        goldByUpgrade = startGoldByUpgrade;
        UpdateUI();
    }

    public void PurchaseUpgrade()
    {
        if(dataController.GetGold()>=currentCost)
        {
            dataController.SubGold(currentCost);
            level++;
            dataController.AddGoldPerClick(goldByUpgrade);

            UpdateUpgrade();
            UpdateUI();
        }
    }

    public void UpdateUpgrade()
    {
        goldByUpgrade = startGoldByUpgrade * (int)Mathf.Pow(upgradePow, level);
        currentCost = startCurrentCost * (int)Mathf.Pow(costPow, level);
    }

    public void UpdateUI()
    {
        upgradeDisplayer.text = upgradeName + "\nCost: " + currentCost + "\nLevel: " + level + 
        "\nNext New GoldPerClick: " + goldByUpgrade;
    }
}
