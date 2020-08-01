#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* a;
    a = (int*)malloc(sizeof(int));
    if(a==NULL)
    {
        puts("Failed to set memory!\n");
        exit(1);
    }

    *a = 20;
    printf("Heap Value \"a\" : %d \n", *a);

    free(a);
    
    return 0;
}