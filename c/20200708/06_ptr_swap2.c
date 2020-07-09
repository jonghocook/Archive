#include <stdio.h>

void pswap(int **p1, int **p2);

int main(void)
{
    int A = 10, B = 20;
    int *pA, *pB;

    pA = &A, pB = &B;

    printf("pA >>> value : %d \n", *pA);
    printf("pB >>> value : %d \n", *pB);

    pswap(&pA, &pB);                        //pA, pB의 "주소값"을 매개변수로 전달

    printf("pA >>> value : %d \n", *pA);
    printf("pB >>> value : %d \n", *pB);

    return 0;
}

void pswap(int **p1, int **p2)
{
    int *temp;
    temp = *p1;                             //**p1의 경우 A의 값을 나타냄으로 *p1은 pA를 가리킨다 기존에 포인터끼리의 A와 B의 주소값을 교환하는 코드 
    *p1 = *p2;
    *p2 = temp;
}