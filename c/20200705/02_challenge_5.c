/* ascending order / descending order 오름차순 내림차순, 거품정렬 bubble sort 
문제: 7자리 정수를 입력받아 내림차순으로 정렬하라!
*/

#include <stdio.h>

int* DesSort(int*);

int main(void)
{
    int i;
    int arr[7];
    int *pArr;
    
    for(i=0; i<7; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    pArr = DesSort(arr);

    for(i=0; i<7; i++)
    {
        printf("%d | ", arr[i]);
    }

    return 0;
}

int* DesSort(int* pArr)
{
    int i, j, temp;

    for(i=6; i>0; i--)
    {
        for(j=6; j>6-i; j--)
        {
            temp = pArr[j-1];
            pArr[j-1] = pArr[j];
            pArr[j] = temp;
        }
    }

    return pArr;
}