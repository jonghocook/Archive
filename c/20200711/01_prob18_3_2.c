#include <stdio.h>

int main(void)
{
    int arr[2][2][2] = {1, 2, 3, 4, 5, 9, 7, 8};
    printf("arr[1][0][1] : %d \n", arr[1][0][1]);
    printf("arr[1][0][1] : %d \n", (*(arr[1]+0))[1]);
    printf("arr[1][0][1] : %d \n", (*(arr+1))[0][1]);
    printf("arr[1][0][1] : %d \n", (*(*(arr+1)+0))[1]);
    printf("arr[1][0][1] : %d \n", *(arr[1][0]+1));
    printf("arr[1][0][1] : %d \n", *(*(arr[1]+0)+1));
    printf("arr[1][0][1] : %d \n", *(*(*(arr+1)+0)+1));
    return 0;
}

/*
(*a+1)[1] ()에 신경써서 계산해야 한다.
*/