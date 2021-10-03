#include <stdio.h>
#include <math.h>

/*
c. If lengths of three sides of a triangle are input 
through the keyboard, write a program to find the 
area of the triangle. 
*/

int main(void) {
    float a, b, c, s, area;

    // take input from user 
    printf("Please enter the dimensions of the sides of a triangle separated by <space>: ");
    scanf("%f %f %f", &a, &b, &c);

    // area = √[s(s-a)(s-b)(s-c)]
    // s = (a + b + c) / 2
    s = (a + b + c) / 2;
    area = sqrtf(s * (s - a) * (s - b) * (s - c)); 

    printf("The area of the triangle is %.2f units squared", area);   
}
