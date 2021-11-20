#include <stdio.h>

// Write a recursive function to obtain the first 25 numbers of a
// Fibonacci sequence. In a Fibonacci sequence the sum of two
// successive terms give the third term. Follwoing are the first
// few terms of a Fibonacci sequence:
// 1 1 2 3 5 8 13 21 34 55 89...

void fibonacci_sequence(int rterms, int first, int second) {
    // from hiverkiya/Let-Us-C-Solutions as the solution which i thought prints the number multiple times.
    if ( rterms == 0 )
        return;

    if ( first == 0 && second == 0 )
        first = 1;

    printf("%d ", first + second);
    fibonacci_sequence(rterms - 1, second, first + second);
}

int main(void) {
    fibonacci_sequence(25, 0, 0);
}
