#include<stdio.h>

// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.


int main() {
    int s1, s2, s3, total = 300;
    float per;

    printf("Enter Subject: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if(s1 >= 33 && s2 >= 33 && s3 >= 33) {
        per = (s1 + s2 + s3 / total) * 100;

        if(per < 40) {
            printf("Student is Failed!\n");
        } else {
            printf("Student is passed\n");
        }
    } else {
        printf("Student Failed\n ");
    }

    return 0;
}