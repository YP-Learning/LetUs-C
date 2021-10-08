#include <stdio.h>

/*
If value of an angle is input through the keyboard into
two locations C and D. Write a program to interchange 
the contents of C and D.
*/

int main(void) {
    int C, D, temporary;

    // get the input from the user
    printf("Please enter the values of angle C and D separated by <space>: ");
    scanf("%i %i", &C, &D);

    printf("Before\n C: %i\n D: %i\n", C, D);

    temporary = D;
    D = C;
    C = temporary;

    printf("After\n C: %i\n D: %i\n", C, D);
}
