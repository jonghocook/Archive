#include <stdio.h>

int main(void)
{
    int i, j;
    int a[10][10];

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(a[i][j] != *(a[i]+j))
            {
                printf("Failed1 *(a[i]+j) %d, %d \n", a[i][j], *(a[i]+j));
            }
            if(a[i][j] != (*(a+i))[j])
            {
                printf("Failed2 (*(a+i))[j] %d, %d \n", a[i][j], (*(a+i))[j]);
            }
            if(a[i][j] != *(*(a+i)+j))
            {
                printf("Failed3 *(*(a+i)+j) %d, %d \n", a[i][j], *(*(a+i)+j));
            }
        }
    }

    printf("Same All! \n");

    return 0;
}