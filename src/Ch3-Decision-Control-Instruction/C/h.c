#include <stdio.h>

/* 
Write a program to find the absolute value fo a number 
entered through the keyboard.
*/

int main(void) {
    int input_num;

    // Get the input from lthe user
    printf("Please enter the number: ");
    scanf("%i", &input_num);

    if ( input_num < 0 ) 
        input_num = -1 * input_num;
    
    printf("Absolute value: %i\n", input_num);
}
