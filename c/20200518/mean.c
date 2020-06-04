#include <stdio.h>

int main(void)
{
    float total = 0.0f;
    float input = 0.0;
    int count;

    for(count = 0; input>=0.0; count++)
    {
        total += input;
        printf("Number> ");
        scanf("%f", &input);
    }
    printf("%d average: %f \n",count, total/count);
    return 0;
}