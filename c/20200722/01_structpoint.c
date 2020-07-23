#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(void)
{
    struct point p1, p2;
    double distance;
    
    fputs("Enter First Point Value \"X\", \"Y\" coordinate : ", stdout);
    scanf("%d %d", &p1.x, &p1.y);

    fputs("Enter Second Point Value \"X\", \"Y\" coordinate : ", stdout);
    scanf("%d %d", &p2.x, &p2.y);

    distance = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y)); //대각선 길이를 구하는 것임으로 피타고라스 빗변 공식 활용

    printf("Distance of Two Point is %f.", distance);

    return 0;
}