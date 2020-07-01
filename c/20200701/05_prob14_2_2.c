/* 문제 1번 : */

#include <stdio.h>

void print(const int*, int);

int main(void)
{
    int arr[] = {2, 3, 4, 5, 6, 7};
    print(arr, sizeof(arr)/sizeof(int));

    return 0;
}

void print(const int *arr, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d \n", arr[i]);
    }
}