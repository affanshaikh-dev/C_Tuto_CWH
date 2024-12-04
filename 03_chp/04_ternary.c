#include<stdio.h>

int main() {
    int age = 15;

    int res = age>18
                ? printf("you can drive")
                : printf("you cannot drive");

    return 0;
}