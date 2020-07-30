#include <stdio.h>

int main(void)
{
    int state;

    FILE* file = fopen("test.txt", "wt");
    if(file==NULL)
    {
        printf("File Open Error! \n");
        return 1;
    }

    state = fclose(file);
    if(state!=0)
    {
        printf("File Close Error! \n");
        return 1;
    }
    
    return 0;
}