#include <stdio.h>

int main(void)
{
    int* ptr1 = NULL;
    char* ptr2 = NULL;
    double* ptr3 = 0;

    printf("%dst, %dst, %dst\n", ptr1++, ptr2++, ptr3++);
    printf("%dst, %dst, %dst\n", ptr1, ptr2, ptr3);

    return 0;
}