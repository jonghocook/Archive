/* 사용자로부터 입력받은 숫자에 해당하는 구구단을 출력하되,
역순으로 출력하는 프로그램을 작성하자. */

#include <stdio.h>

int main(void)
{
    int num;    // 입력받을 구구단 숫자
    int i = 9;  // 구구단의 9번째 숫자

    printf("Enter a number:");
    scanf("%d", &num);

    while(i != 0)
    {
        printf("%d x %d = %d\n", num, i, num*i);
        i--;
    }
    return 0;
}