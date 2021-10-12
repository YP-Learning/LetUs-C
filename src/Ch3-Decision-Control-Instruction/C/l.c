#include <stdio.h>

/*
Given a point (x, y), write a program to find out if it 
lies on the X-axis, Y-axis or on the origin. 
*/

int main(void) {
    int x, y;

    // Get the input
    printf("Please enter the coordinates of the point separated by <space>: ");
    scanf("%i %i", &x, &y);

    if ( x == 0 && y == 0 )
        printf("The point is on origin\n");
    else if ( x == 0 )
        printf("The point is on Y-axis\n");
    else if ( y == 0 )
        printf("The point is on X-axis\n");
}
