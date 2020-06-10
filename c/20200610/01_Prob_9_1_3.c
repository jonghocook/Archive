/* 피보나치 수열을 출력하는 함수를 구현해 보자. */
#include<stdio.h>

void Fibonacci(int[], int);

int main(void)
{
    int num;
    int arr[2] = {0, 1};

    printf("How many? ");
    scanf("%d", &num);
    Fibonacci(arr, num);

    return 0;
}

void Fibonacci(int *a, int b)
{
    int result = 1;
    for(int i=0; i<=b; i++)
    {
        printf("%d\n", a[i]);
        a[i+1] = result + a[i];
        result = a[i];
    }
}

// 와! 풀었다!! 기분좋다!!!