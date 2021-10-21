#include <stdio.h>

// Write a program to print all the ASCII values and their equivalent
// character using while loop. The ASCII values vary from 0 - 255.

int main(void) {
    int i = 0;

    while ( i <= 255 ) {
        printf("%d is '%c'\n", i, i);
        i++;
    }
}
