#include <stdio.h>

// Write a program to calculate overtime pay of 10 employees.
// Overtime is paid at the rate of Rs. 12.00 per hour for every
// hour worked above 40 hours. Assume that employees do not
// work for fractional part of an hour.

int main() {
    int hours, overtime_hours;
    float overtime_pay, OVERTIME_PAY_RATE = 12.00;

    for (int i = 0; i < 10; i++) {
        printf("Please enter the hours of work of employee %d: ", i + 1);
        scanf("%d", &hours);

        overtime_hours = hours - 40;

        if ( overtime_hours > 0 ) {
            overtime_pay = overtime_hours * OVERTIME_PAY_RATE;
            printf("The overtime pay for employee %d is: %f\n", i + 1, overtime_pay);
        } else 
            printf("Employee %d is not eligible for overtime pay.\n", i + 1);
    }
}
