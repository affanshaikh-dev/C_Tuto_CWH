#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6;
    int* ptr;

    ptr = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter Number [%d]:", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("[ %d ]", ptr[i]);
    }
    printf("\n");
    
    
    return 0;
}
