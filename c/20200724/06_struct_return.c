#include <stdio.h>

struct simple {
    int data1;
    int data2;
};

void show(struct simple ts);
struct simple getdata(void);

int main(void)
{
    struct simple s = getdata();
    show(s);

    return 0;
}

void show(struct simple ts)
{
    printf("data1 : %d , data2 : %d \n", ts.data1, ts.data2);
}

struct simple getdata(void)
{
    struct simple temp;
    printf("Enter Two Number : ");
    scanf("%d %d", &temp.data1, &temp.data2);

    return temp;
}