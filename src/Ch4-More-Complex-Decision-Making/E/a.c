#include <stdio.h>

// Using conditional operators determine:
// 1. Whether the character entered through the keyboard
// is lowercase alphabet or not.
// 2. Whether a character entered through the keyboard is a special
// symbol or not.

int main(void) {
    char input; 

    printf("Please enter a character: ");
    scanf("%c", &input);

    // check for lowercase character
    printf("The character entered is ");
    printf((( input > 96 && input < 123 ) ? "Lowercase" : "Not Lowercase" ));
    printf("\n");

    // check for special symbol
    printf("The character entered is ");
    printf(
        (
            ( 
                (input > 96 && input < 123) || // lowercase
                (input > 64 && input < 91) ||  // uppercase
                (input > 47 && input < 58)  // number
            ) ? "Not a special symbol" : "Special symbol"
        )
    );
    printf("\n");
}
