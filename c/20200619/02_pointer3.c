#include <stdio.h>

int main(void)
{
    int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

    int* parr = arr;
    int sum = 0;

    while(parr - arr <= 9)
    {
        printf("%d / %d\n", parr, arr);
        printf("%d\n", parr - arr);
        sum += (*parr);
        parr++; //int형 포인터임으로 1더할시 4가 더해지게 됨.
    }

    printf("ave : %d \n", sum / 10);
    return 0;
}