/* 문자열을 입력받는다. 문자열중 아스키코드값이 가장 큰 문자를 찾아 출력한다. */

#include <stdio.h>

int main(void)
{
    int i, len = 0;
    char temp;
    char str[100];

    printf("Enter String>>> ");
    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i=0; i<len; i++)
    {
        if(temp > str[i])
        {
            continue;
        }
        temp = str[i];
    }

    printf("%c \n", temp);

    return 0;
}