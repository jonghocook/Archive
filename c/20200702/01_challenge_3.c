/* 10개 정수를 입력받아 홀수는 앞에서부터 짝수는 뒤에서부터 정렬. */

#include <stdio.h>

int main(void)
{
    int i;
    int arr[10];

    for(i=0; i<10; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }



    printf("Result: ");

    for(i=0; i<10; i++)
    {
        printf("%d | ", arr[i]);
    }

    return 0;
}