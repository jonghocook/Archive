#include <stdio.h>

int searchBinary(int*, int, int, int);
void printResult(int);

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int num, idx;

    printf("How many times do you want to repeat? ");
    scanf("%d", &num);
    printf("\n");

    for(int i=0; i<num; i++)
    {
        int target;
        printf("Enter Number what you want to search : ");
        scanf("%d", &target);
        idx = searchBinary(arr, 0, sizeof(arr)/sizeof(int)-1, target);
        printResult(idx);
    }

    return 0;
}

int searchBinary(int arr[], int first, int last, int target)
{
    int mid;
    
    if(first > last) return -1;
    mid = (first + last) / 2;

    if(target == arr[mid]) return mid;
    else if(arr[mid] > target) return searchBinary(arr, first, mid-1, target);
    else return searchBinary(arr, mid+1, last, target);
}

void printResult(int idx)
{
    if(idx == -1) printf("Failed..\n");
    else printf("This number save to index : %d \n", idx);
}