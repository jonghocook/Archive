#include <stdio.h>
#include <string.h>

char* str1 = "ABC";
char* str2 = "ABC";

int main(void)
{
    int result;

    result = strcmp(str1, str2);
    if(result>0)
    {
        puts("Str1 is big more than str2.");
    }
    else if(result<0)
    {
        puts("str2 is big more than str1.");
    }
    else
    {
        puts("All of same.");
    }
    
    return 0;
}