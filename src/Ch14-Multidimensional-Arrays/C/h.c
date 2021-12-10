#include <stdio.h>

// Write a program to add two 6x6 matrices.

void add(int matrix_1[6][6], int matrix_2[6][6], int output_matrix[6][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) 
            output_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
    }
}

void display(int arr[], int size){
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
}

void display_sqr(int arr[6][6]){
    printf("[\n");
    for (int i = 0; i < 6; i++) 
        display(arr[i], 6);
    printf("]\n");
}

int main(void) {
    int m1[6][6] = {
        1, 2, 3, 5, 2, 2, 
        5, 2, 6, 2, 7, 3, 
        1, 6, 2, 6, 2, 6,
        6, 3, 6, 7, 8, 3, 
        0, 2, 8, 7, 4, 4, 
        9, 9, 9, 2, 5, 4,  
    }, m2[6][6] = {
        1, 2, 3, 5, 2, 2, 
        5, 2, 6, 2, 7, 3, 
        1, 6, 2, 6, 2, 6,
        6, 3, 6, 7, 8, 3, 
        0, 2, 8, 7, 4, 4, 
        9, 9, 9, 2, 5, 4,  
    }, output[6][6];

    add(m1, m2, output);

    printf("M1: ");
    display_sqr(m1);
    printf("M2: ");
    display_sqr(m2);
    printf("Output: ");
    display_sqr(output);
}
