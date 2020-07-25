#include <stdio.h>

struct point {
    int x;
    int y;
};

struct circle {
    struct point p;
    double radius;
};

int main()
{
    struct circle c1 = {10, 10, 1.5};
    struct circle c2 = {{30, 30}, 2.4};

    printf("[Circle]\n");
    printf("x: %d , y: %d \n", c1.p.x, c1.p.y);
    printf("radius: %.2f \n", c1.radius);

    printf("\n");

    printf("[Cricle2]\n");
    printf("X: %d , Y: %d \n", c2.p.x, c2.p.y);
    printf("Radius: %.2f \n", c2.radius);

    return 0;
}