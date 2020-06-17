#include <stdio.h>

int val;    //전역변수
void add(int num);

int main(void)
{
    printf("val: %d\n", val);

    add(3);
    printf("val: %d\n", val);
    val++;
    printf("val: %d\n", val);
    return 0;
}

void add(int n)
{
    val += n;   // 반환값이 없음(void)으로 val이 add()함수가 멈추는 동시에 사라져야 하지만 최상단에 int val;이라는 전역변수를 선언함으로써 val값은 main함수가 멈출때까지 사라지지않는다.
}