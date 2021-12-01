#include <stdio.h>

void display(int arr[], int size){
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
}
