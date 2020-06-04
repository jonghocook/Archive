/* 두개의 정수를 입력받아서 두 수의 차를 계산한는 프로그램을 구현해 보자. 단 무조건 큰수에서
작은 수를 뺀 결과를 출력해 줘야한다. 예를 들어서 입력된 두개의 수가 순서대로 12, 5라면 12-5를 계산해야 하고,
4, 16이라면 16-4를 계산해야 한다. 따라서 출력 결과는 무조건 양수가 될 것이다. */
#include <stdio.h>

int main(void)
{
    int val1, val2;
    int result;

    printf("Enter 2 Numbers> ");
    scanf("%d %d", &val1, &val2);

    if(val1 > val2)
    {
        result = (int)val1 - (int)val2;
        printf("%d - %d = %d", val1, val2, result);
    }
    else if(val1 < val2)
    {
        result = (int)val2 - (int)val1;
        printf("%d - %d = %d", val2, val1, result);
    }
    return 0;
}
