#include <stdio.h>

void Add(int a, int b);
void Sprint(char *str);

int main(void)
{
    char *string = "Function Pointer";
    int a = 10, b = 20;

    void (*fPtr1)(int, int) = Add;
    void (*fPtr2)(char*) = Sprint;

    fPtr1(a, b);
    fPtr2(string);

    return 0;
}

void Add(int a, int b)
{
    printf("Plus Result : %d \n", a+b);
}

void Sprint(char *str)
{
    printf("Char : %s \n", str);
}