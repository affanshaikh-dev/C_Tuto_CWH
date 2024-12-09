#include<stdio.h>

int main() {
    int n = 0, i;

    // for (i = 1; i <= 10; i++)
    // {
    //     n = n + i;
    // }
    // printf("%d", n);

    do
    {
        n = n + i;
        i++;
    } while (i <= 10);
       
    printf("%d", n);

    return 0;
}