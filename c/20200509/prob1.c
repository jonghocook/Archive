//do~while문에 의한 문장의 반복

#include <stdio.h>

int main(void)
{
    int val;
    int i = 1;

    printf("출력하고자 하는 구구단, 몇단?> ");
    scanf("%d", &val);
    
    do
    {
        printf("%d x %d = %d \n", val, i, val*i);
        i++;
    } while (i < 10);

    return 0;
    
}