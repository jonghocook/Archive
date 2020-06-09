#include <stdio.h>

int AbsoLarge(int, int);
int AbsoVal(int);

int main(void)
{
    int val1, val2;

    printf("Enter TwoNumbers: ");
    scanf("%d %d", &val1, &val2);

    printf("Which of \'%d\'or\'%d\'has the larger absolute Value? It's\"%d\"\n", val1, val2, AbsoLarge(val1, val2));
    return 0;
}

int AbsoLarge(int a, int b)
{
    if(AbsoVal(a) > AbsoVal(b))
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

int AbsoVal(int a)
{
    if(a < 0)
    {
        return a*-1;
    }
    else
    {
        return a;
    }
}