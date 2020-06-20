#include <stdio.h>

int main(void)
{
    int n = 10;
    int *p1 = &n;
    int *p2 = p1;

    printf("%d \n", (*p1)++);   //11
    printf("%d \n", (*p2)++);   //*p2는 p1이 가리키는 값 p2였다면 p1의 주소값
    printf("%d \n", n);         //n은 변수임으로 연산자로 인해 변경된 값 12출력

    return 0;
}