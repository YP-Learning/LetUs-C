#include <stdio.h>

/*
The length and bredth of a rectangle and radius of a 
circle are input through the keyboard. Write a program 
to calculate the area and perimeter of the rectangle, 
and the area and circumference of the circle.
*/

int main(void) {
    int length, bredth, radius;

    // get input from user
    printf("Enter length, bredth and raduis (in CM) separated by <space>: ");
    scanf("%i %i %i", &length, &bredth, &radius);

    printf("Perimeter of the rectangle: %i\n", 2 * (length + bredth));
    printf("Area of the rectangle: %i\n", length * bredth);
    printf("Circumferance of the circle: %.2f\n", 2 * 3.14 * radius);
    printf("Area of the circle: %.2f\n", 3.14 * radius * radius);
}
