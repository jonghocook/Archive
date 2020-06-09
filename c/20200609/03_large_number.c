#include <stdio.h>

int LargeNum(int, int);

int main(void)
{
    int val1, val2;
    printf("Enter Two Number> ");
    scanf("%d %d", &val1, &val2);

    printf("Which is bigger, \"%d\"or\"%d\"? It's\"%d\"! \n", val1, val2, LargeNum(val1, val2));
    return 0;
}

int LargeNum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}