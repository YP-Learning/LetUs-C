#include <stdio.h>

// Write a program to print all prime numbers from 1 to 300.
// (Hint: Use neted loops, break and continue)

int main(void) {
    printf("Prime numbers between 1 to 300: \n2\n");
    for ( int i = 3; i <= 300; i++ ) {
        if ( i % 2 == 0 ) 
            continue;

        int is_prime = 1;
        for ( int j = 3; j < i; j += 2 ) {
            if ( i % j == 0 ) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
            printf("%d\n", i);
    }
}
