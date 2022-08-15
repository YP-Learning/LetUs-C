#include <stdio.h>
#include <math.h>

// The area of a triangle can be computed by the sine law when 2 sides of 
// the triangle and the angle between them are known. 
// `Area = (1/2) a b sin(angle)`
// Given the following 6 triangular pices of land, write a program to find 
// their area and determine which is the largest.

const float data[6][3] = {
    { 137.4, 80.9, 0.78 },
    { 155.2, 92.62, 0.89 },
    { 149.3, 97.93, 1.35 },
    { 160.0, 100.25, 9.00 },
    { 155.6, 68.95, 1.25 },
    { 149.7, 120.0, 1.75 },
};

int main(int argc, char* argv[]) {
    int idx = 0; 
    float area, area_prev = -1;

    for ( int i = 0; i < 6; i++ ) {
        area = 0.5 * data[i][0] * data[i][1] * sin(data[i][2]);
        if (area_prev < area) {
            area_prev = area;
            idx = i;
        }
    }

    printf("Largest area is of triangle at idx %d, area is %.2f", idx, area_prev);
}
