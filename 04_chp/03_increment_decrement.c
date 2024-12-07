#include<stdio.h>

int main() {
    int i = 5;
    
    printf("The Value of i is %d\n", i);
    // i++; // print first then increment - postfix 
    // ++i; // incrments first and then prints - prefix
    // i--; // print first then decrement - postfix 
    // --i; // decrement first and then prints - prefix
    printf("The Value of i is %d\n", i);
    printf("The Value of i is %d\n", ++i);
}