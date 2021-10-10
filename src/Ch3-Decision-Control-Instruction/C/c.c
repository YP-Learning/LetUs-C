#include <stdio.h>

/* 
Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not.
Hint: Use the % operator
*/

int main(void) {
    int year;

    printf("Please enter the year to check: ");
    scanf("%d", &year);

    if ( year % 400 == 0 ) 
        printf("%d is a Leap Year\n", year);
    else if ( year % 100 == 0)
        printf("%d is not a Leap Year\n", year);
    else if ( year % 4 == 0 )
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);
}
