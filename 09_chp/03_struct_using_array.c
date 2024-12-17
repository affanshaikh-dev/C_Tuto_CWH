#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee facebook[100];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter Code: ");
        scanf("%d", &facebook[i].code);

        printf("Enter salary: ");
        scanf("%f", &facebook[i].salary);

        printf("Enter Code: ");
        scanf("%s", facebook[i].name);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("%d\n%s\n%.2f\n", facebook[i].code, facebook[i].name, facebook[i].salary);
    }
    
    return 0;
}
