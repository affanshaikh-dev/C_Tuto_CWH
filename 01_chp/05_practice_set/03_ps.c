#include<stdio.h>

int main() {
    int deg, conve;

    printf("Enter Tem in Degree Celcius to Convert:");
    scanf("%d", &deg);

    conve = ((deg * 9)/5) + 32;

    printf("Convertion to ferhanit = %d \n", conve);
    return 0;
}