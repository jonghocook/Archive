#include <stdio.h>

void fct1(int *p1, int *p2);
void fct2(int (*p3)[4], int (*p4)[4]);

int main(void)
{
    int arr1[3] = {1, 2, 3};
    int arr2[4] = {4, 5, 6, 7};

    int arr3[3][4] = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int arr4[2][4] = {20, 21, 22, 23, 24, 25, 26, 27};

    fct1(arr1, arr2);
    fct2(arr3, arr4);

    return 0;
}

void fct1(int *p1, int *p2)
{
    int i;

    for(i=0; i<4; i++)
    {
        if(i<3)
        {
            printf("arr1[%d] : %d | ", i, p1[i]);
        }
        printf("arr2[%d] : %d \n", i, p2[i]);
    }
}

void fct2(int (*p3)[4], int (*p4)[4])
{
    int i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("arr3[%d][%d] : %4d | ", i, j, p3[i][j]);
        }
        if(i<2)
        {
            for(j=0; j<4; j++)
            {
                printf("arr4[%d][%d] : %4d | ", i, j, p4[i][j]);
            }
        }
        printf("\n");
    }
}