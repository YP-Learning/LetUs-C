#include <stdio.h>

// Write a function that recieves marks obtained by a student
// in 3 subjects and returns the average and percentage of
// these marks. Call this function from main() and print the
// results in main().

void calculate(int m1, int m2, int m3, int max, float *avg, float *percentage);

int main(void) {
    int m1, m2, m3, max;
    float avg, per;

    printf("Please enter marks (out of 100) in 3 subjects separated by <space>: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    calculate(m1, m2, m3, 100, &avg, &per);

    printf("Average: %.3f \nPercentage: %.2f %%", avg, per);
}

void calculate(int m1, int m2, int m3, int max, float *avg, float *percentage) {
    int sum = m1 + m2 + m3;
    *avg = sum / 3.0;
    *percentage = sum / (float)(max * 3) * 100;
}
