#include <stdio.h>
#include <string.h>

struct person {
    char name[20];
    char phone[20];
};                                      //구조체는 일종의 변수의 집합체라 그런가 닫는 괄호에 세미콜론을 붙여준다.

int main(void)
{
    struct person p;

    strcpy(p.name, "Free Lec");
    strcpy(p.phone, "02-3142-6702");

    fputs("Name : ", stdout);
    puts(p.name);

    fputs("Phone : ", stdout);
    puts(p.phone);

    return 0;
}