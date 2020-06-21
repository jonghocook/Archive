/* int arr[5] = {1, 2, 3, 4, 5}, Pointer "p" */
#include <stdio.h>

int main(void)
{
    int i;
    int arr[5] = {1, 2, 3, 4, 5};
    int* pArr = arr;

    for(i=0; i<5; i++)
    {
        printf("Before %dst: %d \n", i+1, pArr[i]);
        pArr[i] += 2;
    }

    for(i=0; i<5; i++)
    {
        printf("After %dst: %d \n", i+1, pArr[i]);
    }

    return 0;
}