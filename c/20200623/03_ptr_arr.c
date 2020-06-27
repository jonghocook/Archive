#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c = 30;
    int* arr[3] = {&a, &b, &c};

    printf("%d \n", *arr[0]);
    printf("%d \n", *arr[1]);
    printf("%d \n", *arr[2]);

    return 0;
}