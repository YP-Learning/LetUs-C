#include <stdio.h>
#include <math.h>

// Write a C function to evaulate the series
// \sin(x) = x-(x^3/3!) + (x^5 / 5!) - (x^7 / 7!) + \dots
// upto 10 terms

int factorial(int n);
int sine(int x);

int main(void) {
    int x;

    printf("Please enter a number: ");
    scanf("%d", &x);

    printf("sin(%d) = %d\n", x, sine(x));
}

int factorial(int n) {
    int fact = 1;

    while ( n > 0 ) {
        fact *= n;
        n--;
    }

    return fact;
}

int sine(int x) {
    int sin = 0;
    int operation = 1;

    for ( int i = 0, n = 1; i < 10; n += 2, i++, operation *= -1 ) 
        sin += operation * ( pow(x, n) / factorial(n) );
    
    return sin;
}
