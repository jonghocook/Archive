#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "Samuel P. Harbison";
    char str2[10];

    puts(str1);

    strncpy(str2, str1, sizeof(str2)-1);
    str2[sizeof(str2)-1] = '\0';

    fputs(str2, stdout);

    return 0;
}