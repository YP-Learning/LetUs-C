#include <stdio.h>

// If a positive interger is entered through the keyboard,
// write a recursive function to obtain the prime factors
// of the numbers.

int isPrime(int number) {
    // check if the number is prime or not.

    for ( int i = 2; i < number; i++ ) {
        if ( number % i == 0) 
            return 0;
    }

    return 1;
}

void printPrimeFactors(int number) {
    for ( int i = 2; i <= number; i++ ) {
    
        if ( number % i == 0 && isPrime(i) ) {
    
            printf("%d \n", i);
            number /= i;
            printPrimeFactors(number);
            break;
    
        } 
    }
}

int main(void) {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    printPrimeFactors(num);
}
