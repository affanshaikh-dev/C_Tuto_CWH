#include <stdio.h>

typedef struct c {
    int real;
    int imaginary;
} complex;

int main() {
    complex v = {1, 2};
    printf("The value of Complx No. is %d + %di", v.real, v.imaginary);
    
    return 0;
}
