#include <stdio.h>
#include <math.h>

/*
Given the coordinates (x, y) of center of circle and its radius, 
write a program that will determine whether a point lies inside 
the circle, on the circle or outside the circle. 
[Hint: Use sqrt() and pow() functions]
*/

int main(void) {
    int x, y, r, x_check, y_check, r_squared, res;

    // get input
    printf("Please enter the coordinates of the center of the circle separated by <space>: ");
    scanf("%i %i", &x, &y);

    printf("Please enter the radius of the circle: ");
    scanf("%i", &r);
    r_squared = pow(r, 2);

    printf("Please enter the coordinates of the point to be checked separated by <space>: ");
    scanf("%i %i", &x_check, &y_check);

    // https://stackoverflow.com/questions/481144/equation-for-testing-if-a-point-is-inside-a-circle
    // (x - center_x)^2 + (y - center_y)^2
    // res is the calculation of LHS of the equation
    res = pow(x_check - x, 2) + pow(y_check - y, 2);

    if (res < r_squared)
        printf("The point lies inside the circle.\n");
    else if ( res == r_squared )
        printf("The point lies on the circle.\n");
    else 
        printf("The point lies outside the circle.\n");
}
