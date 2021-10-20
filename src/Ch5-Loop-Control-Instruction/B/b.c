#include <stdio.h>

// Write a program to find the factorial value of any number
// entered through the keyboard.

int main(void) {
    int number;
    long unsigned int factorial = 1;

    printf("Please enter a number: ");
    scanf("%d", &number);

    if ( number == 0 ) {
        printf("1");
        return 0;
    } 
    if ( number < 0 ) {
        printf("Invalid number");
        return 0;
    }

    for (; number > 0; number--) {
        factorial *= number;
    }

    printf("%lu", factorial);
}
