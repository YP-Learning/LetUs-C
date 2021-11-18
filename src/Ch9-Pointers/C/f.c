#include <stdio.h>
#include <math.h>

// Write a function to compute the distance between two points and
// use it to develop another function function that will compute
// the areas of the triangle whose vertices are A(x1, y1), B(x2, y2),
// and C(x3, y3). Use these function to develop a function which
// returns a value 1 if the point (x, y) lies inside the triangle
// ABC, otherwise returns a value 0.

float area_of_triangle(float a, float b, float c) {
    float S = (a + b + c) / 2;
    return sqrt(S * (S - a) * (S - b) * (S - c));
}

float length(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) * pow(y2 - y1, 2));
}

int is_inside_triangle(int p1, int p2, int x1, int y1, int x2, int y2, int x3, int y3) {
    int A, A1, A2, A3;

    A = area_of_triangle(
        length(x1, y1, x2, y2),  // AB
        length(x2, y2, x3, y3), // BC
        length(x3, y3, x1, y1) // CA
    );

    // PBC
    A1 = area_of_triangle(
        length(p1, p2, x2, y2),  // PB
        length(x2, y2, x3, y3), // BC
        length(x3, y3, p1, p2) // CP
    );

    // PBA
    A2 = area_of_triangle(
        length(p1, p2, x2, y2),  // PB
        length(x1, y1, x2, y2), // AB
        length(x1, y1, p1, p2) // AP
    );
    
    // PCA
    A3 = area_of_triangle(
        length(x3, y3, p1, p2),  // PC
        length(x3, y3, x1, y1), // AC
        length(x1, y1, p1, p2) // AP
    );

    if ( A == (A1 + A2 + A3) ) 
        return 1;
    return 0;
}

int main(void) {
    int 
        p1 = 1,
        p2 = 1,
        x1 = 0, 
        y1 = 0,
        x2 = 0, 
        y2 = 3,
        x3 = 4,
        y3 = 0;

    printf("result: %d\n", is_inside_triangle(p1, p2, x1, y1, x2, y2, x3, y3));
}
