#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int len;
    char* ch;
    fputs("Enter String Length : ", stdout);
    scanf("%d", &len);
    ch = (char*)malloc(sizeof(char)*len);

    fflush(stdin);    

    fputs("Enter String : ", stdout);
    fgets(ch, len, stdin);
    fputs("Print String : ", stdout);
    puts(ch);

    free(ch);

    return 0;
}
