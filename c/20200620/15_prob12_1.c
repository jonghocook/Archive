#include <stdio.h>

int main(void)
{
    char a = 'a';
    int b = 1;
    float c = 1.3f;
    double d = 3.5;
    char *p1 = &a;
    int *p2 = &b;
    float *p3 = &c;
    double *p4 = &d;

    (*p1)++;
    (*p2)++;
    (*p3)++;
    (*p4)++;

    printf("%c | %d | %.2f | %.2lf", *p1, b, *p3, d);
    return 0;
}