#include <stdio.h>

typedef struct Dog
{
    int data1;
    int data2;
} Dog;

typedef struct
{
    int data1;
    int data2;
} Cat;

int main(void)
{
    Dog d1;
    struct Dog d2;

    Cat c1;
    //struct Cat c2;
    Cat c3;

    return 0;
}