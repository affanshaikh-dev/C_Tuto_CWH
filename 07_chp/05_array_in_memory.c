#include <stdio.h>

int main() {
    int marks[50];

    printf("Enter Marks of 5 Students:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Marks at index %d is %u\n", i, &marks[i]);
    }
    
    return 0;
}
