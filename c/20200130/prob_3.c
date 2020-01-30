/* 사용자가 입력하는 정수를 계속해서 더해 나간다.
만약에 0이 입력되면 지금까지 입력된 정수의 덧셈결과를
출력해서 프로그램을 종료시킨다. */
#include <stdio.h>

int main(void)
{
    int num = 1;
    int i = 0;

    while(num != 0)
    {
        printf("Enter a number:");
        scanf("%d", &num);
        i += num;
    }
    printf("%d", i);
    return 0;
}