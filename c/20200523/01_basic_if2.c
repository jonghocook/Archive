#include <stdio.h>

int main(void)
{
    int val;
    printf("Number: ");
    scanf("%d", &val);

    if(val < 0)
    {
        printf("\"%d\" is small than 0. \n", val);
    }
    else if(val > 0)
    {
        printf("\"%d\" is big than 0. \n", val);
    }
    else
    {
        printf("\"%d\" == 0 \n", val);
    }
    
    return 0;
}