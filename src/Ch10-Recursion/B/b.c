#include <stdio.h>

// A positive integer is entered through the keyboard
// write a program to obtain the prime factors of the number.
// Modity the function to sutable to obtain the prime factors
// recursively.

int is_prime(int number) {
    // check if the number is prime or not.

    for ( int i = 2; i < number; i++ ) {
        if ( number % i == 0) 
            return 0;
    }

    return 1;
}

void prime_factors(int number) {
    
    for ( int i = 2; i <= number; i++ ) {
    
        if ( number % i == 0 && is_prime(i) ) {
    
            printf("%d \n", i);
            number /= i;
            prime_factors(number);
            break;
    
        } 
    }
}

int main(void) {
    unsigned int num;

    printf("Please enter a positive number: ");
    scanf("%d", &num);

    printf("The prime factors of %d are: \n", num);
    prime_factors(num);
}
