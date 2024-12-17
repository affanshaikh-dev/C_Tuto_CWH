#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e) {
    e.code = 511;
    printf("%d\n", e.code);
}

int main() {
    struct employee e1;
    show(e1);
    return 0;
}
