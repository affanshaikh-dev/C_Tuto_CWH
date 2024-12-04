#include <stdio.h>

int main() {
    int age = 15;

    if(age > 10) {
        printf("Your Age is greater than 10\n");
    } else if(age % 5 == 0) {
        printf("Your Age is greater Divisible by 5\n");
    } else {
        printf("Your Age is smaller than 10\n");
    }
}