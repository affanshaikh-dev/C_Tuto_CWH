#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number [%d]:", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("[ %d ]", ptr[i]);
    }
    printf("\n");

    n = 10;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    printf("The New array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number [%d]:", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("[ %d ]", ptr[i]);
    }
    printf("\n");

    return 0;
}
