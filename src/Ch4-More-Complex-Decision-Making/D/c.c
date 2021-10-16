#include <stdio.h>

// If the three sides of triangle are entered through the keyboard,
// write a program to check whether the triangle is valid or not.
// The triangle is valid if the sum o ftwo sides is greater than
// the largest of the three sides.

int main(void) {
    int a, b, c;

    printf("Please enter the sides of the triangle separated by <space>: ");
    scanf("%i %i %i", &a, &b, &c);

    if (( (a + b) > c ) && ( (a + c) > b ) && ( (b + c) > a ))
        printf("The triangle is valid.\n");
    else
        printf("The Given sides is not of a triangle.\n");
}
