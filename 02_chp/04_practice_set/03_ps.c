#include<stdio.h>

int main() {
    int n = 97;

    if(n%97 == 0) {
        printf("%d is divisible by 97", n);
    } else {
        printf("%d is not divisible by 97", n);
    }

    return 0;
}