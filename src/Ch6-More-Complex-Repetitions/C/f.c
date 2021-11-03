#include <stdio.h>
#include <math.h>

// When interest compounds q times per year at an annual rate of
// r % for n years, the principal p compounds to an amount a as
// per the following formula:

// a = p ( 1 + r / q )^(nq)

// Write a program to read 10 sets of p, r, n & q and calculate
// the corresponding a's.

int main(void) {
    for ( int i = 0; i < 10; i++ ) {
        int p, r, n, q, a;

        printf("Please enter the Principal amount (p): ");
        scanf("%d", &p);
        printf("Please enter the rate of interest (r): ");
        scanf("%d", &r);
        printf("Please enter the Time period (n) in years: ");
        scanf("%d", &n);
        printf("Please enter the times per year (q): ");
        scanf("%d", &q);

        a = p * pow(1 + r/q, n * q);

        printf("The amount is %d\n", a);
    }
}
