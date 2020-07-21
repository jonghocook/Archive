#include <stdio.h>

int main(void)
{
    char ch = 0;

    while(ch!='q')
    {
        ch = getchar();
        putchar(ch);
    }
    
    return 0;
}