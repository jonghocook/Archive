#include <stdio.h>

int main(void)
{
    int i;
    int val;
    
    for(i=0; i<3; i++)
    {
        printf("Number: ");
        scanf("%d", &val);
        
        if(val < 0)
        {
            printf("The \'%d\' is small than 0. \n", val);
        }
        else
        {
            if(val > 0)
            {
                printf("The \'%d\' is big than 0.\n", val);
            }
            else
            {
                printf("The \'%d\' is 0.\n", val);
            }
        }
    }
    return 0;
}