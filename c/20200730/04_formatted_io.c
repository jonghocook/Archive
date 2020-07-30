#include <stdio.h>

int main(void)
{
    int state;
    int i, j;
    int a, b, c = 0;
    char c1, c2 = 0;

    FILE* file = fopen("test.txt", "wt");
    if(file==NULL)
    {
        printf("File open error!\n");
        return 1;
    }

    for(i=2; i< 10; i++)
    {
        for(j=1; j<10; j++)
        {
            fprintf(file, "%d * %d = %d \n", i, j, i*j);
        }
    }

    state = fclose(file);
    if(state!=0)
    {
        printf("File close error!\n");
        return 1;
    }

    file = fopen("test.txt", "rt");
    if(file==NULL)
    {
        printf("File open error!\n");
        return 1;
    }

    for(i=2; i<10; i++)
    {
        for(j=1; j<10; j++)
        {
            fscanf(file, "%d %c %d %c %d", &a, &c1, &b, &c2, &c);   //"a, b, c, c1, c2"는 file의 값을 받기위한 변수일뿐..
            printf("%d %c %d %c %d \n", a, c1, b, c2, c);
        }
    }

    state = fclose(file);
    if(state!=0)
    {
        printf("File close error!\n");
        return 1;
    }

    return 0;
}