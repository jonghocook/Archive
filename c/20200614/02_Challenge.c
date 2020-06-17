#include <stdio.h>

void Multiply(int, int);

int main(void)
{
    int val1, val2;
    while(1)
    {
        printf("Enter Two Number> ");
        scanf("%d %d", &val1, &val2);
        if(val1 == val2)
        {
            continue;
        }
        else if(val1 > val2)
        {
            Multiply(val2, val1);
            break;
        }
        else
        {
            Multiply(val1, val2);
            break;
        }
    }
    return 0;
}

void Multiply(int a, int b)
{
    if(a > b)
    {
        return;
    }
    else
    {
        for(int i=1; i<10; i++)
        {
            printf("%d X %d = %d\n", a, i, a*i);
        }
    }
    Multiply(a+1, b);
    return;    
}