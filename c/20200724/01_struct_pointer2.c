#include <stdio.h>

struct perInfo{
    char addr[30];
    char tel[20];
};

struct person{
    char name[20];
    char pid[20];
    struct perInfo* info;
};

int main()
{
    struct perInfo info = {"Korea Seoul", "333-4444"};
    struct person man = {"Mr.Lee", "820204-xxxx512"};
    man.info = &info;

    printf("name    : %s \n", man.name);
    printf("pID     : %s \n", man.pid);
    printf("addr    : %s \n", man.info->addr);
    printf("tel     : %s \n", man.info->tel);

    return 0;
}