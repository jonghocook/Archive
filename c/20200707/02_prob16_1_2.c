/*
문제2:
A는 2X4 int형 배열이다.
A의 있는 값으로 4X2형태의 B배열에 다시 넣는다.
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[4][2];

    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d | ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}