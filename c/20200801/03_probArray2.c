#include <stdio.h>
#include <stdlib.h>

void function(int);

int main(void)
{
    int m = 0;
    fputs("Enter Scale of Array : ", stdout);
    scanf("%d", &m);
    function(m);

    return 0;
}

void function(int i)
{
    int* array = (int*)malloc(sizeof(int)*i);
    int j;
    if(array==NULL)
    {
        puts("Failed to set memory!\n");
        exit(1);
    }

    for(j=0; j<i; j++)
    {
        array[j] = j + 1;
    }
    for(j=0; j<i; j++)
    {
        printf("%d ", array[j]);
    }
    printf("\n");

    free(array);
}