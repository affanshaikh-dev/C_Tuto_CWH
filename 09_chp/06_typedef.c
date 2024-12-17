#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main() {
    // typedef int harry;
    // harry a = 88;   
    // printf("The value of a is %d\n", a);
    // typedef struct employee Emp;

    Emp e1;
    Emp* ptr1 = &e1;

    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.55;

    printf("%d\n%s\n%.2f\n", e1.code, e1.name, e1.salary);
    printf("%d\n%s\n%.2f\n", ptr1->code, ptr1->name, ptr1->salary);

    return 0;
}
