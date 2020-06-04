/* 위의 문제 2를 if~else문을 이용해서 해결하였는가? 어떠한 형태로 문제를 해결했건 간에 조건 연산자(삼항 연산자)를 이용하는 형태로 프로그램을 변경해 보자. */

#include <stdio.h>

int main(void)
{
    int val1, val2;
    
    printf("Enter Two Number> ");
    scanf("%d %d", &val1, &val2);

    val1 > val2 ? printf("%d - %d = %d\n", val1, val2, val1 - val2) : printf("%d - %d = %d\n", val2, val1, val2 - val1);
    return 0;
}