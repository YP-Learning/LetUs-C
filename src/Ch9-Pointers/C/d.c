#include <stdio.h>

// Given three variables x, y, z write a function to circularly shift
// their values to right. In other words if x = 5, y = 8, z = 10,
// after circular shift y = 5, z = 8, x = 10, Call the function
// with variables a, b, c to circularly shift values

void circular_shift(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main(void) {
    int a = 5, b = 8, c = 10;

    printf("Before shift: a = %d, b = %d, c = %d\n", a, b, c);
    circular_shift(&a, &b, &c);
    printf("After shift: a = %d, b = %d, c = %d\nj", a, b, c);
}
