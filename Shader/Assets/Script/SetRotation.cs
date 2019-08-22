using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetRotation : MonoBehaviour
{
    //public Transform targetTransform;
    void Start()
    {
        //Vector3 direction = targetTransform.position - targetTransform.position;
        //Quaternion newRotation = Quaternion.Euler(new Vector3(45, 60, 90)); //(45, 60, 90)의 새로운 벡터값을 가진 Quaternion 인스턴트를 생성.
        //Quaternion targetRotation = Quaternion.LookRotation(direction);

        //transform.rotation = targetRotation;   // 이 스크립트가 붙어있는 GameObject의 transfomr의 rotation에 newRotation값을 대입.

        //====================================

        //Quaternion aRotation = Quaternion.Euler(new Vector3(30, 0, 0));
        //Quaternion bRotation = Quaternion.Euler(new Vector3(60, 0, 0));

        //Quaternion targetRotation2 = Quaternion.Lerp(aRotation, bRotation, 0.5f);
        //transform.rotation = targetRotation2;

        //====================================

        //Quaternion originalRotation = transform.rotation;

        //Vector3 originalRotationInVector3 = originalRotation.eulerAngles;
        //Vector3 targetRotationVec = originalRotationInVector3 + new Vector3(30, 0, 0);

        //Quaternion targetRotation = Quaternion.Euler(targetRotationVec);
        
    }
}