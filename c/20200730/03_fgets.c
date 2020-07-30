#include <stdio.h>

int main(void)
{
    int state;
    char buf[30];

    FILE* file = fopen("test.txt", "rt");
    if(file==NULL)
    {
        printf("File open error! \n");
        return 1;
    }

    fputs("Enter Data : ", stdout);
    fgets(buf, sizeof(buf), stdin);
    puts(buf);

    fgets(buf, sizeof(buf), file);
    puts(buf);

    state = fclose(file);
    if(state!=0)
    {
        printf("File close error! \n");
        return 1;
    }
    
    return 0;
}