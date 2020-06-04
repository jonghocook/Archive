/*0에서 100중에 3과 4의 공배수와 최소공배수를 구하시오*/

#include <stdio.h>

int main(void)
{
    int i;
    int count = 0;
    int arr[] = {0, 1};

    for(i=0; i<101; i++)
    {
        if(i % 3 == 0 && i % 4 == 0)
        {
            if(i != 0)
            {
                count++;
                printf("%dst Result : %d \n", count, i);
                arr[count] = i;
            } 
        }
    }
    //for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    //{
    //    printf("%d \n", arr[i]);    
    //}
    printf("최소공배수: %d", arr[1]);
    return 0;    
}