#include<stdio.h>

int avgThree(int, int, int);

int avgThree(int x, int y, int z) {
    int res = x+y+z/3;
    return res;
}

int main() {
    int x, y, z, res;

    printf("Enter Three Number to find Avg: ");
    scanf("%d %d %d", &x, &y, &z);

    res = avgThree(x, y, z);

    printf("%d\m", res);

    return 0;
}