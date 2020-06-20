/*문자열을 입력받자, 길이를 체크하자, 널문자는 빼고*/
#include <stdio.h>

int main(void)
{
    int i;
    char str[100];

    printf("Enter String> ");
    scanf("%s", str);

    for(i=0; i<100; i++)
    {
        if(str[i] == '\0')
        {
            break;
        }
    }
    printf("Sting count number: %d", i);

    return 0;
}