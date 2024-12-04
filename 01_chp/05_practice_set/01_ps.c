#include<stdio.h>

int main() {
    int lenght, width, res;
     
    printf("Enter Lenght & Width: ");
    scanf("%d %d", &lenght, &width);

    res = lenght * width;
    printf("The Area of Rectangle = %d \n", res);

    return 0;
}