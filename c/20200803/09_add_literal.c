#include <stdio.h>

#define ADD(x, y) printf(#x" + "#y" = %d \n", x+y)

int main(void)
{
    ADD(3, 4);
    return 0;
}