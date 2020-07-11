#include <stdio.h>

int main(void)
{
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    printf("a[0]   : %d \n", a[0]);             
    printf("*(a+0) : %d \n", *(a+0));           

    printf("a[1]   : %d \n", a[1]);             
    printf("*(a+1) : %d \n", *(a+1));           
        
    printf("a[2]   : %d \n", a[2]);             
    printf("*(a+2) : %d \n", *(a+2));           

    printf("%d, %d \n", a[1][0], (*(a+1))[0]);  //3
    printf("%d, %d \n", a[1][2], *(a[1]+2));    //5
    printf("%d, %d \n", a[2][1], *(*(a+2)+1));  //6

    return 0;
}