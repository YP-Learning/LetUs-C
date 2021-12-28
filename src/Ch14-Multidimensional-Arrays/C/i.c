#include <stdio.h>
#define SIZE 3 // the size for the matrix

// Write a program to multiply any two 3x3 matrices.

void multiply(int a[SIZE][SIZE], int b[SIZE][SIZE], int output[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            output[i][j] = a[i][j] * b[i][j];
    }
}

void display(int arr[]){
    printf("[");
    for (int i = 0; i < SIZE; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
}

void display_sqr(int arr[SIZE][SIZE]){
    printf("[\n");
    for (int i = 0; i < SIZE; i++) 
        display(arr[i]);
    printf("]\n");
}

int main(void) {
    int m1[SIZE][SIZE] = {
        1, 2, 3,  
        5, 2, 6,  
        1, 6, 2,  
    }, m2[SIZE][SIZE] = {
        5, 2, 2, 
        6, 3, 6, 
        7, 4, 4,   
    }, output[SIZE][SIZE];

    printf("Performing element wise multiplication.\n");
    multiply(m1, m2, output);

    printf("M1: ");
    display_sqr(m1);
    printf("M2: ");
    display_sqr(m2);
    printf("Output: ");
    display_sqr(output);
}
