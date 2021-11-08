#include <stdio.h>

// Any year is entered thorugh the keyboard. Write a function to
// determine wether the year is a leap year or not.

int is_leap(int year);

int main(void) {
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);

    if ( is_leap(year) ) 
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}

int is_leap(int year) {
    if ( year % 400 == 0 )
        return 1;
    else if ( year % 100 == 0 )
        return 0;
    else if ( year % 4 == 0 )
        return 1;

    return -1;
}
