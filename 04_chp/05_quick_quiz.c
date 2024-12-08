#include<stdio.h>

int main() {
    int n, i = 0;

    printf("Enter natural Number: ");
    scanf("%d", &n);

    do {
        printf("%d\n", i);
        i++;
    } while(i < n);

    return 0;
}