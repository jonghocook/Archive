#include <stdio.h>

void pswap(int *p1, int *p2);

int main(void)
{
    int A = 10, B = 20;
    int *pA, *pB;

    pA = &A, pB = &B;                       //pA라는 포인터에 A의 주소를 대입하여 가리키게 하고 pB에는 B를 가리키게 한다.

    printf("pA >>> value : %d \n", *pA);
    printf("pB >>> value : %d \n", *pB);

    pswap(pA, pB);                          //pA, pB라는 포인터를 매개변수로 대입

    printf("pA >>> value : %d \n", *pA);
    printf("pB >>> value : %d \n", *pB);

    return 0;
}

void pswap(int *p1, int *p2)
{
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}