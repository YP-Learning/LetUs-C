#include <stdio.h>

// Write a program to add first seven terms of the following
// series using a for loop.
// 1/1! + 2/2! + 3/3! +

int main(void) {
    int n_terms = 7;
    float sum = 0.0;

    for ( int i = 1; i < (n_terms + 1); i++ ) {
        int factorial_i = 1;

        for ( int j = i; j > 0; j-- )
            factorial_i *= j;

        sum += ((float) i) / factorial_i;
    }

    printf("The sum of the first %d terms of the series is %f\n", n_terms, sum);
}
