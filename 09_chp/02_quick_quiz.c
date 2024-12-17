#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;
    printf("Enter Value of code");
    scanf("%d", &e1.code);
    printf("Enter Value of salary");
    scanf("%f", &e1.salary);
    printf("Enter Value of name");
    scanf("%s", e1.name);

    printf("%d\n %s\n %.2f\n", e1.code, e1.name, e1.salary);

    printf("Enter Value of code");
    scanf("%d", &e2.code);
    printf("Enter Value of salary");
    scanf("%f", &e2.salary);
    printf("Enter Value of name");
    scanf("%s", e2.name);

    printf("%d\n %s\n %.2f\n", e2.code, e2.name, e2.salary);

    printf("Enter Value of code");
    scanf("%d", &e3.code);
    printf("Enter Value of salary");
    scanf("%f", &e3.salary);
    printf("Enter Value of name");
    scanf("%s", e3.name);

    printf("%d\n %s\n %.2f\n", e3.code, e3.name, e3.salary);

    return 0;
}
