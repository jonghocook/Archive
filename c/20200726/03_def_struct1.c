#include <stdio.h>

struct Data {
    int data1;
    int data2;
};

typedef struct Data Data;

int main(void)
{
    Data d = {1, 2};

    printf("%d, %d \n", d.data1, d.data2);

    return 0;
}