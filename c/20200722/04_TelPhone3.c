#include <stdio.h>
#include <string.h>

struct person{
    char name[20];
    char phone[20];
};

int main(void)
{
    struct person pArray[3] = {
        {"Lee", "333"},
        {"Kim", "555"},
        {"SES", "777"}
    };
    int i;

    for(i=0; i<3; i++)
    {
        fputs(pArray[i].name, stdout);
        fputs(" ", stdout);
        puts(pArray[i].phone);
    }

    return 0;
}