#include <stdio.h>

int main(void)
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("All : %d \n", sizeof(arr));
    printf("column: %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("Row: %d \n", sizeof(arr) / sizeof(arr[0]));
    return 0;
}