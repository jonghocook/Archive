/* 10개 정수를 입력받아 홀수는 앞에서부터 짝수는 뒤에서부터 정렬. */

#include <stdio.h>

int main(void)
{
    int i;
    int j = 0;                      //배열 앞번호 초기화
    int k = 9;                      //배열 뒷번호 초기화
    int num;                        //입력받을 변수    
    int arr[10];

    for(i=0; i<10; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &num);

        if(num%2 == 1)
        {
            arr[j] = num;
            j++;
        }
        else
        {
            arr[k] = num;
            k--;
        }
    }
    
    printf("Result: ");

    for(i=0; i<10; i++)
    {
        printf("%d | ", arr[i]);
    }

    printf("End \n");

    return 0;
}
