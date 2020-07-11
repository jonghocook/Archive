#include <stdio.h>

int main(int a, char **arg)
{
    int i;
    if(a!=3)
    {
        printf("How to Use : private_arg Name SocialSecurityNumber \n");
        return 1;
    }

    for(i=0; i<a; i++)
    {
        printf(">>> %s \n", arg[i]);
    }

    return 0;
}