#include <stdio.h>

typedef struct Date {
    int mm;
    int dd;
    int yyyy;
} date;

int compare(date d1, date d2) {
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    } else if(d1.yyyy > d2.yyyy) {
        return 1;
    } else if(d1.yyyy < d2.yyyy) {
        return -1;
    } else if(d1.mm > d2.mm) {
        return 1;
    } else if(d1.mm < d2.mm) {
        return -1;
    } else if(d1.dd > d2.dd) {
        return 1;
    } else if(d1.dd < d2.dd) {
        return -1;
    }
}

int main() {
    date d1 = {12, 4, 2004};
    date d2 = {11, 4, 2012};
    printf("%d\n", compare(d1, d2));
    
    return 0;
}
