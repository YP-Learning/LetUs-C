#include <stdio.h>

// A year is entered through the keyboard, write a program
// to determine whether the year is leap or not. Use the
// logical operators && and ||

int main(void) {
    int year;

    printf("Please enter a year to check: ");
    scanf("%d", &year);

    if ( year % 100 == 0 && year % 400 != 0 )
        printf("Not a leap year\n");
    else if ( year % 400 == 0 || year % 4 == 0 )
        printf("Is a leap year\n");
    else
        printf("Not a leap year\n");
}
