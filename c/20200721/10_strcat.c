#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[30] = "Your Favorite language is ";
    char str2[10];

    fputs("What is your favorite computer language? ", stdout);
    fgets(str2, sizeof(str2), stdin);

    strcat(str1, str2);

    puts(str1);
    
    return 0;
}