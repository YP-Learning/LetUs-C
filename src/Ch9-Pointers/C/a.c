#include <stdio.h>
#include <math.h>

// Write a function that recieves 5 integers and returns the sum,
// average and standard deviation of these numbers. Call the
// function from main() and print the results in main().

void calculate(int i1, int i2, int i3, int i4, int i5, int *sum, int *average, float *standard_deviation);

int main(void) {
    int a1, a2, a3, a4, a5;
    int sum, avg;
    float std;

    printf("Please enter 5 numbers, separated by <space>: ");
    scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);

    calculate(a1, a2, a3, a4, a5, &sum, &avg, &std);

    printf("Sum = %d \nAverage = %d \nStandard Deviation = %f", sum, avg, std);
}

void calculate(int i1, int i2, int i3, int i4, int i5, int *sum, int *average, float *standard_deviation) {
    *sum = i1 + i2 + i3 + i4 + i5;
    *average = *sum / 5;
    *standard_deviation = sqrt(
        pow(i1 - *average, 2) +
        pow(i2 - *average, 2) +
        pow(i3 - *average, 2) +
        pow(i4 - *average, 2) +
        pow(i5 - *average, 2)
    ) / 5;
}
