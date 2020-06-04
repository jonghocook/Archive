/* */
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter Number(1-5)> ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("1 is One.\n");
            break;
        case 2:
            printf("2 is Two.\n");
            break;
        case 3:
            printf("3 is Three.\n");
            break;
        case 4:
            printf("4 is Four.\n");
            break;
        case 5:
            printf("5 is Five.\n");
            break;
        default:
            printf("I don't know!\n");
    }
    return 0;
}