#include <stdio.h>

/* 
Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the 
keyboard. A triangle is vaid if the sum of all the three 
angles is equal to 180 degrees.
*/

int main(void) {
    int a, b, c, total;

    // get input from the keyboard
    printf("Please enter the 3 angles of the triangle separated by <space>: ");
    scanf("%i %i %i", &a, &b, &c);

    if ( (a + b + c) == 180 )
        printf("The triangle is valid.\n");
    else
        printf("The triangle is not valid.\n");
}
