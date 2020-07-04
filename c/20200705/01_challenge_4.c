#include <stdio.h>

int main(void)
{
    int i, num, back;
    int count = 0;
    char str[20];

    printf("Enter : ");
    scanf("%s", str);

    for(i=0; i<20; i++)
    {
        if(str[i]=='\0')
        {
            break;
        }
        count++;
    }
    
    num = count/2;
    back = count-1;

    //printf("count: %d | num: %d | back: %d \n", count, num, back);

    for(i=0; i<num; i++)
    {
        if(str[i] != str[back-i])
        {
            printf("%s isn't Palindrome... \n", str);
            return 0;
        }
    }

    printf("%s is Palindrome! \n", str);

    return 0;
}