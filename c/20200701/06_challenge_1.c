#include <stdio.h>

void SingleNum(int *pArr, int n);
void DoubleNum(int *pArr, int n);

int main(void)
{
    int i = 0;
    int arr[10];

    while(i<10)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
        if(arr[i] != 0)
        {
            i++;
        }
    }

    SingleNum(arr, sizeof(arr) / sizeof(int));
    DoubleNum(arr, sizeof(arr) / sizeof(int));
    
    return 0;
}

void SingleNum(int *pArr, int n)
{
    int i;

    printf("SingleNum: ");
    for(i=0; i<n; i++)
    {
        if(pArr[i] % 2 != 0)
        {
            printf("%d | ", pArr[i]);
        }
    }
    printf("\n");

    return;
}

void DoubleNum(int *pArr, int n)
{
    int i;

    printf("DoubleNumber: ");
    for(i=0; i<n; i++)
    {
        if(pArr[i] % 2 == 0)
        {
            printf("%d | ", pArr[i]);
        }
    }
    printf("\n");

    return;
}