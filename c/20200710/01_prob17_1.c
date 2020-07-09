#include <stdio.h>

void MaxMin(int**, int**);

int main(void)
{
    int i;
    int *max, *min;                                                     //싱글포인터 두개 선언
    int arr[5];                                                         //1차 배열 선언
    
    for(i=0; i<5; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &arr[i]);
    }

    max = min = arr;                                                    //싱글포인터 두개에 배열주소 대입
    MaxMin(&max, &min);                                                 //싱글포인터 앰퍼샌드기호로 주소 매개변수로 전달

    printf("Max Value : %d >>> Min Value : %d \n", *max, *min);

    return 0;
}

void MaxMin(int **pMa, int **pMi)                                       //매개변수 더블포인터선언로 싱글포인터 주소값 받음
{
    int i;
    int *Max, *Min;                                                     //싱글포인터 지역변수로 두개 선언

    Max = Min = *pMi;                                                   //두개의 싱글포인터에 전달받은 싱글포인터 대입 (arr의 주소값)
    for(i=0; i<5; i++)
    {
        if(**pMa<Max[i])                                                //pMa더블포인터에서 입력받은 변수값으로 접근하기위해 asterisk기호 2개를 붙여 변수에 접근, Max는 arr의 주소값을 갖고있음으로 배열이라고 가정하여 배열값으로 비교
        {
            *pMa = &Max[i];                                             //*pMa싱글포인터에 Max[i]의 주소값을 대입
        }
        if(**pMi>Min[i])                                                //위와 같다
        {
            *pMi = &Min[i];
        }
    }
}