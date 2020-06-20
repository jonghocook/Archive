#include <stdio.h>

int main(void)
{
    char str1[5] = "Good";
    char str2[] = "Morning";

    printf("%s \n", str1);
    printf("%s %s \n", str1, str2);

    return 0;
}