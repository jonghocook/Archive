#include <stdio.h>

int main(void)
{
    char perID[7];
    char name[10];

    fputs("Enter Social Sicurity Code: ", stdout);
    fgets(perID, sizeof(perID), stdin);

    fflush(stdin);

    fputs("Enter Name: ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("SSCode: %s \n", perID);
    printf("Name: %s \n", name);

    return 0;
}