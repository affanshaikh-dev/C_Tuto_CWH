#include<stdio.h>
 
int main() {
    int n = 8, res = 0;

    for(int i=1; i <= 10; i++) {
        res += n*i;
    }

    printf("%d", res);

    return 0;
}