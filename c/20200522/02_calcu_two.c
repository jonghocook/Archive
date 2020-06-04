#include <stdio.h>

int main(void)
{
    int opt;
    float val1, val2;
    float result;

    printf("What do you want? 1>Plus, 2>Minus, 3>Mutiply, 4>Division: ");
    scanf("%d", &opt);
    printf("Enter 2number> ");
    scanf("%f %f", &val1, &val2);

    if(opt == 1)
    {
        result = val1 + val2;
        printf("%f + %f = %f (%d)", val1, val2, result, (int)result);
    }
    else if(opt == 2)
    {
        result = val1 - val2;
        printf("%f - %f = %f (%d)", val1, val2, result, (int)result);
    }
    else if(opt == 3)
    {
        result = val1 * val2;
        printf("%f * %f = %f (%d)", val1, val2, result, (int)result);
    }
    else if(opt == 4)
    {
        result = val1 / val2;
        printf("%f / %f = %f (%d)", val1, val2, result, (int)result);
    }
    else
    {
        printf("No way!");
    }

    return 0;
}