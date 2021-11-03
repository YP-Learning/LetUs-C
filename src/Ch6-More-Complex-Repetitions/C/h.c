#include <stdio.h>

// Write a program to generate all Pythagorean Triplets with side
// length less than or equal to 30.

int main(void) {
    int a, b, c;

    printf("The Pythagorean triplets are: \n");

    for ( a = 1; a <= 30; a++ ) {
        for ( b = a; b <= 30; b++ ) {
            for ( c = b; c <= 30; c++ ) {
                if ( 
                    a * a + b * b == c * c || 
                    a * a + c * c == b * b ||
                    b * b + c * c == a * a
                )
                    printf("%d %d %d\n", a, b, c);
            }
        }
    }
}
