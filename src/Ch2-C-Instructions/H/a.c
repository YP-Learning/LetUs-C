#include<stdio.h>

/*
If a five-digit number is input through the 
keyboard, write a program to calculate the sum 
of it's digits, (Hint: Use modulus operator `%`). 
*/

int main(void) {
    int input_num, sum;

    // get input number
    printf("Please enter a 5 digit number: ");
    scanf("%d", &input_num);

    // calcuthe sum
    sum = input_num / 10000; // get the face value of the 10 thousands place
    input_num = input_num % 10000;

    sum += input_num / 1000; // get the face value of the thousands place
    input_num = input_num % 1000;

    sum += input_num / 100; // get the face value of the hundereth place
    input_num = input_num % 100;

    sum += input_num / 10; // get the face value of the tenth place
    input_num = input_num % 10;

    sum += input_num / 1; // get the face value of the ones place
    
    printf("%d", sum); 
}
