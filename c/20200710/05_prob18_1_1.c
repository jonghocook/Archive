/*...*/

#include <stdio.h>

int main(void)
{
    int arr[3][2] = {1, 2, 3, 4, 5, 6};

    printf("arr : %d \n", sizeof(arr));

    printf("arr[0] : %4d \n", sizeof(arr[0]));
    printf("arr[1] : %4d \n", sizeof(arr[1]));
    printf("arr[2] : %4d \n", sizeof(arr[2]));
    
    return 0;
}