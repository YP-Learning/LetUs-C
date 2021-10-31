#include <stdio.h>

// Write a program to recieve an integer and find its octal equivalent.
// Hint: To obtain octal equivalent of an integer, divide it continously
// by 8 till divident doesn't become zero, then write a remainders
// obtained in reverse direction.

int main(void) {
    int input_num, remainder, output_num = 0, temp_num = 0;

    printf("Please enter a number: ");
    scanf("%d", &input_num);

    // find the octal number
    do {
        remainder = input_num % 8;
        temp_num = temp_num * 10 + remainder;
        input_num = input_num / 8;
    } while (remainder != 0);

    // printf("%d\n", temp_num); // debug
    
    // reverse the direction
    do {
        remainder = temp_num % 10;
        output_num = output_num * 10 + remainder;
        temp_num = temp_num / 10;
    } while (temp_num);

    printf("The octal for of the number is: %d\n", output_num);
}
