/*
1. 문제1: int형 2차원 배열을 선언하자.
2. 구구단 4단(2,3,4)까지만저장하자.
3. 구구단을 출력하자.
*/

#include <stdio.h>

void printNum(int i, int d, int (*pArr)[9]);

int main(void)
{
    int i, j;
    int num = 2;
    int stand = 1;
    int arr[3][9];

    for(i=0; i<3; i++)
    {
        for(j=0; j<10; j++)
        {
            arr[i][j] = num * stand;
            stand++;
        }
        num++;
        stand = 1;
    }

    for(i=0; i<3; i++)
    {
        printNum(i, i+1, arr);
    }

    return 0;
}

void printNum(int i, int d, int (*pArr)[9])
{
    int j;

    for(i; i<d; i++)
    {
        printf("Result : %d >>> ", i+2);
        for(j=0; j<9; j++)
        {
            printf("%d | ", pArr[i][j]);
        }
        printf("\n");
    }
}