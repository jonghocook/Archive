#include <stdio.h>

int main(void)
{
    int i, j, k;
    int arr[3][4][5];

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            for(k=0; k<5; k++)
            {
                arr[i][j][k] = i+j+k;
            }
        }
    }

    for(i=0; i<3; i++)
    {
        printf("arr[%d] \n", i);
        for(j=0; j<4; j++)
        {
            for(k=0; k<5; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}