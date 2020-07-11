#include <stdio.h>

void show_data(int (*pArr)[4], int a);

int main(void)
{
    int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[3][4] = {{1}, {2}, {3}};

    show_data(arr1, 2);
    show_data(arr2, 3);

    return 0;
}

void show_data(int (*pArr)[4], int a)
{
    int i, j;
    printf("-------- Start Print --------\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", pArr[i][j]);
        }
        printf("\n");
    }
}