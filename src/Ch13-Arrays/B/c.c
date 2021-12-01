#include <stdio.h>
#include "helper.h"

// Twenty-five numbers are entered from the keyboard into an array.
// The number to be searched is entered through the keyboard by user.
// Write a program to find if the number to be searched is present
// in the array and if it is present, display the number of times
// it appears in the array.

int count_n(int arr[], int size, int search_num) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == search_num)
            count++;
    }

    return count;
}

int main(void) {
    int size = 25, arr[size], search_term;

    for (int i = 0; i < size; i++) {
        printf("Please enter a number: ");
        scanf("%d", &arr[i]);
    }

    printf("The entered array is: \n\t");
    display(arr, size);

    printf("Please enter a number to search: ");
    scanf("%d", &search_term);
    printf("The value %d appears %d times in the array.\n", search_term, count_n(arr, size, search_term));
}
