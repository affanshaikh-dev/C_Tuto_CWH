#include <stdio.h>

void multiplyByTen(int *num) {
    *num *= 10;
}

int main() {
    int value = 50;

    printf("Original value: %d\n", value);

    multiplyByTen(&value);
    printf("Value after multiplying by 10: %d\n", value);

    return 0;
}
