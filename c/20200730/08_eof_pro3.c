#include <stdio.h>

int main(void)
{
    int state;
    char ch;

    FILE* file = fopen("test.txt", "wb");
    if(file==NULL)
    {
        printf("File open error!\n");
        return 1;
    }

    fputc('1', file);
    fputc((char)255, file);
    fputc('2', file);

    state = fclose(file);
    if(state!=0)
    {
        printf("File close error!\n");
        return 1;
    }

    file = fopen("test.txt", "rb");
    if(file==NULL)
    {
        printf("File open error!\n");
        return 1;
    }

    while(1)
    {
        ch = fgetc(file);
        if(feof(file)!=0)
        {
            break;
        }
        printf("Data : %c \n", ch);
    }

    state = fclose(file);
    if(state!=0)
    {
        printf("File close error!\n");
        return 1;
    }
    
    return 0;
}