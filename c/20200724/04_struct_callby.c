#include <stdio.h>

struct simple {
    int data1;
    int data2;
};

void show(struct simple ts);
void swap(struct simple* ps);

int main()
{
    struct simple s = {1, 2};

    show(s);
    swap(&s);
    show(s);

    return 0;
}

void show(struct simple ts)
{
    printf("data1 : %d, data2 : %d", ts.data1, ts.data2);
}

void swap(struct simple* ps)
{
    int temp;
    
    temp = ps -> data1;
    ps -> data1 = ps -> data2;
    ps -> data2 = temp;
}