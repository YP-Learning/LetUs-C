#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int determinant(int **m, int n);
int **create_matrix(int h, int b);
void free_matrix(int*** m, int h);
void display_matrix(int** m, int h, int b, const char* msg);
void fill_matrix(int **m, int h, int b);


int main(int argc, char* argv[]) {
    int **m = create_matrix(6, 6);
    fill_matrix(m, 6, 6);

    display_matrix(m, 6, 6, "Matrix:");
    printf("Determinant: %d\n", determinant(m, 6));

    free_matrix(&m, 6);
}

int determinant(int **m, int n) {
    if (n < 1) {
        printf("Error: n must be greater than 0\n");
        exit(EXIT_FAILURE);
    }
    else if (n == 2) {
        return m[0][0] * m[1][1] - m[0][1] * m[1][0];
    }
    else {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int** m2 = create_matrix(n - 1, n - 1);
            for (int j = 1; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (k < i) {
                        m2[j - 1][k] = m[j][k];
                    }
                    else if (k > i) {
                        m2[j - 1][k - 1] = m[j][k];
                    }
                }
            }

            sum += pow(-1, i) * m[0][i] * determinant(m2, n - 1);
            free_matrix(&m2, n - 1);
        }
        return sum;
    }
}

int **create_matrix(int h, int b) {
    // Dont worry about this, just creating the matrix dynamically
    // using dynamic memory allocation
    int i;
    int** m = (int**) malloc(h * sizeof(int*));

    for (i = 0; i < h; i++) {
        m[i] = (int*) malloc(b * sizeof(int));
    }

    return m;
}

void free_matrix(int*** m, int h) {
    // free the dynamically allocated memory
    // void*** to allow any data-type to be passed to this func
    int i;
    int** mx = *m;

    for (i = 0; i < h; i++) {
        free(mx[i]);
    }

    free(mx);
    *m = NULL;
}

void display_matrix(int** m, int h, int b, const char* msg) {
    // print the matrix
    int i, j;

    puts(msg);
    printf("[\n");
    for (i = 0; i < h; i++) {
        for (j = 0; j < b; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("]\n");
}

int randRange(int min, int max) {
    return rand() % (max - min) + min;  
    // hack to get a number in interval [min, max)  (inclusive of min, exclusive of max)
}

void fill_matrix(int **m, int h, int b) {
    // fill the matrix randomly
    int i, j;

    for (i = 0; i < h; i++) {
        for (j = 0; j < b; j++) {
            m[i][j] = randRange(0, 100);
        }
    }
}
