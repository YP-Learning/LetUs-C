#include <stdio.h>
#include <math.h>

//  For the following set of pointes given by (x, y) fit a straight line given by 
// `y = a + bx` where, `a = \bar y - b \bar x` and 
// `b = \frac{ n \sum {yx} - \sum {y} \sum {x} }{ n \sum {x^2} - (\sum {x})^2 }`

#define N 10
#define square(x) pow(x, 2)

const float data[N][2] = {
    { 3.0, 1.5 },
    { 4.5, 2.0 },
    { 5.5, 3.5 },
    { 6.5, 5.0 },
    { 7.5, 6.0 },
    { 8.5, 7.5 },
    { 8.0, 9.0 },
    { 9.0, 10.5 },
    { 9.5, 12.0 },
    { 10.0,	14.0 },
};

int main(int argc, char* argv[]) {
    float a, b, sum_x, sum_y, sum_xy, sum_x_squared;
    sum_x = sum_x_squared = sum_xy = sum_y = 0;

    for (int i = 0; i < N; i++) {
        sum_x += data[i][0];
        sum_y += data[i][1];

        sum_xy += data[i][0] * data[i][1];

        sum_x_squared += square(data[i][0]);
    }

    b = (N * sum_xy - sum_y * sum_x) / ( N * sum_x_squared - square(sum_x));
    a = (sum_y / N) - b * (sum_x / N);

    printf("y = %.3f + %.3f x\n", a, b);
    return 0;
}
