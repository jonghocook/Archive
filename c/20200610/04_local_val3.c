#include <stdio.h>

int main(void)
{
    int val = 0;

    {
        int val = 0;
        val += 10;
        printf("IF local val: %d\n", val);
    }

    printf("MAIN local val: %d", val);
    return 0;
}