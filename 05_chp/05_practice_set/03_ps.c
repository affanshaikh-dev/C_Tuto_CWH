#include<stdio.h>

float FOA(float g, int m) {
    float F = m * g;
    return F;
}

int main() {
    float g = 9.8;
    int m;

    printf("Enter Mass of Body: ");
    scanf("%d", &m);

    int F = FOA(g, m);
    printf("FOA: %.2d", F);
 
    return 0;
}