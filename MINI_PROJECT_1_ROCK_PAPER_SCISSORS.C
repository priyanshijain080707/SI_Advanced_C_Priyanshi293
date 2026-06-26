// ROCK_PAPER_SCISSORS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, computer;

    srand(time(0));
    computer = rand() % 3 + 1;

    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Enter your choice: ");
    scanf("%d", &user);

    if(user < 1 || user > 3)
    {
        printf("Invalid Input! Please enter 1, 2, or 3.\n");
        return 0;
    }

    printf("Computer chose: ");

    if(computer == 1)
        printf("Rock\n");
    else if(computer == 2)
        printf("Paper\n");
    else
        printf("Scissors\n");

    if(user == computer)
    {
        printf("Match Draw!\n");
    }
    else if((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2))
    {
        printf("You Win!\n");
    }
    else
    {
        printf("Computer Wins!\n");
    }

    return 0;
}

/*OUTPUT

1. Rock
2. Paper
3. Scissors
Enter your choice: 1
Computer chose: Rock
Match Draw!

1. Rock
2. Paper
3. Scissors
Enter your choice: 4
Invalid Input! Please enter 1, 2, or 3.

*/