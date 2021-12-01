#include <stdio.h>

// Twenty-five numbers are entered from the keyboard into an array.
// write a program to find out how many of them are positive,
// how many are negative. how many are even and how many odd.

int main(void) {
    int size = 25, arr[size], positives = 0, negatives = 0, even = 0, odd = 0;

    for (int i = 0; i < size; i++) {
        printf("Please enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0)
            negatives++;
        else if (arr[i] > 0) 
            positives++;
        
        if (arr[i] % 2 == 0)
            even++;
    }
    odd = size - even;

    printf("Negatives: %d\n", negatives);
    printf("Positives: %d\n", positives);
    printf("Odd: %d\n", odd);
    printf("Even: %d\n", even);
}
