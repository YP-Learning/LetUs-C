#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Write a program to obtain transpose of a 4x4 matrix.
// The transpose of a matrix is obtained by exchanging
// the elements of each row with the elements of the
// corresponding column.

void display(int matrix[4][4]) {
    printf("[");

    for (int i = 0; i < 4; i++) {
        printf("\n\t");
        for (int j = 0; j < 4; j++) 
            printf("%d ", matrix[i][j]);
    }

    printf("\n]\n");
}

void transpose(int matrix[4][4]) {
    int transposed[4][4];

    // transpose
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            transposed[j][i] = matrix[i][j];
    }

    // write inplace
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            matrix[i][j] = transposed[i][j];
    }
}

int main(void) {
    int matrix[4][4];
    srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            matrix[i][j] = rand() % 10;  // keep 10 just for simplicity;
    }

    printf("Intial Matrix: ");
    display(matrix);
    
    transpose(matrix);
    
    printf("Transposed Matrix: ");
    display(matrix);
}
