#include <stdio.h>
#define PI 3.1415

int main(void)
{
    double area;
    double radius;

    fputs("Radius : ", stdout);
    scanf("%lf", &radius);

    area = radius*radius*PI;
    printf("%f \n", area);
    
    return 0;
}