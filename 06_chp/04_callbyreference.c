#include<stdio.h>

int sum(int* a, int* b) {
    *a = 6;
    return *a + *b;
}

int main() {
    int a=5, b=6;
    printf("%d\n", sum(&a, &b));
    printf("a  = %d\n", a); 
    return 0;
}

// it change the variable inside the function, it change the actual one 