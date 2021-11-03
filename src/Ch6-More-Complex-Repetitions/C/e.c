#include <stdio.h>

// According to a study, the approximate level of intelligence of a
// person can be calculated using the following formula:

// i = 2 + ( y + 0.5x)

// Write a program that will roduce a table of values of i, y and x,
// where y varies from 1 to 6, and for each value of y, x varies from
// 5.5 to 12.5 in steps of 0.5.

int main(void) {
    printf(" Y |   X   |   I\n");
    for ( int y = 1; y <= 6; y++ ) {
        for ( float x = 5.5; x <= 12.5; x+=0.5 ) {
            printf(" %d | %2.2f | %4.2f \n", y, x, (2 + ( y + 0.5 * x )));
        }
    }
}
