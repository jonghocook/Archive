#include <stdio.h>

const float PI = 3.14;

int main(void)
{
    float rad;
    //PI = 3.07;
    printf("Circle: ");
    scanf("%f", &rad);
    printf("Circle Value: %f \n", rad * rad * PI);

    return 0;
}