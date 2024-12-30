#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n;
    float *ptr;

    // scanf("%d", &n);
    ptr = (float *)malloc(n * sizeof(int));

    ptr[0] = 3.5;
    ptr[1] = 4.7;
    ptr[2] = 4.8;
    ptr[3] = 4.8;
    ptr[4] = 4.5;

    for (int i = 0; i < 4; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}