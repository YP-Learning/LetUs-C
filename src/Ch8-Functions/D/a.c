#include <stdio.h>

// Write a function to calculate the factorial of any sort of integer
// entered through the keyboard.

int factorial(int);
int get_int(char*);

int main(void) {
    int num = get_int("PLease enter a number: ");
    printf("The factorial of %d is %d", num, factorial(num));
}

int get_int(char* string) {
    int r;
    printf("%s", string);
    scanf("%d", &r);
    return r;
}

int factorial(int limit) {
    int fact = 1;

    for (;limit > 0; limit--)
        fact *= limit;

    return fact;
}
