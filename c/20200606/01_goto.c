#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter Number(1, 2, 3): ");
    scanf("%d", &num);

    if(num == 1)
    {
        goto label1;
    }
    else if(num == 2)
    {
        goto label2;
    }
    else
    {
        goto label3;
    }

    label1:
    printf("You entered 1. \n");
    return 0;
    
    label2:
    printf("You entered 2. \n");
    return 0;

    label3:
    printf("You entered 3 or else number. \n");
    return 0;
}