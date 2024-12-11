#include<stdio.h>

int sum_natural(int n) {
    if(n == 1) {
        return 1;
    }
    return sum_natural(n-1) + n;
}

int main() {
    printf("The sum of first 5 natural num is %d", sum_natural(5));
    return 0;
}