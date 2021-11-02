#include <stdio.h>

// Write a program to generate all cominations of 1, 2, 3 using for loop.

int main(void) {
    for ( int i = 1; i <= 3; i++ ) {
        for ( int j = 1; j <= 3; j++ ) {
            for ( int k = 1; k <= 3; k++ ) {
                if ( i == j || j == k || i == k ) 
                    continue;
                printf("%d%d%d\n", i, j, k);
            }
        }
    }
}
