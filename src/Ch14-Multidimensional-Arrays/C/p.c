#include <stdio.h>
#include <math.h>

// The X and Y coordinates of 10 different points are entered through the keyboard. 
// Write a program to find the distance of last point from the first point 
// (sum of distances between consucutive points).

#define square(x) pow(x, 2)
#define sqrt(x) pow(x, 0.5)

int main(int argc, char* argv[]) {
    int x, y, x_prev, y_prev;
    float total_dist;

    printf("Enter P1 coordinates: ");
    scanf("%d %d", &x, &y);
    x_prev = x;
    y_prev = y;

    for ( int i = 2; i <= 10; i++ ) {
        printf("Enter p%d coordinates: ", i);
        scanf("%d %d", &x, &y);

        total_dist += sqrt(square(x_prev - x) + square(y_prev - y));

        x_prev = x;
        y_prev = y;
    }

    printf("Total distance = %.3f\n", total_dist);
}
