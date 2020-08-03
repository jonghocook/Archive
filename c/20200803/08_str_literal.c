#include <stdio.h>

#define FUN1(x) x
#define FUN2(x) #x

int main(void)
{
    printf("FUN1 : %d \n", FUN1(1000));
    printf("FUN2 : %s \n", FUN2(1234ABCD));

    return 0;
}