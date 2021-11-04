#include <stdio.h>

// Write a program to produce the following output:
//             1
//         2       3
//     4       5       6
// 7       8       9       10

int main(void) {
    int rows, columns, i = 1;

    for ( rows = 1; rows <= 4; rows++ ) {
        for ( int j = 0; j < (4 - rows); j++ ) 
            printf("\t");
        for ( columns = 1; columns <= rows; columns++ ) {
            printf("%d\t\t", i);
            i++;
        }
        printf("\n");
    }
}
