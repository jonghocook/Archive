#include<stdio.h>

int main(void)
{
    int arr[3] = {1, 2, 3};
    int (*parr)[3] = &arr;

    for(int i=0; i<3; i++)
    {
        printf("arr: %d \n", arr[i]);
        printf("*parr: %d \n", (*parr)[i]);
    }

    printf("arr: %p \n", arr);
    printf("parr: %p \n", parr);

    return 0;
}