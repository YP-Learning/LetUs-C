#include <stdio.h>
#include <stdlib.h>

// Write a program for a matchstick game being played between the
// computer and a user. Your program should ensure that the
// computer always wins. Rues for the game are as follows:

// - There are 21 matchsticks.
// - The computer asks the player to pick 1, 2, 3 or 4 matchsticks.
// - After th person picks, the computer does the picking.
// - Whoever is forced to pick up the last matchstick loses the game.

int main(void) {
    int who = 0, matchsticks = 21; 
    // who is used to determine weather the computer or the user will play
    
    while (matchsticks > 1) {
        int input;
        
        if ( who % 2 == 0 ) { // get user input
            printf("Please enter a number between 1-4: ");
            scanf("%d", &input);

            if ( input > 5 || input < 0 ) { // handle invalid input
                printf("Invalid input, please try again.\n");
                continue;
            } 
        } else {  // computer's choice
            input = (rand() % 4) + 1; // random number

            // cheat
            if (matchsticks < 6)
                input = matchsticks - 1;

            printf("The computer's choice was: %d\n", input);
        }

        who++;  // next user
        matchsticks -= input;

        printf("Matchsticks Remaining: %d\n", matchsticks);
    }

    if (who % 2 == 0)
        printf("You lost.\n");
    else
        printf("Computer lost.\n");
}
