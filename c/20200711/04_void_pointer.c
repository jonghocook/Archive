#include <stdio.h>

int main(void)
{
    int n = 10;
    void *vp = &n;
    *((int*)vp) = 20;

    printf("%d \n", *((int*)vp));

    return 0;
}