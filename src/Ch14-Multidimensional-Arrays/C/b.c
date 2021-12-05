#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Write a program to pick up the largest number from any
// 5 rows by 5 column matrix.

int matrixMax(int matrix[5][5]);

int main(void) {
    srand(time(NULL));
    int size = 5, matrix[size][size];

    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
            matrix[i][j] = rand() % 25;
    }

    printf("Max = %d\n", matrixMax(matrix));
}

int matrixMax(int matrix[5][5]) {
    int max = matrix[0][0];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
            }
        }
    }

    return max;
}
