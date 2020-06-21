#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    
    printf("%d %d \n", a[0], a[1]);

    printf("%d %d \n", &a[0], &a[1]);

    printf("Array Name: %d\n", a);

    return 0;
}