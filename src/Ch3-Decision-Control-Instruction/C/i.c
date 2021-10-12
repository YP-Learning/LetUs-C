#include <stdio.h>

/*
Given the length and bredth of a rectangle, write a program to 
find whether the area of the rectangle is greater tha its perimeter. 
For example, the area of the rectangle with length = 5 and 
bredth = 4 is greater than its perimeter.
*/

int main(void) {
    int length, bredth, area, perimeter;

    printf("Please enter length and bredth of the rectangle separated by <space>: ");
    scanf("%i %i", &length, &bredth);

    area = length * bredth;
    perimeter = 2 * ( length + bredth );

    if ( area > perimeter )
        printf("Area is greater than Perimeter.");
    else
        printf("Perimeter is greater than Area.");
}
