#include <stdio.h>
#include <string.h>

char* str1 = "Hello";

int main(void)
{
    char str2[7];
    strcpy(str2, str1);

    puts(str1);
    puts(str2);

    if(*str1==*str2)
    {
        puts("str1 is same to str2.");
    }
    else{
        puts("str1 is different from str2.");
    }

    return 0;
}