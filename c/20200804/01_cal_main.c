#include <stdio.h>
#include "01_calculator.h"

int main()
{
    double a = 10.2;
    double b = 2.1;

    printf("Add     : %f \n", add(a, b));
    printf("Minus   : %f \n", minus(a, b));
    printf("Multiple: %f \n", multiple(a, b));
    printf("divide  : %f \n", divide(a, b));

    printf("All Calculator Count : %d \n", cal_num);

    return 0;
}