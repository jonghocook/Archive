/* 길이가 26인 char배열, A~Z까지 반복문을 이용해 저장, */

#include <stdio.h>

int main(void)
{
    const int a = 26;
    int i;
    char spe[a];

    spe[0] = 'A';
    for(i = 0; i < a; i++)
    {
        spe[i + 1] = spe[i] + 1;
    }
    
    for(i = 0; i < a; i++)
    {
        printf("\"%c\" ", spe[i]);
    }

    return 0;
}