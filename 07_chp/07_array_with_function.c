#include <stdio.h>

void printArr(int *arr) {
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}

int main() {
    int arr[] = {50, 60, 30};

    printArr(arr);
    
    return 0;
}
