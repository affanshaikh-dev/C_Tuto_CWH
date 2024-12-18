#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "r");

    if (ptr == NULL)
    {
        printf("The File is does not exist\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("Num: %d\n", num);
        fclose(ptr);
    }

    return 0;
}