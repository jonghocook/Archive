#include <stdio.h>

int main(void)
{
    int val;

    printf("Number: ");
    scanf("%d", &val);

    if(val < 0)
        printf("The Number is less than Zero. \n");
    if(val == 0)
        printf("The Number is Zero. \n");
    if(val > 0)
        printf("The Number is more than Zero. \n");

    return 0;
}