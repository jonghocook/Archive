#include <stdio.h>

int main(void)
{
    int i;
    int num = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int* p = arr;

    for(i=0; i<3; i++)
    {
        num = p[4-i];
        p[4-i] = p[i];
        p[i] = num;
    }

    for(i=0; i<5; i++)
    {
        printf("| %d ", p[i]);
    }

    printf("| \nPointer have to keep the length of array!");    //변수인 포인터로 상수의 배열을 받아 배열의 크기나 값을 수정하려할때 배열의 길이에 유의해야한다. 길이를 벗어나게 될 경우 경고메세지가 뜨지 않아 왜 실행이 안되는지 알기 어렵다.

    return 0;
}