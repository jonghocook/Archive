#include <stdio.h>

int main(void)
{
    int state;

    FILE* file = fopen("test.txt", "wt");
    if(file==NULL)
    {
        printf("File open error! \n");
        return 1;
    }

    puts("Don't worry!");

    fputs("Don't worry! \n", stdout);

    fputs("Don't worry!\n", file);

    state = fclose(file);
    if(state!=0)
    {
        printf("File close error!\n");
        return 1;
    }
    
    return 0;
}