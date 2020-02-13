#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;

    while(i < 3)
    {
        printf("*** 현재 i는 %d *** \n", i);
        while(j < 2)
        {
            printf("*** 현재 j는 %d *** \n", j);
            j++;
        }
        i++;
        j = 0;
    }
    return 0;
}