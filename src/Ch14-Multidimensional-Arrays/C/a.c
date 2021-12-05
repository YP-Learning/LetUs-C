#include <stdio.h>

// How will you initialize a three-dimensional array thread[3][2][3]?
// How will you refer the first and the last element in this array?

int main(void) {
    int thread[3][2][3] = {
        1, 2,
        3, 4, 
        5, 6,

        7, 8, 
        9, 10,
        11, 12,

        13, 14, 
        15, 16,
        17, 18 
    };

    printf("first element: %d\n", thread[0][0][0]);
    printf("last element: %d\n", thread[2][1][2]);
}
