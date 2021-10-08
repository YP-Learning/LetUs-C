#include <stdio.h>
#include <math.h>

/*
If value of an angle is input through the keyboard, write a 
program to print all its Trigmetric rations.
*/

int main(void) {
    float angle;

    printf("Please enter the angle: ");
    scanf("%f", &angle);

    printf(
        " sin: %f \n cos: %f \n tan: %f \n cosec: %f \n sec: %f \n cot: %f",
        sin(angle), cos(angle), tan(angle),
        // asin(angle), acos(angle), atan(angle)
        1/sin(angle), 1/cos(angle), 1/tan(angle)
    );
}
