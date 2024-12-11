#include<stdio.h>

int fact(int n) {
    if (n==1 || n==0) 
    {
        return 1;
    }

    return fact(n - 1) * n;
}

int main() {
    int fac = 4;
    printf("The Factorial of %d is %d\n", fac, fact(fac));

    return 0;
}