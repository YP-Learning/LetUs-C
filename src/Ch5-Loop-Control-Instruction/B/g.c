#include <stdio.h>

// Write a program to enter unmbers tilll the user wants. At the
// end it should display the count of positive, negatie and zeros entered.

int main(void) {
    int positive = 0, negative = 0, zeros = 0, num, again = 1;

    do {
        printf("Please enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zeros++;

        printf("Do you want to enter more numbers? 1 for yes, 0 for no: ");
        scanf("%d", &again);
    } while (again);

    printf("You have entered\n");
    printf("- %d positive numbers\n", positive);
    printf("- %d negative numbers\n", negative);
    printf("- %d zeros\n", zeros);
}
