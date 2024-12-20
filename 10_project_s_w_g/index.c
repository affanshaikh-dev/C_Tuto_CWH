#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char con;
    srand(time(0));
    int player, computer;

    do
    {
        computer = rand() % 3;

        printf("Welcome to Snake, Water, Gun Game\n0. Snake\n1. Water\n2. Gun\n");
        scanf("%d", &player);

        if (computer == player)
        {
            printf("Tie! Both are Same.\n");
        }
        else if ((player == 0 && computer == 1) 
                 || (player == 1 && computer == 2) 
                 || (player == 2 && computer == 0))
        {
            printf("You Win!\n");
        }
        else
        {
            printf("Computer Wins!\n");
        }

        printf("You want play again (y/n) ");
        while ((getchar()) != '\n');
        scanf("%c", &con);
    } while (con == 'Y' || con == 'y');

    printf("Thanks! for play my basic Game.");
    return 0;
}
