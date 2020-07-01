/* 문제 1번 : */

#include <stdio.h>

void print(const int* ptr);

int main(void)
{
    int a = 10;
    int *p = &a;
    print(p);

    return 0;
}

void print(const int *ptr)
{
    printf("%d \n", *ptr);
    //int *p = ptr;
    //*P = 20;
}