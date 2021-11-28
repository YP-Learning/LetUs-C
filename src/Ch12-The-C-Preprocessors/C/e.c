#include <stdio.h>
#include "interest.h"

int main(void) {
    int p, r, t;
    printf("Please enter Principle amount: ");
    scanf("%d", &p);
    printf("Please enter rate of interest: ");
    scanf("%d", &r);
    printf("Please enter time period: ");
    scanf("%d", &t);

    r = r/100;

    printf("Total amount: %d\n", AMOUNT(p, r, t));
}
