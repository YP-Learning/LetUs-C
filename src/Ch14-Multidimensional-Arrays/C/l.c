#include <stdio.h>
#include <math.h>

#define sqrt(x) pow(x, 0.5)

int getmean(int* data, size_t size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
        sum += data[i];

    return sum / size;
}

int getstd(int* data, size_t size)
{
    int mean = getmean(data, size);
    int _std = 0;

    for (size_t i = 0; i < size; i++)
        _std += pow(data[i] - mean, 2);

    return sqrt(_std) / size;
}

int main(int argc, char **argv)
{
    int data[15] = { -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2 };
    int size = 15;
    int mean = getmean(data, size);
    int std = getstd(data, size);

    printf("Mean: %d \nStandard Deviation: %d\n", mean, std);
}
