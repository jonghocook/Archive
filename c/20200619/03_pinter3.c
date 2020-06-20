/* *(Asterist) */

#include <stdio.h>

int main(void)
{
    int a;
    int* pa;
    int **ppa;

    pa = &a;
    ppa = &pa;

    a = 3;

    printf("a: %d // *pa: %d // **ppa: %d \n", a, *pa, **ppa);  //a의 변수 값
    printf("&a: %p // pa: %p // *ppa: %p \n", &a, pa, *ppa);    //a의 주소 값
    printf("&pa: %p // ppa: %p \n", &pa, ppa);                  //pa의 주소 값

    return 0;
}