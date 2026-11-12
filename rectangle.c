#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int area(const struct Rectangle *rectangle)
{
    return rectangle->width * rectangle->height;
}

int main(void)
{
    struct Rectangle rectangle = {4, 6};
    printf("Area: %d\n", area(&rectangle));
    return 0;
}