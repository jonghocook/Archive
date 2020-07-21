#include <stdio.h>

int main(void)
{
    char ch = 0;

    while(ch!=EOF)
    {
        ch = getchar();
        putchar(ch);
    }

    printf("program is done \n");

    return 0;
}