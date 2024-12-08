#include<stdio.h>

int main() {
    int i;

    for (int i = 0; i <= 5; i++)
    {
        if(i == 2) {
            // break;
            continue; // exit this iteration now
        }
        printf("%d\n", i);
    }
    
    return 0;
}