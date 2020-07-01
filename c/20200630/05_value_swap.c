#include <stdio.h>

int swap(int, int);

int main(void)
{
    int val1 = 10;
    int val2 = 20;

    swap(val1, val2);

    printf("val1 : %d \n", val1);
    printf("val1 : %d \n", val2);

    return 0;
}

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    printf("a : %d \n", a);
    printf("b : %d \n", b);
}