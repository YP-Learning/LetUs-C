#include <stdio.h>

// Population of a town today is 100,000. The population has increased
// steadily at the rate of 10% per year for the last 10 years.
// Write a program to determine the population at the end of each
// year in the last decade.

int main(void) {
    int population = 100000;

    printf("Current population: %d\n", population);

    for ( int i = 10; i > 0; i-- ) {
        population *= 0.9; // subtracting the 10% of increase
        printf("Population in %dth year of the decade was %d\n", i, population);
    }
}
