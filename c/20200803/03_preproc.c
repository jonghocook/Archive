#include <stdio.h>

#define string "C++ Compatible C"
#define cal (3*4) + (12/4)

#define ONE 1
#define TWO ONE + ONE
#define THREE TWO + ONE

int main(void)
{
    printf("string : %s \n", string);
    printf("cal : %d \n", cal);
    printf("ONE = %d, TWO = %d, THREE = %d \n", ONE, TWO, THREE);

    return 0;
}