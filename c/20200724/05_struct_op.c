#include <stdio.h>

struct simple {
    int data1;
    int data2;
};

void show(struct simple ts);

int main()
{
    struct simple s1 = {1, 2};
    struct simple s2;

    s2 = s1;
    show(s2);

    return 0;
}

void show(struct simple ts)
{
    printf("data1 : %d, data2 : %d \n", ts.data1, ts.data2);
}