/* 사용자로부터 하나의 숫자를 입력받은 다음,
그 수만큼 3의 배수를 출력하는 프로그램을 작성하자.
만약에 사용자로부터 5를 입력받았다면, 3 6 9 12 15를 출력해야 한다. */

#include <stdio.h>

int main(void)
{
    int val;
    int i = 0;
    int j = 0;

    printf("Enter a loop number:");
    scanf("%d", &val);

    while(i++ < val)
    {
        j += 3;
        printf("%d ", j);
    }
    return 0;
}