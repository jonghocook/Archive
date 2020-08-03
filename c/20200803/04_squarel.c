#include <stdio.h>
#define SQUARE(x) x*x

int main(void)
{
    int a;
    float d;

    printf("Input a number(int) : ");
    scanf("%d", &a);
    printf("Square of %d : %d \n", a, SQUARE(a));

    printf("Input a number(float) : ");
    scanf("%f", &d);
    printf("Square of %.2f : %.2f \n", d, SQUARE(d));

    return 0;
}