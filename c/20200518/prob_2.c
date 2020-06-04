/* 0과 100사이에 존재하는 짝수의 합을 계산해서 출력하는 프로그램을 do~while문을 이용해서 작성하라 참고로 출력결과는 2550이 되어야 한다. */

#include <stdio.h>

int main (void)
{
    int total = 0;
    int val = 100;

    do
    {
        total += val;
        val -= 2;
    } while (val != 0);

    printf("Total: %d \n", total);

    return 0;
    
}