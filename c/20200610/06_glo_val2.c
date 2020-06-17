#include <stdio.h>

int val = 0;

void fct(void);

int main(void)
{
    val = 10;
    printf("val: %d \n", val);

    fct();
    printf("val: %d \n", val);

    return 0;
}

void fct(void)
{
    int val = 20;
    val++;
}

// fct()는 반환값이 없음으로 그안에서 지역변수를 쓴들 전역변수나 main함수에 어떠한 영향도 줄 수가 없다.