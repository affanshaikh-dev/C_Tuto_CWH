#include <stdio.h>

int multi(int n) {
    int res = n * 10;
    printf("n (inside function) = %d\n", res);
}

int main() {
    int n = 5;

    multi(n);
    printf("n = %d\n", n);
    return 0;
}
