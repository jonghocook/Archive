#include <stdio.h>

typedef struct
{
    int data1;
    int data2;
} Data;

int main(void)
{
    Data d = {1, 2};
    printf("%d, %d \n", d.data1, d.data2);

    return 0;
}