#include <stdio.h>

int main(void)
{
    printf("Line Number : %d \n", __LINE__);
    printf("File Name : %s \n", __FILE__);
    printf("Time of Compile : %s \n", __TIME__);
    printf("Date of Compile : %s \n", __DATE__);

    return 0;
}