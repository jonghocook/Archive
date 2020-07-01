/* swap(&a, &b, &c);를 이용하여 변수의 값을 변경하자. Call-By-Reference형식으로 구현. */

#include <stdio.h>

void swap(int*, int*, int*);

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;

    swap(&a, &b, &c);

    printf("%d | %d | %d \n", a, b, c);

    return 0;
}

void swap(int *val1, int *val2, int *val3)
{
    int temp = *val1;
    *val1 = *val3;
    *val3 = *val2;
    *val2 = temp;

    printf("%d | %d | %d \n", *val1, *val2, *val3);

}

// Call-By-Reference 방식의 경우 매개변수로 값이 복사되는 것이 아닌 원래 변수의 주소값을 대입해서 본래 값까지 접근하여 변경이 가능함으로써 일종의 전역변수처럼 사용이 가능하다는 생각이 든다.