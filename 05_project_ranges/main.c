#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int ranNo = ((rand() % 100) + 1);
    int no_of_guess = 0, guessed;

    do  
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);

        if (guessed > ranNo) {
            printf("Lower Number plz!\n");
        } else if (guessed < ranNo) {
            printf("Higher Number plz!\n");
        } else {
            printf("Congrats! You Guess Correct!\n");
        }
        no_of_guess++;
        
    } while (guessed != ranNo);

    printf("You gessed no. in %d guesses\n", no_of_guess);

    return 0;
}