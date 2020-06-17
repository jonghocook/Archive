#include <stdio.h>

int main(void)
{
    int val = 0;
    if(1)
    {
        int val = 0;
        val += 10;
        printf("if Local val: %d\n", val);
    }
    printf("main Local val: %d \n", val);
    return 0;
}