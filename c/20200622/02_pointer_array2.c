#include <stdio.h>

int main(void)
{
    int arr[3] = {0, 1, 2};
    int *ptr;

    ptr = arr;

    printf("%d, %d, %d \n", ptr[0], ptr[1], ptr[2]);
    
    return 0;
}