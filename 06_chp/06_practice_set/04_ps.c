#include <stdio.h>

void sum(int* a, int* b) {
    int res = *a + *b;
    printf("Sum: %d", res);
}

int main() {
    int a=10, b=20;
    sum(&a, &b);

    return 0;
}
