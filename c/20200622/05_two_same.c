#include <stdio.h>

int main(void)
{
    int arr[2] = {1, 2};
    int* pArr = arr;

    printf("%d | %d \n", arr[0], *(arr+1));
    printf("%d | %d \n", pArr[0], *(pArr+1));

    return 0;
}