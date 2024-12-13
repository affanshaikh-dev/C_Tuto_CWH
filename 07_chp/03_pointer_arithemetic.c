#include <stdio.h>

int main()
{
    // POINTER ARITHEMETIC USING INTEGER POINTER
    // int a = 5;
    // int *ptr = &a;

    // printf("The Address of a is %p\n", &a);
    // printf("The Address of a is %u\n", ptr);
    // ptr++;

    // printf("The Value of ptr is %u\n", ptr);

    // POINTER ARITHEMETIC USING CHARACTER POINTER
    char a = "A";
    char *ptr = &a;

    printf("The Address of a is %u\n", &a);
    printf("The Address of a is %u\n", ptr);
    ptr++;

    printf("The Value of ptr is %u\n", ptr);
    return 0;
}
