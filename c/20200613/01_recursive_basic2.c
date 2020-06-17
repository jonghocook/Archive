#include <stdio.h>

void Recursive(int n)
{
    printf("Recursive Call \n");
    if(n == 1)
    {
        return;
    }
    Recursive(n - 1);
}

int main(void)
{
    int a = 8;
    Recursive(a);
    return 0;
}