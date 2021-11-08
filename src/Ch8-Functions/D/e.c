#include <stdio.h>

// A positive integer is entered through the keyboard. Write a function
// to obtain the prime factors of this number. Solution

// for example, prime factors of 24 are 2, 2, 2 and 3, wheras prime
// factors of 35 are 5 and 7.

void prime_factors(int);
int is_prime(int);

int main(void) {
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);

    prime_factors(number);
}

void prime_factors(int number) {
    printf("The prime factors of %d are: ", number);
    
    for ( int i = 2; i <= number; i++ ) {
    
        if ( number % i == 0 && is_prime(i) ) {
    
            while ( number % i == 0 ) {
                printf("%d ", i);
                number /= i;
            }
    
        } 
    
    }
}

int is_prime(int number) {
    // check if the number is prime or not.

    for ( int i = 2; i < number; i++ ) {
        if ( number % i == 0) 
            return 0;
    }

    return 1;
}
