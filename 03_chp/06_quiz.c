#include<stdio.h>

int main() {

    int grade = 75;

    if (grade > 90 && grade < 100) {
        printf("Grade: A");
    } else if(grade > 80 && grade < 90) {
        printf("Grade: B");
    } else if(grade > 70 && grade < 80) {
        printf("Grade: C");
    } else if(grade > 60 && grade < 70) {
        printf("Grade: D");
    } else if(grade > 50 && grade < 60) {
        printf("Grade: E");
    } else {
        printf("Grade: F");
    }
    

    return 0;
}