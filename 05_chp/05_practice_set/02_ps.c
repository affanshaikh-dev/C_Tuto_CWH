#include<stdio.h>

int fer(int deg) {
    int res = (deg * 9/5) + 32;
    return res;
}

int main() {
    int deg, res;
    
    printf("Enter Value of Degree Celcius to convert: ");
    scanf("%d", &deg);

    res = fer(deg);
    printf("Fahrenheit = %d\n", res);

    return 0;
}