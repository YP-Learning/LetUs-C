#include <stdio.h>

// Write a function to compute the greatest common divisor
// given by Euclid's algorithm, exemplified for J = 1980,
// K = 1616 as follows:

// 1980 / 1617 = 1       1980 - 1 * 1616 = 363
// 1617 / 363 = 4        1617 - 4 * 363 = 165
// 363 / 165 = 2         363 - 2 * 165 = 33
// 5 / 33 = 5            165 - 5 * 33 = 0
// Thus, The GCD is 33.

void swap(int *j, int *k) {
    int temp = *j;
    *j = *k;
    *k = temp;
}

int gcd(int j, int k) {
    int remainder, quotient;

    if ( k > j )
        swap(&j, &k);

    do {
        quotient = j / k;
        remainder = j - (quotient * k);
        j = k;
        k = remainder;
    } while ( remainder != 0 );

    return j;
}

int main(void) {
    int a, b;
    printf("Please enter 2 numbers separated by <space>: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));
}
