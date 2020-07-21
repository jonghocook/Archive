#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* str1 = "123";
    char* str2 = "321";

    printf("123 + 321 : %d \n", atoi(str1)+atoi(str2));

    return 0;
}