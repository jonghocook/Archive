#include <stdio.h>

int main(void)
{
    int a = 10;
    int *pa = &a;

    double e = 3.14;
    double *pe = &e;

    printf("%d \n%.2f", *pa, *pe);
    return 0;
}