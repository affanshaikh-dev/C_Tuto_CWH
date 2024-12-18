#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("harry.txt", "a");
    int num = 432;
    fprintf(fptr, "%d\t", num);
    fclose(fptr);
    
    return 0;
}
