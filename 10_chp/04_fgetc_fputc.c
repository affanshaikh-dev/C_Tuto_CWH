#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("harry.txt", "a");
    // char c = fgetc(fptr); // used to read a character from file
    // printf("%c", c);

    fputc('c', fptr);
    return 0;
}
