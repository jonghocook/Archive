#include <stdio.h>

int main(void)
{
    int x;
    char ch;

    printf("Number: ");
    scanf("%d", &x);

    ch = (x < 0)? '-' : '+';
    (ch == '+')? printf("Plus \n") : printf("Minus \n");
    printf("UnsignNumber: %d \n", (x < 0)? -1*x : x);

    return 0;
}