#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Given an array `p[5]`, write a function to shift it circularly left 
// by 2 positions. Thus, if `p[0] = 15`, `p[1] = 30`, `p[2] = 28`, 
// `p[3] = 19` and `p[4] = 61` then after the shift `p[0] = 28`, 
// `p[1] = 19`, `p[2] = 61`, `p[3] = 15`, and `p[4] = 30`, Call this 
// function for a `(4x5)` matrix and get its rows left shifted.

void left_shift_array(int* arr, int size, int shift);
void left_shift_matrix_rows(int m[4][5], int shift);
void display_matrix(int m[4][5], const char* msg);

int main(int argc, char* argv[]) {
    int m[4][5] = {
        {1, 2, 3, 4, 5},
        {4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5},
        {4, 5, 6, 7, 8},
    };

    display_matrix(m, "Before:");

    left_shift_matrix_rows(m, 2);

    display_matrix(m, "After:");
}

void left_shift_array(int* arr, int size, int shift) {
    int *copy = (int*)calloc(size, sizeof(int));
    assert(copy != NULL);

    for ( int i = 0; i < size; i++ ) 
        copy[i] = arr[i]; 

    for ( int i = 0; i < size; i++ ) {
        if ((i + shift) >= size) {
            arr[(i + shift) - size] = copy[i]; 
            continue;
        } 

        arr[i + shift] = copy[i];
    }

    free(copy);
    copy = NULL;
}

void left_shift_matrix_rows(int m[4][5], int shift) {
    for ( int i = 0; i < 4; i++ ) {
        left_shift_array((int*)&m[i], 5, shift);
    }
}

void display_matrix(int m[4][5], const char* msg) {
    puts(msg);

    for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            printf("%d ", m[i][j]);
        }

        printf("\n");
    }
}
