#include <stdio.h>

int main(void)
{
    int total = 0;
    int i, n;

    printf("Sum(0 ~ N), N?> ");
    scanf("%d", &n);

    for(i=0; i<n+1; i++)
    {
        total += i;
        printf("%dst Total: %d \n", i, total);
    }
    printf("Result Total: %d", total);
    return 0;
}