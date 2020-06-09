/* n개의 정수를 입력받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 만들어보자. 그리고 이 함수들을 이용하는 적절한 Main함수도 구현해 보자.*/
#include <stdio.h>

int* Input(int[], int);
int InputCount(void);
int LargerNum(int[], int);
int SmallerNum(int[], int, int);

int main(void)
{
    int min, max;
    int count = InputCount();
    int arr_num[count];

    Input(arr_num, count);
    max = LargerNum(arr_num, count);
    min = SmallerNum(arr_num, count, max);
    printf("Max Number is \"%d\" and Min Number is \"%d\" \n", max, min);

    return 0;
}

int* Input(int arr_num[], int a)
{
    int num;

    for(int i=0; i<a; i++)
    {
        do
        {
            printf("Enter Number> ");
            scanf("%d", &num);
        } while (num == arr_num[0] || num == arr_num[1]);
        arr_num[i] = num;
    }
    return arr_num;
}

int LargerNum(int arr[], int a)
{
    int max = 0;
    for(int i=0; i<a; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int SmallerNum(int arr[], int a, int b)
{
    int min = b;
    for(int i=0; i<a; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int InputCount(void)
{
    int a;
    printf("How Many? ");
    scanf("%d", &a);
    return a;
}
