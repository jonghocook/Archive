#include <stdio.h>

int main(void)
{
    double total;
    double val[5];

    val[0] = 1.01;
    val[1] = 2.02;
    val[2] = 3.03;
    val[3] = 4.04;
    val[4] = 5.05;

    total = val[0] + val[1] + val[2] + val[3] + val[4];
    printf("avarage: %lf \n", total/5); //double 형은 %lf

    return 0;
}