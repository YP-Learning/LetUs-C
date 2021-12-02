#include <stdio.h>

// if an array arr contains n elements. then write a program to check
// if arr[0] = arr[n - 1], arr[1] = arr[n - 2] and so on.

int main(void) {
    int size = 9, arr[] = {1, 5, 2, 6, 8, 0, 3, 5, 9};

    for (int i = 0; i < (size / 2); i++) {
        if ((arr[i] == arr[size - (i + 1)]) && (i < (size - (i + 1)))) {
            printf("elements %d and %d are equal.\n", i, size - (i + 1));
        }
    }
}
