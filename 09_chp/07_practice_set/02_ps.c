#include <stdio.h>

typedef struct vector {
    int i;
    int j;
} vec;

vec sumVector(vec v1, vec v2) {
    vec v3 = {(v1.i + v2.i), (v1.j + v2.j)};
    return v3;   
}

int main() {
    vec v1 = {1, 2};
    vec v2 = {5, 6};
    vec v3 = sumVector(v1, v2);
    printf("The value of vector is %di + %dj", v3.i, v3.j);
    
    return 0;
}
