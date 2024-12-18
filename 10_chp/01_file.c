#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "r");

    int num;
    fscanf(ptr, "%d", &num);
    printf("Num: %d\n", num);
    fscanf(ptr, "%d", &num);
    printf("Num: %d\n", num);
    fclose(ptr);

    return 0;
}

// "r" -> Open for reading
// "rb" -> Open for reading in binary
// "w" -> Open for writing | if the file exists, the content will be overwritten
// "wb" -> Open for writing in binary
// "a" -> Open for append | if the file does not exist, it will be created
