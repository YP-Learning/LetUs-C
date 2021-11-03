#include <stdio.h>

// Ramanujan number is the smallest number that can be expresssed as
// sum of two cubes in two different ways. Write a program to print
// all such numbers up to a reasonable limit.

int main(void) {
    int number, a, b, c, d;
    int reasonable_limit = 10000;

    for ( number = 0; number <= reasonable_limit; number++ ) {
        // printf("Number: %d\n", number);
        for ( a = 1; a < number; a++ ) {
            if ( a * a * a > number ) 
                break;

            for ( b = a + 1; b < number; b++ ) {
                if ( b * b * b > number ) 
                    break;

                for ( c = a + 1; c < number; c++ ) {
                    if ( c * c * c > number ) 
                        break;

                    for ( d = c + 1; d < number; d++ ) {
                        if ( d * d * d > number ) 
                            break;
                        
                        if ( (a * a * a + b * b * b == number) && (c * c * c + d * d * d == number) ) {
                            printf("%d³ + %d³ = %d³ + %d³ = %d\n", a, b, c, d, number);
                            break;
                        }
                    }
                }
            }
        }
    }
}
