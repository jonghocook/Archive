#include <stdio.h>

int BSearchBecur(int*, int, int, int);

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = BSearchBecur(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
    if(idx == -1) printf("Failed..\n");
    else printf("Save target : %d \n", idx);

    idx = BSearchBecur(arr, 0, sizeof(arr)/sizeof(int)-1, 4);
    if(idx == -1) printf("Failed..\n");
    else printf("Save target : %d \n", idx);

    return 0;
}

int BSearchBecur(int arr[], int first, int last, int target)
{
    int mid;
    if(first > last) return -1;
    mid = (first + last) / 2;

    if(arr[mid] == target) return mid;
    else if(target < arr[mid]) return BSearchBecur(arr, first, mid-1, target);
    else return BSearchBecur(arr, mid+1, last, target);
}