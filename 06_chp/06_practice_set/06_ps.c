#include <stdio.h>

int main() {
    int i = 8;
    int* j = &i;
    int** k = &j;

    printf("The Value of Pointer to Pointer Variable is %d", **k);

    return 0;
}
