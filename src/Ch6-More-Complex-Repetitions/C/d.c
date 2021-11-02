#include <stdio.h>

// Write a program to print the multiplication table of the number
// entered by the user. The table should get displayed in the
// following form: 
// 29 * 1 = 29
// 29 * 2 = 58 

int main(void) {
    int number;

    printf("PLease Enter a number: ");
    scanf("%d", &number);

    for ( int i = 1; i < 11; i++ )
        printf("%d × %d = %d\n", number, i, number * i);
}
