#include <stdio.h>

// Write a recursive function to obtain the sum
// of first 25 natural numbers:

int sum_(int n) {
    if ( n <= 1 )
        return n;

    return n + sum_(n - 1);
}

int main(void) {
    int num = 25;

    printf("The sum of first %d natural numbers is: %d\n", num, sum_(num));
}
