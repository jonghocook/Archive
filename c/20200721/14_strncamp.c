#include <stdio.h>
#include <string.h>

char* str1 = "ABCDEFG";
char* str2 = "ABCdefg";

int main(void)
{
    int result;
    
    result = strncmp(str1, str2, 3);

    if(result==0)
    {
        puts("A part of str1 is same from str2!");
    }
    else
    {
        puts("It isn't same.");
    }
    
    return 0;
}