#include <stdio.h>
#include <math.h>

// If the three sides of a triangle are entered through the keyboard,
// write a program to check whether the triangle is isoceles,
// equilateral, or scalene or right angled triangle.

int main(void) {
    int a, b, c;

    printf("Please enter the sides of the triangle separated by <space>: ");
    scanf("%i %i %i", &a, &b, &c);

    if ( !(( (a + b) > c ) && ( (a + c) > b ) && ( (b + c) > a )) ) {
        printf("Invalid triangle.\n");
        return 0;
    }

    if ( a == b && b == c )
        printf("The given triangle is equilateral triangle.\n");
    else if ( (pow(a, 2) + pow(b, 2)) == pow(c, 2) )
        printf("The given triangle is a right triangle.\n");
    else if ( a == b || b == c || c == a )
        printf("The given triangle is isoceles.\n");
    else
        printf("The given triangle is scalene triangle.\n");
}
