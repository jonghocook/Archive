/* 사용자로부터 총 5개의 정수를 입력받아서 그 수의 합을 출력해 주는 프로그램을 구현하다.
단! 한가지 조건이 있다. 정수는 반드시 0보다 큰 수이어야한다. 만약에 0이하의 수를 입력받을 경우에는 입력으로 인정하지 않고 다시 입력받도록 구현해야 한다. 여러분의 프로그램 구현을
돕기 위해서 실행의 예를 하나 제시하겠다. */

#include <stdio.h>

int main(void)
{
    int num = 0;
    int i = 0;
    int total = 0;

    while(i < 5)
    {
        while(num <= 0)
        {
            printf("Enter a number:");
            scanf("%d", &num);
        }
        total += num;
        num = 0;
        i++;
    }

    printf("Total : %d", total);
    return 0;
}