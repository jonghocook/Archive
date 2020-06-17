/* 곱셈 기능을 지니는 함수를 하나 구현하고 Main함수에서 이를 호출하는 형태로 프로그램을 구성하자. */

#include <stdio.h>

int Multiply(int, int);

int count = 0;

int main(void)
{
    int val1, val2;
    int result;
    while(1)
    {
        printf("Enter TWo Number: ");
        scanf("%d %d", &val1, &val2);
        if(val1 == 0 && val2 == 0)
        {
            break;
        }
        result = Multiply(val1, val2);
        printf("%d X %d = Result: %d \n", val1, val2, result);
    }

    printf("Result Count: %d", count);
    
    return 0;
}

int Multiply(int a, int b)
{
    int result = a * b;
    count++;
    return result;
}