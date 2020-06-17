/* 두개의 정수를 입력받아서 최대 공약수를 구하는 프로그램을 작성해 보자. */

#include <stdio.h>

int Number(int, int);

int main(void)
{
    int val1, val2;
    int result = 0;
    printf("Enter Two Nubmer: ");
    scanf("%d %d", &val1, &val2);
    
    if(val1 > val2)
    {
        printf("%d \n", Number(val2, val1));
    }
    else
    {
        printf("%d \n", Number(val1, val2));
    }
    printf("%d \n", result);

    return 0;
}

int Number(int a, int b)
{
    int result = 0;

    for(int i = 0; i < a; i++)
    {
        if(a%i == 0)
        {
            continue;
            if(b%i == 0)
            {
                result = i;
                printf("%d\n", result);
            }
        }
    }
    return result;
}