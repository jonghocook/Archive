#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size, i;
    int *arr;

    printf("Enter the number, to memory alloc : ");
    scanf("%d", &size);

    arr = (int*)calloc(size, sizeof(int));
    //arr = (int*)malloc(sizeof(int));

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        printf("%dst Value : %d \n", i+1, arr[i]);
    }

    free(arr);

    return 0;
}