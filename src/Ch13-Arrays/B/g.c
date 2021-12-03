#include <stdio.h>
#include "helper.h"

void modify(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 3;
    }
}

int main(void) {
    int size = 10, arr[size];
    
    for (int i = 0; i < size; i++)
        arr[i] = i;
    
    modify(arr, size);

    display(arr, size);
}
