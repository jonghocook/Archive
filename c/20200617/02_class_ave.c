#include <stdio.h>

int main(void)
{
    int total = 3;
    int arr[total];
    int i, ave = 0;

    for(i = 0; i < total; i++)
    {
        printf("%dst Student Score: ", i + 1);
        scanf("%d", &arr[i]);
    } 
    for(i = 0; i < total; i++)
    {
        ave = ave + arr[i];
    }

    ave = ave / total;
    printf("average of class: %d \n", ave);

    for(i = 0; i < total; i++)
    {
        printf("student %dst \n", i + 1);
        if(arr[i] >= ave)
        {
            printf("Join! \n");
        }
        else
        {
            printf("Fail... \n");
        }
    }
    return 0;
}