#include <stdio.h>

// Write a program using contitional operators to determine whether
// a year entered through the keyboard is a leap year or not.

int main(void) {
    int year;

    printf("Please enter a year to check: ");
    scanf("%d", &year);

    printf("The entered year is ");
    printf((
        (year % 4 == 0) ? (
            (year % 100 == 0) ? (
                (year % 400 == 0) ? "Leap year\n" : "Not leap year\n"
            ) : "Leap year\n"
        ) : "Not leap year\n"
    ));
}
