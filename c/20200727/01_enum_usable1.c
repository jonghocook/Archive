#include <stdio.h>

int main(void)
{
    int day;
    printf("Input a day(0:Monday ~ 6:Sunday) : ");
    scanf("%d", &day);

    switch(day)
    {
    case 0 :
        printf("Swim it. \n");
        break;

    case 1 :
        printf("Walk it. \n");
        break;

    case 2 :
        printf("Sleep more. \n");
        break;

    case 3 :
        printf("Balling it. \n");
        break;

    case 4 :
        printf("Sleep more. \n");

    case 5 :
        printf("Go to Mountain. \n");
        break;
    
    case 6 :
        printf("Do what you want it. \n");
    }

    return 0;
}