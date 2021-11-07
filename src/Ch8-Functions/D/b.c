#include <stdio.h>

// Write a function power(a, b) to calculate the value of a taised to b.

int power(int a, int b);
int get_int(char*);

int main(void) {
    int a, b;
    a = get_int("PLease enter the value for number: ");
    b = get_int("PLease enter the power to which a is to be raised: ");

    printf("%d raised to %d is %d\n", a, b, power(a, b));
}

int power(int a, int b) {
    int res = 1;
    
    for (int i = 0; i < b; i++)
        res *= a;

    return res;
}

int get_int(char* string) {
    int r;
    printf("%s", string);
    scanf("%d", &r);
    return r;
}
