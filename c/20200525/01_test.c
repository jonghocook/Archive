#include <stdio.h>

int main(void)
{
    int num = 0;
    int count;
    int i;
    int binary_arr[8];
    
    printf("How many want to number?> ");
    scanf("%d", &count);
    while(num < count)
    {
        for(i=0; i<8; i++)
        {
            binary_arr[i] = (num>>i) & 1;
        }
        printf("\n%d: ", num);
        for(i=7; i>=0; i--)
        {
            printf("%d ", binary_arr[i]);
        }

        // printf("\n 10code: %d \n", num);

        num++;
    }
    return 0;
}