#include <stdio.h>

int BSearch(int*, int, int);
void printResult(int);

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int num, idx, target;

    printf("Enter Cicle? : ");
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &target);

        idx = BSearch(arr, sizeof(arr)/sizeof(int), target);
        printResult(idx);
    }
    return 0;
}

int BSearch(int* arr, int len, int target)
{
    int first = 0;
    int last = len - 1;
    int mid;

    while(first<=last)
    {
        mid = (first+last) / 2;

        if(target==arr[mid])
        {
            return mid;
        }
        else
        {
            if(target<arr[mid])
            {
                last = mid - 1;
            }
            else
            {
                first = mid + 1;
            }
        }
    }
    return -1;
}

void printResult(int id)
{
    if(id==-1) printf("Failed..\n");
    else printf("Save target to Index : %d \n", id);
}