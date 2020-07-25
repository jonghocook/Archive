#include <stdio.h>

enum color {
    Red = 1,
    Green = 3,
    Blue = 5
};

struct Data {int data1; int data2;};

int main(void)
{
    enum color c1 = Red;
    enum color c2 = Green;
    enum color c3 = Blue;

    printf("Enum Value : %d, %d, %d \n", c1, c2, c3);
    printf("Const Value : %d, %d, %d \n", Red, Green, Blue);
    
}