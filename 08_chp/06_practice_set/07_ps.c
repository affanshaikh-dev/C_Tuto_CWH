#include <stdio.h>
#include <string.h>

int main() {
    char c = 'v';
    int contains = 0;
    char str[] = "Harry";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
    }
    
    if(contains) {
        printf("Yes it contains\n");
    } else {
        printf("Does not contain\n");
    }
    
    return 0;
}
