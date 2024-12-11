#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a=5, b=6;
    printf("%d\n", sum(a, b)); 
    
    return 0;
}

// it just copy the variable inside the function, it not change the actual one 