#include <stdio.h>

void binary(int*, int);

int main(void)
{
    int num;
    int arr[9] = {0};

    printf("Enter Number: ");
    scanf("%d", &num);

    binary(arr, num);

    return 0;
}

void binary(int *pArr, int n)
{
    int i = 8;                  //총 9자리 0, 1, 2, 3, 4, 5, 6, 7, 8
    int a = 256;                //최대 자리수 256부터 준비

    while(a>0)                  //2진수가 0이상일때까지만 반복
    {
        if(n>=a)                //입력받은 수가 2진수자리수보다 클 경우 2진수자리수를 뺀값으로 대입하고 해당2진수자리수 배열값에 1을 대입한다.
        {
            n = n - a;
            pArr[i] = 1;
        }
        a /= 2;                 //2진수를 2로 나눠서 256, 128, 64, 32, 16, 8, 4, 2, 1순으로 만들어준다.
        i--;                    //배열의 자릿수를 2진수와 일치시키기 위해 1씩 빼준다.
    }
    
    printf("Binary: ");

    for(i=8; i>=0; i--)         //순차적으로 입력되었기때문에 반대로 출력해준다. i의 경우 갯수가 아닌 배열의 자리수에 유의해서 7부터 시작한다.
    {
        printf("%d", pArr[i]);
    }

    return;
}

// sign int의 경우 255까지밖에 표현하지 못하는 자릿수가 8자리이지만 나는 256까지 표기해야하기때문에 9자리로 세팅!
// 풀었다!!!