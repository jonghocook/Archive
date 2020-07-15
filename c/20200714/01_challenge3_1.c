/*
4x4 int형 2차원 배열을 선언. 
배열의 요소들을 오른쪽 방향으로 90도씩 이동시켜서 출력.
*/

#include <stdio.h>

void transArr(int (*pArr)[4], int a, int b);

int main(void)
{
    int i, j;
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d | ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<4; i++)
    {
        for(j=3; j>=0; j--)
        {
            printf("%d | ", arr[j][i]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=3; i>=0; i--)
    {
        for(j=3; j>=0; j--)
        {
            printf("%d | ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=3; i>=0; i--)
    {
        for(j=0; j<4; j++)
        {
            printf("%d | ", arr[j][i]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
