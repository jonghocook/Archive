/* add_end */
#include <stdio.h>

int main(void)
{
    int total = 0;  //변수 total을 정수 0으로 초기화
    int val = 0;    //변수 val을 정수 0으로 초기화

    do
    {
        printf("Number (0 to quit): ");
        scanf("%d", &val);
        total += val;   //total에 입력받은 val값을 더해준다.
    } while (val != 0);

    printf("Tatal : %d \n", total);
    return 0;
    
}