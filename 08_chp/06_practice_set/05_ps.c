#include <stdio.h>

int strlens(char str[]) {
    int i = 0, count;
    char c = str[i];

    while (c != 0)
    {
        c = str[i];
        i++;
    }
    count = i-1;
    return count;
}

void sstrcpy(char target[], char source[]) {
    for (int i = 0; i < strlens(source); i++)
    {
        target[i] = source[i];
    }
    target[strlens(source)] = '\0';
}

int main() {
    char source[] = "harry";
    char target[30];

    sstrcpy(target, source);
    printf("%s %s\n", source, target);
    return 0;
}
