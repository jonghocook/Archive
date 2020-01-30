/* 입력된 정수의 평균을 구하는 프로그램을 작성하자.
제일 먼저 입력할 정수의 개수를 사용자로부터 입력받는다.
그리고 그 수만큼 정수를 입력받아서 평균값을 출력해준다.
입력받은 값은 정수이지만, 평균값은 실수가 될것이다.
다음의 실행 예를 참고하기 바란다. */

#include <stdio.h>

int main(void)
{
    int count;  //입력할 횟수
    int num;    //입력받을 정수
    int total = 0;  //입력받은 정수의 합계
    float average;  //평균값
    int i = 0;  //loop count

    printf("Enter a loopNumber:");
    scanf("%d", &count);

    while(i++ < count)
    {
        printf("Enter a Number:");
        scanf("%d", &num);
        total += num;
    }
    average = total / count;
    printf("%f", average);
    return 0;
}