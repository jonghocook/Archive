#include <stdio.h>

int main(void)
{
    int a = 2005;
    int* pa = &a;

    printf("pa: %x \n", pa);
    printf("&a: %x \n", &a);

    (*pa)++;

    printf("a: %d \n", a);
    printf("*pa: %d \n", *pa);

    return 0;
}