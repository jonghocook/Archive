/* 1. 절차적 컴파일로 인해 먼저 함수원형을 정의한다.
2. Main함수에서 정의된 함수들을 읽어들어 컴파일을 진행한다.
3. 함수의 입력값과 출력값(매개변수)등등을 확인하여 진행한다. */

#include <stdio.h>

int Add(int, int);
void Intro(void);
int Input(void);
void ResultPrint(int, int, int);

int main(void)
{
    int val1, val2;
    int output;

    Intro();
    val1 = Input();
    val2 = Input();
    output = Add(val1, val2);
    ResultPrint(val1, val2, output);
    return 0;
}

void Intro(void)
{
    printf("******** START ********\n");
    printf("Enter Two Numbers> ");
}

int Input(void)
{
    int input;
    scanf("%d", &input);
    return input;
}

int Add(int i, int j)
{
    int result = i + j;
    return result;
}

void ResultPrint(int val1, int val2, int output)
{
    printf("Plus result> %d + %d = %d \n", val1, val2, output);
    printf("******** End ********\n");
}