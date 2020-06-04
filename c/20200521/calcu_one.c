#include <stdio.h>

int main(void)
{
    int opt;
    float val1, val2;
    float result;

    printf("Select 1.+ 2.- 3.* 4./ : ");
    scanf("%d", &opt);
    printf("Number(first, second): ");
    scanf("%f %f", &val1, &val2);

    if(opt == 1)
    {
        result = val1 + val2;
        printf("%f + %f = %f \n", val1, val2, result);
    }
    if(opt == 2)
    {
        result = val1 - val2;
        printf("%f - %f = %f \n", val1, val2, result);
    }
    if(opt == 3)
    {
        result = val1 * val2;
        printf("%f * %f = %f \n", val1, val2, result);
    }
    if(opt == 4)
    {
        result = val1 / val2;
        printf("%f / %f = %f \n", val1, val2, result);
    }
    return 0;
}