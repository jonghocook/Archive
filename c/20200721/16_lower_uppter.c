#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convert(char* str);

int main(void)
{
    char str[30];

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    convert(str);
    printf("convert string : %s", str);

    return 0;
}

void convert(char* str)
{
    int i;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i] = tolower(str[i]);
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i] = toupper(str[i]);    
        }
        else
        {
            continue;
        }
    }
}