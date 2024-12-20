#include <stdio.h>

typedef struct emp
{
    char name[30];
    float salary;
} emp;

int main()
{
    emp emps[2];
    emp* empSt[2] = {&emps[0], &emps[1]};
    

    for (int i = 0; i < 2; i++)
    {
        printf("Enter Employee Name: ");
        scanf("%s", empSt[i]->name);
        printf("Enter Employee Salary: ");
        scanf("%f", &empSt[i]->salary);
    }

    FILE *ptr;
    ptr = fopen("harry.txt", "a");

    for (int i = 0; i < 2; i++)
    {
        fprintf(ptr, "%s\t", empSt[i]->name);
        fprintf(ptr, "%.2f\n", empSt[i]->salary);
    }
    fclose(ptr);
    
    for (int i = 0; i < 2; i++)
    {
        printf("%s\n%.2f\n", empSt[i]->name, empSt[i]->salary);
    }

    return 0;
}
