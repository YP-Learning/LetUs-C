#include <stdio.h>

// Write a general-purpose function to convert any given year into
// its Roman Equvalent. Use those Roman Equivalents for decimal
// numbers: 1 - I, 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M,
// Example:

// Roman equivalent of 1988 is mdcccclxxxviii.
// Roman equivalent of 1525 is mdxxv.

void to_roman(int num);
char get_roman(int num);
int print_for(int num, int rom);
void printn(char c, int n);

int main(void) {
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);
    printf("The roman equivalent is: ");
    to_roman(year);

    return 0; 
}

void to_roman(int num) {
    int rem;
    
    rem = print_for(num, 1000);
    rem = print_for(rem, 500);
    rem = print_for(rem, 100);
    rem = print_for(rem, 50);
    rem = print_for(rem, 10);
    rem = print_for(rem, 5);
    rem = print_for(rem, 1);
}

char get_roman(int num) {
    switch (num) {
        case 1000: return 'M';
        case 500: return 'D';
        case 100: return 'C';
        case 50: return 'L';
        case 10: return 'X';
        case 5: return 'V';
        case 1: return 'I';
        default: return -1;
    }
}

int print_for(int num, int rom) {
    // print the roman literal for the number num... 
    // returns the remaining number after printing the roman literal of number (`rom`)
    
    int n = num / rom;
    char roman = get_roman(rom);

    if ( roman != -1 ) {
        printn(roman, n);
    } else 
        return -1; // error
    
    return num % rom;
}

void printn(char c, int n) {
    for ( int i = 0; i < n; i++ ) {
        printf("%c", c);
    }
}
