#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;

void display(complex c)
{
    printf("The value of Complx No. is %d + %di\n", c.real, c.imaginary);
}

int main()
{
    complex c[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Real and Imaginary No. (Space Between No. is Mandatory)\n");
        scanf("%d%d", &c[i].real, &c[i].imaginary);

        display(c[i]);
    }

    return 0;
}
