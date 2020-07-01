#include <stdio.h>

int MaxVal(int*, int);

int main(void)
{
    int arr[10] = {4, 8, 3, 7, 2};  //나머지자리에는 0이 들어가겠지..
    int max;

    max = MaxVal(arr, sizeof(arr)/sizeof(int)); //배열과 배열의 자리수10을 함수인자로 받고
    printf("Max Value: %d \n", max);            //출력!

    return 0;
}

int MaxVal(int *pArr, int n)
{
    int max, i;
    max = pArr[0];

    for(i = 0; i < n; i++)
    {
        if(max < pArr[i])                       //처음 max값에 배열의 1번째값을 넣고 배열의 수만큼 돌리다가 큰수가 나올땐 max에 대입 
        {
            max = pArr[i];
        }
    }
    return max;
}