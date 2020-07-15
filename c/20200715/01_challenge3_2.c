/*
달팽이 형태의 배열을 만들자!
정수 n을 입력받아 n x n 의 2차원배열을 달팽이 배열로 만들어보자...
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;
    int val = 0;
    int num;

    printf("Enter Array Number : ");
    scanf("%d", &num);

    const int n = num;
    int arr[n][n];     

    for(i=0; i<num; i++)
    {
        for(j=i; j<num-i; j++)
        {
            val += 1;
            arr[i][j] = val;
            if(j==num-i-1)
            {
                for(k=i+1; k<=j; k++)
                {
                    val += 1;
                    arr[k][j] = val;
                }
            }
        }

        for(j=num-i-2; j>=i; j--)
        {
            val +=1;
            arr[num-i-1][j] = val;
            if(j==i)
            {
                for(k=num-i-2; k>i; k--)
                {
                    val += 1;
                    arr[k][j] = val;
                }
            }
        }
    }
    
    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
        {
            printf("%4d | ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 풀었다! 만세!!
// ㄱㄴㄱㄴ이런식으로 해결. 4x4인경우 4x3, 3x2, 2x1, 1x0