#include <stdio.h>
#include <math.h>

// If the lengths of the sides of a triangle are denoted by a, b, and c,
// then area of traingle is given by area = sqrt(S(S - a)(s - b)(s - c))
// where S = (a + b + c) / 2. Write a function to calculate the area of the traingle.

int area_of_triangle(int a, int b, int c) {
    int S = (a + b + c) / 2;

    return sqrt(S * (S - a) * (S - b) * (S - c));
}

int main(void) {
    int a, b, c;

    printf("Please enter the length of 3 sides of traingle separated by <space>: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The area of triangle is %d unit squared", area_of_triangle(a, b, c));
}
