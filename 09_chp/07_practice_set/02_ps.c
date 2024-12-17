#include <stdio.h>

typedef struct vector {
    int i;
    int j;
} vec;

int main() {
    vec v = {1, 2};
    printf("The value of vector is %di + %dj", v.i, v.j);
    
    return 0;
}
