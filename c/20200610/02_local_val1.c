#include <stdio.h>

int main(void)
{
    int i;
    for(i = 0; i < 3; i++)
    {
        int a = 0;
        a++;
        printf("%d: for Loop, Local Val a: %d\n", i, a);
    }
    if(i == 3)
    {
        int a = 10;
        a++;
        printf("There is A in if sentence: %d", a);
    }
    return 0;
}