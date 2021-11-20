#include <stdio.h>

// A positive integer is entered through the keyboard,
// write a function to find the binary equivalent of
// this number:
// a. Without using recursion
// b. Using recursion

int reverse(int a) {
    int remainder, output_num = 0;
    do {
        remainder = a % 10;
        output_num = output_num * 10 + remainder;
        a /= 10;
    } while (a);
    return output_num;
}

void get_binary(int number) {
    int bin = 0, tmp = number;
    for (; number;) {
        bin += number % 2;
        number /= 2;
        if ( number != 0 )
            bin *= 10;
    }
    printf("binary of %d is: %d\n", tmp, reverse(bin));
}

int get_binary_recursive(int number) {
    int bin = 0;
    bin += number % 2;
    
    if ( number == 0 )
        return bin;
    
    return get_binary_recursive(number / 2) * 10 + bin;
}

int main(void) {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    get_binary(num);

    printf("Recursive binary of %d is: %d\n", num, get_binary_recursive(num));
}
