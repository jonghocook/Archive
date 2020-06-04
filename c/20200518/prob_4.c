/*연습문제 7_4 문제1
두개의 정수를 입력받아서 그 사이에 존재하는 정수들의 합을 구하는 프로그램을 작성해 보라*/

#include <stdio.h>

int main(void)
{
    int start_num, end_num;
    int total;

    printf("Input Two Number> ");
    scanf("%d %d", &start_num, &end_num);   //scanf뒤에는 \n 붙이지마!!!!

    for(total=0; start_num < end_num; start_num++)
    {
        //printf("%d %d \n", start_num, end_num);
        total += start_num;
    }
    printf("Result Total: %d \n", total);
    return 0;
}