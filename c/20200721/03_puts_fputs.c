#include <stdio.h>

int main(void)
{
    fputs("fputs function, ", stdout);
    fputs("I love Linux!", stdout);
    fputs("\n", stdout);

    puts("puts function, ");
    puts("I love Linux?!");
    
    return 0;
}