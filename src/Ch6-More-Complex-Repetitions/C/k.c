#include <stdio.h>

// Write a program to print 24 hours of day with sutable suffixes
// like AM, P, Noon and Midnight.

int main(void) {
    for ( int hour = 1; hour <= 24; hour++ ) {
        if ( hour == 12 )
            printf("12 Noon\n");
        else if ( hour == 0 || hour == 24 )
            printf("12 Midnight\n");
        else if ( hour < 12 )
            printf("%d AM\n", hour);
        else if ( hour > 12 )
            printf("%d PM\n", hour - 12);
    }
}
