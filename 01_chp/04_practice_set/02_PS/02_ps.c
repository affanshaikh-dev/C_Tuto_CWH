#include <stdio.h>

int main()
{
    // float pi = 3.14;
    // int radius, res;

    // printf("Enter Radius to find Area: ");
    // scanf("%d", &radius);

    // res = pi * radius * radius;
    // printf("The Area of Rectangle = %d \n", res);

    float pi = 3.14;
    int radius, height, res;

    printf("Enter Radius & Height to find Area: ");
    scanf("%d %d", &radius, &height);

    res = (pi * (radius * radius)) * height;
    printf("The Volume of Cylinder = %d \n", res);

    return 0;
}