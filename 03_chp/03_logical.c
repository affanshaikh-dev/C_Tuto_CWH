#include <stdio.h>

int main() {
    int age = 15;

    printf("Logical AND: %d\n", age > 10 && age < 20);
    printf("Logical OR: %d\n", age > 10 || age < 20);
    printf("Logical NOT: %d\n", !(age > 10));
}

// logical operator 
// logical operator also give boolean value (1(true), 0(false))
// And = && = If both the conditions are true then its true
// OR = || = Atleast one condition are true then its true
// NOT = ! = Its convert true to false and false to true
