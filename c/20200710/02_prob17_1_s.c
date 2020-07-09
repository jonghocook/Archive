#include <stdio.h>

void MaxMin(int *arr, int size, int **max, int **min);

int main(void)
{
    int arr[5];
    int *max, *min;
    int i;

    for(i=0; i<5; i++)
    {
        printf("Enter Integer : ");
        scanf("%d", &arr[i]);
    }

    MaxMin(arr, sizeof(arr)/sizeof(int), &max, &min);
    printf("MaxValue : %d, MinValue : %d \n", *max, *min);

    return 0;
}

void MaxMin(int *arr, int size, int **mx, int **mn)
{
    int i;
    int *max, *min;
    
    max=min=arr;
    for(i=0; i<size; i++)
    {
        if(*max<arr[i])
        {
            max=&arr[i];
        }
        if(*min>arr[i])
        {
            min=&arr[i];
        }
    }

    *mx=max;
    *mn=min;
}