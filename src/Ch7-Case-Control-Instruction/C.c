#include <stdio.h>

// Write a menu driven program which has the following options:
// - Factorial of a number
// - Prime or not
// - Odd or even
// - Exit
// Once a menu item is selected the approriate action should be taken
// and once this action is finished the menu should reappear.
// Unless the user selects the menu 'Exit' option the program
// should continue to run.
// Hint: Make use of an infinite while and a switch statement.

int main(void) {
    int run = 1;
    printf("Welcome :)\n");

    while (run) {
        int choice;

        printf("---------------------------------------------------\n");    
        printf("Press 0 to calculate Factorial of a number.\n");
        printf("Press 1 to calculate if the number is Prime or not.\n");
        printf("Press 2 to check if number is odd or even.\n");
        printf("Press 3 to Exit.\n");
        scanf("%d", &choice);

        switch (choice) {
            case 0: {
                int num, factorial = 1;
                printf("Please enter a number: ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("Invalid number.\n");
                    break;
                }

                for (; num > 0; num--)
                    factorial *= num;

                printf("The factorial is %d.\n", factorial);
                break;
            }
            case 1: {
                int num, is_prime = 1;
                printf("Please enter a number: ");
                scanf("%d", &num);

                if (num < 0) {
                    printf("Please enter a positive number.\n");
                    break;
                }

                for (int i = 2; i < num; i++) {
                    if (num % i == 0)
                        is_prime = 0;
                }

                printf("The number is %s.\n", is_prime ? "Prime" : "Not prime");
                break;
            }
            case 2: {
                int check_num;

                printf("Please enter a number.\n");
                scanf("%d", &check_num);

                printf("The entered number is %s\n", check_num % 2 == 0 ? "Even" : "Odd");
                break;
            }
            case 3: {
                run = 0;
                printf("Thank you for using :)\n");
                break;
            }
            default: 
                printf("Invalid Choice, please try again.\n");
        }
    }
}
