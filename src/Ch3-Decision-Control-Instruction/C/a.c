#include <stdio.h>

/*
If cost price and selling price of an item are input 
through the keyboard, write a program to determine 
weather the seller has made profit or incurred loss. 
Also determine how much profit he made or loss he incurred.
*/

int main(void) {
    float cp, sp;

    printf("Please Enter the CP and the SP separated by <space>: ");
    scanf("%f %f", &cp, &sp);

    if ( sp > cp)
        printf("Its Profit of %f", sp - cp);
    else
        printf("Its Loss of %f", cp - sp);
}
