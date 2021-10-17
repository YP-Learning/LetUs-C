#include <stdio.h>
#include <math.h>

// Write a program to recieve value of an angle in degrees and check
// whether the sum of squares of sine and cosine is equal to 1.

int main(void) {
    int input_num; 

    printf("Please enter an angle in degrees: ");
    scanf("%d", &input_num);

    printf(
        (pow(sin(input_num), 2) + pow(cos(input_num), 2)) == 1 ? "sin² + cos² = 1\n" : "sin² + cos² ≠ 1"
    );
}
