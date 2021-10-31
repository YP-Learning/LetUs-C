#include <stdio.h>

// Write a program to find the range of a set of numbers entered
// through the keyboard. Range is the difference between the smallest
// and the biggest number is the list.

int main(void) {
    int input_num, min, max, more_num, first = 1;

    do {
        printf("Please Enter a number: ");
        scanf("%d", &input_num);

        if (first) {
            min = input_num;
            max = input_num;
            first = 0;
        }
        else if ( input_num > max )
            max = input_num;
        else if ( input_num < min )
            min = input_num;

        printf("Do you want to enter one more number? (0 or n, 1 for y): ");
        scanf("%d", &more_num);
    } while ( more_num );

    printf("The range of the numbers entered is: %d\n", max - min);
}
