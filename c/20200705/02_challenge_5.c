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
    int i, j, k, l, m, n, temp;

    for(i=6; i>0; i--)
    {
        for(j=6; j>6-i; j--)
        {
            for(k=6; k>6-j; k--)
            {
                for(l=6; l>6-k; l--)
                {
                    for(m=6; m>6-l; m--)
                    {
                        for(n=6; n>6-m; n--)
                        {
                            if(pArr[n] > pArr[n-1])
                            {
                                temp = pArr[n-1];
                                pArr[n-1] = pArr[n];
                                pArr[n] = temp;
                            }
                        }
                    }
                }
            }
        }
    }

    return pArr;
}