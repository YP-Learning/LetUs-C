#include <stdio.h>
#include "areaperi.h"

int main(void) {
    int sq, tr_s1, tr_s2, tr_s3, tr_b, tr_h, ci;

    // square
    printf("Please enter the side of square: ");
    scanf("%d", &sq);
    printf("Perimeter of square: %d\n", PERI_SQUARE(sq));
    printf("Area of square: %d\n", AREA_SQUARE(sq));

    // circle
    printf("Please Enter the radius of circle: ");
    scanf("%d", &ci);
    printf("Circumferance: %.2f\n", PERI_CIRCLE(ci));
    printf("Area of circle: %.2f\n", AREA_CIRCLE(ci));

    // triangle
    printf("Please enter the all 3 sides of triangle separated by <space>: ");
    scanf("%d %d %d", &tr_s1, &tr_s2, &tr_s3);
    printf("Perimeter of triangle: %d\n", PERI_TRIANGLE(tr_s1, tr_s2, tr_s3));
    printf("PLease Enter the base and height of the triangle: ");
    scanf("%d %d", &tr_b, &tr_h);
    printf("Area of triangle: %.2f\n", AREA_TRIANGLE(tr_b, tr_h));
}
