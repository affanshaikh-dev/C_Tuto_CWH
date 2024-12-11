#include<stdio.h>

// Function decleartion 
int sum(int, int);

// function defination
int sum(int x, int y) {
    printf("SUM = %d \n", x+y);
}

int main() {
    int x, y;

    printf("Enter two number to add: ");
    scanf("%d %d", &x, &y);
    
    sum(x, y); // function call

    return 0;
}