#include <stdio.h>

int main() {
    int i = 2;
    printf("The Address of i is %u\n", &i);
    int* j = &i;
    printf("The Value of J is %d\n", *j);
    return 0;
}
