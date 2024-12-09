#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    while (i <= 10) {
        sum += 8 * i;
        i++;
    }

    printf("Sum of the numbers in the multiplication table of 8: %d\n", sum);

    return 0;
}
