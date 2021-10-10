#include <stdio.h>

/* 
Any integer is input through the keyboard. Write a program 
to find out weather it is an odd number or even number.
*/

int main(void) {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even number", num);
    else
        printf("%d is odd number", num);
}
