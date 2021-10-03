#include <stdio.h>
#include <math.h>

/*
Write a program to recieve Cartesian co-ordinates (x, y) 
of a point and convert them into polar co-corinates (r, θ). 

Hint: r = sqrt(x² + y²) and θ = tan⁻¹(y / x)
*/

int main(void) {
    float x, y, r, theta;

    // input from the user.
    printf("Please enter the cartesian coordinates separated by <space>: ");
    scanf("%f %f", &x, &y);

    r = sqrtf(x * x + y * y);
    theta = 1 / tan(y / x);

    printf("Cartesian coordinates are: (%f, %f)", r, theta);
}
