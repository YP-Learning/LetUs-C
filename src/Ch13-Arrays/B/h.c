#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helper.h"

void insertToArray(int arr[], int size, int to, int from) {
    if (size <= to || size <= from)
        return; // guard to check if index is out of range

    int temp = arr[from], temp_2;
    for (int i = to; i <= from; i ++) {
        temp_2 = arr[i];
        arr[i] = temp;
        temp = temp_2;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] >= arr[i]) {
                insertToArray(arr, size, j, i);
                break;
            }
        }
    }
}

int main(void) {
    int size = 25, arr[size];
    srand(time(NULL));

    for (int i = 0; i < size; i++) 
        arr[i] = rand() % 25;

    printf("Array before: \n\t");
    display(arr, size);
    
    insertionSort(arr, size);
    
    printf("Array after: \n\t");
    display(arr, size);
}
