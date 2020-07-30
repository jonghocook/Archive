#include <stdio.h>

enum days {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main(void)
{
    enum days day;
    printf("Input a day(0:Monday ~ 6:Sunday) : ");
    scanf("%d", &day);

    switch(day)
    {
    case Mon :
        printf("Swim it! \n");
        break;
    case Tue :
        printf("Walk it! \n");
        break;
    case Wed :
        printf("Sleep more.. \n");
        break;
    case Thu :
        printf("Balling it! \n");
        break;
    case Fri :
        printf("Sleep more.. \n");
        break;
    case Sat :
        printf("Go to Mountain! \n");
        break;
    case Sun :
        printf("Do what you want it! \n");
        break;
    }

    return 0;
}