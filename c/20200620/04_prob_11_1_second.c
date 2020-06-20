/* 길이가 9인 int배열*/

#include <stdio.h>

int main(void)
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    for(i=0; i<9; i++)
    {
        printf("%d X %d = %d \n", num, i, num * i);
        arr[i] = num * i;
    }
    
    for(i=0; i<9; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        printf("\"%d\" ", arr[i]);
    }
    return 0;
}