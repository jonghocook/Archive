#include <stdio.h>

int main(void)
{
    int a, b;

    for( ; ; )
    {
        prinf("two int> ");
        scanf("%d %d", &a, &b);
        printf("%d + %d = %d \n", a, b, a+b);
    }
    return 0;
}