#include <stdio.h>

void SelFunction(int s);    //함수를 선언한 것이고
void Add(void);
void Min(void);

int main(void)
{
    int sel;

    while(1)
    {
        printf("Select : Plus(1), Minus(2), End(3) ");
        scanf("%d", &sel);
        if(sel==3)
        {
            break;
        }
        SelFunction(sel);   //함수를 사용한 것이고
    }
    printf("Program Done. \n");

    return 0;
}

void SelFunction(int s)
{
    void (*fPtr)(void);     //함수 포인터를 선언한 것이다
    if(s==1)
    {
        fPtr = Add;         //선언한 함수포인터에 변수로 Add함수를 대입한 것이고
    }
    else
    {
        fPtr = Min;         //fPtr함수포인터에 Min함수를 대입한 것이다
    }
    fPtr();                 //Add또는Min을 대입한 fPtr()함수를 사용한 것이다
}

void Add(void)
{
    int a, b;
    printf("Enter Number for Plus : ");
    scanf("%d %d", &a, &b);
    printf("Plus Result : %d \n\n", a+b);
}

void Min(void)
{
    int a, b;
    printf("Enter Number for Minus : ");
    scanf("%d %d", &a, &b);
    printf("Minus Result : %d \n\n", a-b);
}