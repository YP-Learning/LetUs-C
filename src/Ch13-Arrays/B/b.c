#include <stdio.h>
#include "helper.h"

// Write a program to copy the contents of one array into another in reverse order.

int main(void) {
    int size = 5, arr[size];

    for (int i = 0; i < size; i++) {
        printf("Please enter a number: ");
        scanf("%d", &arr[i]);
    }

    int reverse[size];

    printf("Normal Array: \n\t");
    display(arr, size);

    for (int i = 0; i < size; i++) {
        reverse[size - (i + 1)] = arr[i];
    }

    printf("Reverse Array: \n\t");
    display(reverse, size);
}
