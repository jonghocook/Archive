#include <stdio.h>

int main(void)
{
    int val;
    int i = 1;

    printf("출력하고자 하는 구구단, 몇 단? ");
    scanf("%d", &val);

    while(i < 10)
    {
        printf("%d x %d = %d\n", val, i, val*i);
        i++;
    }
    return 0;
}