#include <stdio.h>

int ArrAdder(int* pArr, int n);

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int SumOfArr;

    SumOfArr = ArrAdder(arr, sizeof(arr)/sizeof(int));  //(10x4)/4 sizeof는 bite수를 계산하는듯...
    printf("Result: %d \n", SumOfArr);

    return 0;
}

int ArrAdder(int* pArr, int n)
{
    int sum = 0;
    int i;

    for(i=0; i<n; i++)
    {
        sum += pArr[i];
    }
    return sum;
}