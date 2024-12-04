#include<stdio.h>

int main() {
    int p, r, t, si;

    printf("Enter Principle Amount: ");
    scanf("%d", &p);
    printf("Enter Rate of Interest: ");
    scanf("%d", &r);
    printf("Enter Time: ");
    scanf("%d", &t);

    si = (p * r * t) / 100;
    printf("Simple Interest = Rs. %d\n", si);

    return 0;
}