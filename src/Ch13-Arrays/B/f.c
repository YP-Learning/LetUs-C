#include <stdio.h>

/// Write a program using pointers to find the smallest
// number in an array of 25 integers.

int min(int *arri, int size) {
    int min_ = *arri;

    for (int i = 1; i < size; i++) {
        if ( *arri < min_ )
            min_ = *arri;

        arri++;
    }

    return min_;
}

int main(void) {
    int size = 25, arr[size];

    for (int i = 0; i < size; i++) {
        printf("Please enter a number: ");
        scanf("%d", &arr[i]);
    }

    printf("The minimum number entered is %d\n", min(&arr[0], size));
}
