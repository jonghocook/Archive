#include <stdio.h>

int main(void)
{
    int val;
    
    printf("Number: ");
    scanf("%d", &val);

    if(val < 0)
    {
        printf("%d is small than 0.", val);
    }
    else
    {
        printf("%d is big than 0 and same.", val);
    }
    return 0;
}