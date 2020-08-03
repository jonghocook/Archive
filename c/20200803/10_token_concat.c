#include <stdio.h>

#define CONCAT(a, b) a ## b

int main(void)
{
    int arr[2] = {100, 200};

    printf("%d \n", CONCAT(2, 4));
    printf("%s \n", CONCAT("Good ", "Morning?"));
    printf("%d %d \n", CONCAT(arr, [0]), CONCAT(arr, [1]));

    return 0;
}