/*정수를 입력받아 변수a에 저장, a의 제곱을 계산해서 다시 a에 대입, main함수가 아닌 개별함수 square를 제작. */

#include <stdio.h>

int square(int);

int square1(int*);

int main(void)
{
    int a, b, result;

    printf("Enter Number: ");
    scanf("%d %d", &a, &b);

    result = square(a);
    printf("Result: %d \n", result);

    result = square1(&b);
    printf("Result: %d \n", result);
    
    printf("%d | %d \n", a, b);

    return 0;
}

int square(int a)
{
    a *= a;
    return a;
}

int square1(int *c) //매개변수에 포인터c가 선언되고 c안에 b의 주소값 &b가 대입되어 *c를 통해 b값을 가리킨다고 할수 있겠다...
{
    *c *= *c; 
    return *c;
}