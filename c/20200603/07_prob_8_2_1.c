/* 구구단을 출력하되 짝수단(2, 4, 6, 8)만 출력을 하게끔하자.
또한 2단은 2x2까지 4단은 4x4까지 6단은 6x6까지 8단은 8x8까지만 출려갛게끔 프로그램을 구현해 보자.
어수서한 문제를 제시한 이유는 continue와 break문의 사용법을 익히기 위해서다. 그러니 가급적이면
continue와 break문을 사용해서 문제를 해결하기 바란다. */
#include <stdio.h>

int main(void)
{
    for(int i=1; i<10; i++)
    {
        if(i % 2 != 0)
        {
            continue;
        }
        for(int j=1; j<10; j++)
        {
            if(i < j)
            {
                break;
            }
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}