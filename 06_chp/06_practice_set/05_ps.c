#include <stdio.h>

int sum(int* a, int* b) {
    return *a+*b;
}

int avg(int* a, int* b) {
    return *a+*b/2;
}

int main() {
    int a = 15, b = 30;

    
    printf("Sum = %d\n", sum(&a, &b));
    printf("Avg = %d\n", avg(&a, &b));
    
    return 0;
}
