#include <stdio.h>

int main(void)
{
    char buf[10];

    FILE* file = fopen("test.txt", "wt");
    fputs("1234bacd56789", file);
    fclose(file);

    file = fopen("test.txt", "rt");

    fgets(buf, 7, file);
    printf("%s\n", buf);

    fseek(file, 2, SEEK_CUR);
    //fseek(file, -2, SEEK_CUR);
    //fseek(file, 2, SEEK_SET);
    //fseek(file, -2, SEEK_END);

    printf("%c \n", fgetc(file));
    fclose(file);
    
    return 0;
}