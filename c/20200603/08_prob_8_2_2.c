/* 다음 식을 만족하는 모든 a와 b를 구하는 프로그램을 구현해 보자. ab+ba=99 */
#include <stdio.h>

int main(void)
{
    for(int i=10; i<50; i++)
    {
        if(i % 9 != 0)
        {
            continue;
        }
        for(int j=90; j>50; j--)
        {
            if(i + j != 99)
            {
                continue;
            }
            printf("%d X %d = %d\n", i, j, 99);
            break;
        }
    }
    return 0;
}