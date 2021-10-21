#include <stdio.h>

// Two numbers are entered through the keyboard. Write a program
// to find the value of one number raised to the power of another.

int main(void) {
    int number, pow, out = 1;

    printf("Please enter the number: ");
    scanf("%d", &number);

    printf("Please enter the power to which %d should be raised: ", number);
    scanf("%d", &pow);

    for (int i = 0; i < pow; i++) {
        out *= number;
    }

    printf("The answer is: %d", out);
}
