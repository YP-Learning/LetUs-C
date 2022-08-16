#include <stdio.h>
#include <math.h>

// For the following set of n data points (x, y), write a program to compute 
// the correlation coefficient r given by
// $$ r = \frac{ \sum {xy} - \sum {x} \sum {y} }{ \sqrt{[n \sum {x^2} - (\sum {x})^2][n \sum {y^2} - (\sum{y})^2 ] } } $$

#define N 11
#define square(x) pow(x, 2)
#define sqrt(x) pow(x, 0.5)

const float data[N][2] = {
    { 34.22, 102.43 },
    { 39.87, 100.93 },
    { 41.85, 97.43 },
    { 43.23, 97.81 },
    { 40.06, 98.32 },
    { 53.29, 98.32 },
    { 53.29, 100.07 },
    { 54.14, 97.08 },
    { 49.12, 91.59 },
    { 40.71, 94.85 },
    { 55.15, 94.65 },
};

int main(int argc, char* argv[]) {
    float sum_xy, sum_x, sum_y, sum_x_squared, sum_y_squared, r;
    sum_xy = sum_x = sum_y = sum_x_squared = sum_y_squared = 0;

    for ( int i = 0; i < N; i++ ) {
        sum_x += data[i][0];
        sum_y += data[i][1];

        sum_x_squared += square(data[i][0]);
        sum_y_squared += square(data[i][1]);
        
        sum_xy += data[i][0] * data[i][1];
    }

    r = (sum_xy - (sum_x * sum_y)) / sqrt((N * sum_x_squared - square(sum_x)) * (N * sum_y_squared - square(sum_y)));

    printf("Correlation coefficient r = %.3f\n", r);
}

