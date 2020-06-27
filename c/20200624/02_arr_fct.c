#include <stdio.h>

void fct(int*);

int main(void)
{
    int arr1[2] = {1, 2};

    fct(arr1);
    printf("%d \n", arr1[0]);

    return 0;
}

void fct(int* arr2)
{
    printf("%d \n", arr2[0]);
    arr2[0] = 3;
    return;
}