/* 1부터 99사이에 있는 정수 중에서 7의 배수이거나 9의 배수인 정수를 출력하는 프로그램을 작성해 보자. 단, 7의 배수이자 9의 배수인 수는 한번만 출력해야 한다. */

#include <stdio.h>

int main(void)
{
    int i;

    for(i=1; i<100; i++)
    {
        if(i % 7 == 0 && i % 9 == 0)
        {
            printf("7 & 9 Double: %d\n", i);
        }
        else if(i % 7 == 0 || i % 9 == 0)
        {
            printf("7 or 9 Double: %d\n", i);
        }
    }
    return 0;
}