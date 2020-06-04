/*Nested_for.c*/
#include <stdio.h>

int main(void)
{
    int i, j;

    for(i=0; i<3; i++)
    {
        printf("*** i: %d *** \n", i);
        for(j=0; j<2; j++)
        {
            printf("j: %d \n", j);
        }
    }
    return 0;
}