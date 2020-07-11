#include <stdio.h>

int main(void)
{
    int *arr1[5];
    int *arr2[3][5];

    int **pArr = arr1;
    int *(*pArr2)[5] = arr2;

    return 0;
}