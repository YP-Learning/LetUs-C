#include <stdio.h>

// Write a program that interchanges the odd and even elements of an array.

void display(int arr[], int size);

int main(void) {
    int size = 10, arr[size];

    for (int i = 0; i < size; i++) {
        printf("Please enter a number: ");
        scanf("%d", &arr[i]);
    }

    printf("Before interchange: \n\t");
    display(arr, size);

    int temp;
    for (int i = 0; i < size; i += 2) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("After interchange: \n\t");
    display(arr, size);
}

void display(int arr[], int size){
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
}
