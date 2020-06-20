#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int *p1 = &a;
    int *p2 = &b;
    int *temp;

    printf("====== Before ======\n");
    printf("p1 -> %d \n", *p1);
    printf("p2 -> %d \n", *p2);

    (*p1)--;
    (*p2)--;

    temp = p2;
    p2 = p1;
    p1 = temp;


    printf("====== After ======\n");
    printf("p1 -> %d \n", *p1);
    printf("p2 -> %d \n", *p2);

    return 0;
}