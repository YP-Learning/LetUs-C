#include <stdio.h>

/* 
If ages of Ram, Shyam and Ajay are input through the keyboard 
write a program to determine the youngest of three.
*/

int main(void) {
    int ram, shyam, ajay;

    printf("Please enter the age of Ram Shyam and Ajay separated by <space>: ");
    scanf("%i %i %i", &ram, &shyam, &ajay);

    if ( ram < shyam && ram < ajay )
        printf("Ram is the youngest of three.\n");
    else if ( shyam < ram && shyam < ajay )
        printf("Shyam is the youngest of three.\n");
    if ( ajay < shyam && ajay < ram )
        printf("Ajay is the youngest of three.\n");
}
