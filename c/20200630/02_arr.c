#include <stdio.h>

int main(void)
{
    int arr[5];
    int *pArr = arr;

    printf("%d \n", sizeof(arr));   //integer가 4bite임으로 5 x 4 는 20
    printf("%d \n", sizeof(pArr));  // int형임으로 4bite 그럼으로 4 

    return 0;
}