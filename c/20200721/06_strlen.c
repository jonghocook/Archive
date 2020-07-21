#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    while(1)
    {
        fgets(str, sizeof(str), stdin);
        printf("String's length: %d \n", strlen(str));
    }

    return 0;
}