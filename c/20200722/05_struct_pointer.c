#include <stdio.h>

struct person{
    char name[20];
    char phone[20];
};

int main(void)
{
    struct person man = {"Thomas", "354-00xx"};
    struct person* pMan;
    pMan = &man;

    printf("name    : %s \n", man.name);
    printf("phone   : %s \n", man.phone);

    printf("name    : %s \n", (*pMan).name);
    printf("phone   : %s \n", (*pMan).phone);

    printf("name    : %s \n", pMan->name);
    printf("phone   : %s \n", pMan->phone);
    
    return 0;
}