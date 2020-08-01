#include <stdio.h>

void fct1(int);
void fct2(int);

int a = 10;
int b = 20;

int main(void)
{
    int m = 123;

    fct1(m);
    fct2(m);

    return 0;
}

void fct1(int c)
{
    int d = 30;
}

void fct2(int e)
{
    int f = 40;
}