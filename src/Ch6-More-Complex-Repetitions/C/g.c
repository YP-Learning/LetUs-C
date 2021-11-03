#include <stdio.h>
#include <math.h>

// The natural logarithm can be approximated by the following series.

// \frac{x-1}{x} + \frac{1}{2}(\frac{x-1}{x})^2 + \frac{1}{2}(\frac{x-1}{x})^3 + \frac{1}{2}(\frac{x-1}{x})^4 + \dots

// formula if x is input through the keyboard, write a program
// to calculate the sum of first seven terms of this series.

int main(void) {
    float sum = 0.0, x;

    printf("Please enter a value for x: ");
    scanf("%f", &x);

    sum = ( x - 1 ) / x;

    for ( int i = 2; i <= 7; i++ ) {
        sum += 0.5 * pow(( x - 1 ) / x, i);
    }

    printf("The approximate of natural logarithm is %.3f\n", sum);
}
