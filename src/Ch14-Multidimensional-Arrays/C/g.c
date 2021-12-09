#include <stdio.h>

// Write a program to find if a square matrix is symetric.

void display(int arr[], int size){
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
}

void display_sqr(int arr[3][3]){
    printf("[\n");
    for (int i = 0; i < 3; i++) 
        display(arr[i], 3);
    printf("]\n");
}

int isSymetric(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] != arr[j][i]) {
                return 0;
                break;
            }
        }
    }
    return 1; // true
}

int main(void) {
    int arr[3][3] = {
        1, 2, 3,
        2, 4, 5, 
        3, 5, 6
    };

    display_sqr(arr);
    if (isSymetric(arr))
        printf("The matrix is symmetric\n");
    else
        printf("The matrix is not symmetric\n");

}
