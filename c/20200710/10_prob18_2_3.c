#include <stdio.h>

void fct3(int **p1, int *(*p2)[5]);
void fct4(int ***p3, int ***(*p4)[5]);

int main(void)
{
    int *arr5[3];                        
    int *arr6[3][5];

    int **arr7[5];
    int ***arr8[3][5];

    fct3(arr5, arr6);
    fct4(arr7, arr8);

    return 0;
}

void fct3(int **p1, int *(*p2)[5])
{
    printf("fct3 \n");
}

void fct4(int ***p3, int ***(*p4)[5])
{
    printf("fct4 \n");
}