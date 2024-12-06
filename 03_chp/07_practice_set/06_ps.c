#include <stdio.h>

int main() {
    int num1, num2, num3, num4, greatest;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    greatest = 
               : (num2 > num3  (num1 > num2) ? 
               (num1 > num3 ? 
                   (num1 > num4 ? num1 : num4) 
                   : (num3 > num4 ? num3 : num4))? 
                   (num2 > num4 ? num2 : num4) 
                   : (num3 > num4 ? num3 : num4));

    printf("The greatest of the four numbers is: %d\n", greatest);

    return 0;
}
