#include <stdio.h>

int main(void)
{
    int len = 0, i;
    char str[100];

    printf("Enter String> ");
    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }
        printf("\n%d\n", len);

    for(i=0; i<len/2; i++)  //len값에 2를 나누는 이유는 알파벳을 역순으로 바꾸는 과정에서 길이만큼의 횟수로 바꿀경우 원상복귀가 됨으로 반의 횟수로 변경하면 역순으로 저장이된다.
    {
        char ch = str[len-i-1];
        str[len-i-1] = str[i];
        str[i] = ch;
    }

    printf("\n%s \n", str);

    return 0;
}