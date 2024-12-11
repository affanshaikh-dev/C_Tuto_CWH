#include<stdio.h>

void goodMorning() {
    printf("Good Morning");
}
void goodAfternoon() {
    printf("Good Afternoon");
}
void goodNight() {
    printf("Good Night");
}

int main() {
    int time;

    printf("Enter Time (1, 2, 3)");
    scanf("%d", &time);

    switch (time)
    {
    case 1:
        goodMorning();
        break;
    case 2: 
        goodAfternoon();
    case 3: 
        goodNight();

    default:    
        printf("Enter Valid Number!");
        break;
    }

    return 0;
}