#include <stdio.h>

// Write a program to find the greatest of the three numbers
// entered through the keyboard. Use conditional operators.

int main(void) {
    int a, b, c, max;

    printf("Please enter 3 numbers separated by <space>: ");
    scanf("%i %i %i", &a, &b, &c);

    max = (
        a > b ? 
            ( ( c > a ) ? c : a ) :
            ( ( c > b ) ? c : b )
    );

    printf("The greatest number is: ");
    printf("%i", max);
}
