#include <stdio.h>

int inputNum(void);
int BSearch(int*, int, int);
void printResult(int);

int main(void)
{
    int arr1[500] = {0, };
    int arr2[5000] = {0, };
    int arr3[50000] = {0, };
    int idx, target;

    target = inputNum();
    idx = BSearch(arr1, sizeof(arr1)/sizeof(int), target);
    printResult(idx);

    target = inputNum();
    idx = BSearch(arr2, sizeof(arr2)/sizeof(int), target);
    printResult(idx);

    target = inputNum();
    idx = BSearch(arr3, sizeof(arr3)/sizeof(int), target);
    printResult(idx);

    return 0;
}

int inputNum(void)
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    return num;
}

int BSearch(int* arr, int len, int target)
{
    int first = 0;
    int last = len - 1;
    int mid;
    int opCount = 0;

    while(first <= last)
    {
        mid = (first + last) / 2;

        if(target == arr[mid])
        {
            return mid;
        }
        else
        {
            if(target < arr[mid]) last = mid - 1;
            else first = mid + 1;
        }
        opCount += 1;
    }
    printf("Count : %d \n", opCount);
    return -1;
}

void printResult(int idx)
{
    if(idx==-1) printf("Failed..\n");
    else printf("Save the target to index : %d \n", idx);
}