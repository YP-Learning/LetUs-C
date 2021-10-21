#include <stdio.h>

// Write a program to print out all Armstrong numbers between 1 and 500.
// If sum of cubes of each digit of the number is equal to the number
// itself, then the number is called an Armstrong number.
// For example 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3).

int main(void) {
    for (int i = 1; i <= 500; i++) {
        int cubed_num = 0, temp, face_val;

        temp = i;

        while (temp != 0) {
            face_val = temp % 10; // get the unit place number
            temp /= 10; // update temp, by shifting one place

            cubed_num += (face_val * face_val * face_val);
        }

        if (cubed_num == i)
            printf("%d is an Armstrong number\n", i);
    }
}
