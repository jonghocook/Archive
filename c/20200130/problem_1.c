// 사용자로부터 숫자를 하나 입력받아서,
// 그 수만큼 "Hello World!"를 출력하는
// 프로그램을 작성하자.
#include <stdio.h>

int main(void)
{
    int val;
    int i = 0;

    printf("Enter a number : ");
    scanf("%d", &val);

    while(i++ < val)
    {
        printf("Hello World! \n");
    }
    printf("Total count : %d", val);
    return 0;
}