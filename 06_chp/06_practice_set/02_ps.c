#include <stdio.h>

void func(int* in) {
    printf("Address inside the function %u\n", in);   
}

int main() {
    int i = 5;
    printf("Address in Main Function %u\n", &i);
    func(&i);
    
    return 0;
}
