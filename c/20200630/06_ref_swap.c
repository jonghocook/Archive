#include <stdio.h>

int swap(int*, int*);

int main(void)
{
    int val1 = 10;
    int val2 = 20;

    printf("Before val1: %d \n", val1);
    printf("Before val2: %d \n", val2);

    swap(&val1, &val2);

    printf("After val1: %d \n", val1);
    printf("After val2: %d \n", val2);
    
    return 0;
}

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}