#include <stdio.h>

typedef struct emloyee {
    float salary;
    int score;
} Emp;

int main() {
    Emp e1;
    Emp* ptr1 = &e1;
    ptr1->salary = 5214.352;
    ptr1->score = 55;
    
    printf("Employee Data:\nSalary: %.2f\nScore: %d\n", ptr1->salary, ptr1->score);

    return 0;
}
