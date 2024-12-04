#include<stdio.h>

int main() {
    int a = 5, b = 3;

    printf("a = %d, b = %d, a+b = %d\n", a, b, a + b);
    printf("a = %d, b = %d, a-b = %d\n", a, b, a - b);
    printf("a = %d, b = %d, a*b = %d\n", a, b, a * b);
    printf("a = %d, b = %d, a/b = %d\n", a, b, a / b);
    printf("a = %d, b = %d, Remainder a / b = %d\n", a, b, a % b);

    return 0;
}

// Type converstion
// int and int --> int 
// int and float --> float
// float and float --> float

// Priority Arithemetic Operators 
// 1st -> */%
// 2nd -> +-
// 3rd -> =

// associativity in c prog
// if *,/,%
// left to right
// example: x*y/z --> (x*y)/z

