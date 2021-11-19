#include <stdio.h>

// A 5-digit positive integer is entered through the keyboard,
// write a recursive and non-recursive function to calculate
// the sum of digits of the 5-digit number  

int sum_digits(int number) {
    int sum = 0;
    
    do {
        sum += number % 10;
        number /= 10;
    } while ( number > 0 );
    
    return sum;
}

int sum_digits_recursive(int number) {
    if ( number <= 0 ) 
        return 0;
    return ( number % 10 ) + sum_digits_recursive( number / 10 );
}

int main(void) {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    printf("Sum using non-recursive algorithm: %d\n", sum_digits(num));
    printf("Sum using recursive algorithm: %d\n", sum_digits_recursive(num));
} 
