#include <stdio.h>
#include <string.h>

void reverse(char* s);

int main(void)
{
    char str[100];

    fgets(str, sizeof(str), stdin);
    reverse(str);
    printf("Reversed String : %s", str);

    return 0;
}

void reverse(char* s)
{
    int ca, i;
    int len = strlen(s);

    for(i=0; i<len/2; i++)
    {
        ca = s[i];
        s[i] = s[len-i-2];
        s[len-i-2] = ca;
    }
}