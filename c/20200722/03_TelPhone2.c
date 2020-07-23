#include <stdio.h>
#include <string.h>

struct person{
    char name[20];
    char phone[20];
};

int main(void)
{
    struct person pArray[3];
    int i;

    for(i=0; i<3; i++)
    {
        fputs("Enter Name, Phone : ", stdout);
        //gets(pArray[i].name);
        //fgets(pArray[i].phone, sizeof(pArray[i].phone), stdin);
        scanf("%s %s", pArray[i].name, pArray[i].phone);
    }

    puts("Input Messages");
    for(i=0; i<3; i++)
    {
        fputs("Name : ", stdout);
        puts(pArray[i].name);

        fputs("Phone : ", stdout);
        puts(pArray[i].phone);
    }
}