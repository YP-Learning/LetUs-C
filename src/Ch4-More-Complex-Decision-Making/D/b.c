#include <stdio.h>

// If a character is entered through the keyboard, write a
// program to determine whether the character is a capital
// letter, a small case letter a digit or a special symbol.

int main(void) {
    char input_char;

    printf("Please enter a character: ");
    scanf("%c", &input_char);

    printf("You've entered a ");
    if ( input_char > 64 && input_char < 91 )
        printf("Capital Letter.");
    else if ( input_char > 96 && input_char < 123 )
        printf("Lowercase letter.");
    else if ( input_char > 47 && input_char < 58 )
        printf("Number/digit.");
    else
        printf("Special Symbol.");

    printf("\n");
}
