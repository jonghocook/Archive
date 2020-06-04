/* add_end.c 를 while문을 ㅣ용해서 재구현하라 */

#include <stdio.h>

int main (void)
{
    int total = 0;
    int val;

    while(val != 0)
    {
        printf("Number 0 or quit: ");
        scanf("%d", &val);
        total += val;
    }
    printf("Total: %d \n", total);

    return 0;

}