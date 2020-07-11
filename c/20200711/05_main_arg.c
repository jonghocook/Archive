#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;
    printf("String Count Number : %d \n", argc);

    for(i=0; i<argc; i++)
    {
        printf("%dst Char : %s \n", i+1, argv[i]);
    }
    
    return 0;
}