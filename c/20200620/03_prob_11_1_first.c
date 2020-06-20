/* 5층 소망빌라, 1층부터 5층까지 층인원 입력, 소망빌라에 사는 총 인원의 합으? */

#include <stdio.h>

int main(void)
{
    int i, total = 0;
    int arr[5];

    for(i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    printf("Total: %d \n", total);

    return 0;
}