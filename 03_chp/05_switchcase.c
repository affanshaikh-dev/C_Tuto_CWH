#include<stdio.h>

int main() {
    int a = 1;

    switch (a)
    {
    case 1:
        printf("You entered 1");
        break;
    case 2:
        printf("You entered 2");
        break;
    case 3:
        printf("You entered 3");
        break;
    case 4:
        printf("You entered 4");
        break;
    
    default:
        printf("enter valid number");
        break;
    }
}