#include<stdio.h>

int main() {
    int n = 0, i = 1;

    while (i <= 10)
    {
        n = n + i;
        i++;
    }
    printf("%d", n);
    

    return 0;
}