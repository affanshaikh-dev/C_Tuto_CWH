#include <stdio.h>

int main() {
    FILE *ptr;
    int num = 5;
    ptr = fopen("table.txt", "w");

    if (ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        fprintf(ptr, "%d x %d = %d\n", num, i+1, num * (i + 1));
    }

    fclose(ptr);  
    return 0;
}
