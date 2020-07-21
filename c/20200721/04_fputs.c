#include <stdio.h>

int main(void)
{
    char str[10];

    fputs("Enter String: ", stdout);
    fgets(str, sizeof(str), stdin);

    fputs("Entered String: ", stdout);
    fputs(str, stdout);
    
    return 0;
}