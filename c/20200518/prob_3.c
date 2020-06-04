/* 예제 two_to_nine.c를 중첩된 dowhile문을 사용해서 재구현해 보기 바란다. */

#include <stdio.h>

int main(void)
{
    int i = 2;
    int j = 0;

    do
    {
        j = 1;
        do
        {
            printf("%d x %d = %d\n", i, j, i*j);
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);
    
    return 0;
}