#include <stdio.h>

/* 
According to Gregorian calendar, it was Monday on the date 01/01/01. 
if any year is input through the keyboard write a program to find 
out what is the day on 1st January of this year.
*/

int main(void) {
    // refferd to other solutions to solve it.
    int year, day, leap_years, normal_years, year_;

    // get imput from the uer.
    printf("Please enter the year: ");
    scanf("%d", &year);

    year_ = year - 1 - 1900;  // subtract basic year from the current year...

    leap_years = year_ / 4; 
    normal_years = year_ - leap_years;

    day = ( normal_years * 365 + leap_years * 366 ) % 7; // dividing by 7 will give the day in integer.

    printf("The day of January 1st on %i year is: ", year);

    if(day==6)
        printf("Monday");
    else if(day==0)
        printf("Tuesday");
    else if(day==1)
        printf("Wednesday");
    else if(day==2)
        printf("Thursday");
    else if(day==3)
        printf("Friday");
    else if(day==4)
        printf("Saturday");
    else if(day==5)
        printf("Sunday");
}
