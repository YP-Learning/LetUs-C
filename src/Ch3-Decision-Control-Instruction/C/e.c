#include <stdio.h>

/* 
A five digit number is entered through the keyboard write aprogram 
to obtain the reversed number and to determine weather the original 
and reversed numbers are equal or not.
*/

int main(void) {
    int input_num, output_num, copy_input_num;  // number reverse code same as Ch2 Q H, (b)

    // get number as input
    printf("Please enter a 5 digit number: ");
    scanf("%d", &input_num);

    copy_input_num = input_num; // make a copy of input_num

    output_num = input_num / 10000 * 1; // get the face value of the 10 thousands place.
    input_num = input_num % 10000;

    output_num += input_num / 1000 * 10; // get the face value of the thousands place.
    input_num = input_num % 1000;

    output_num += input_num / 100 * 100; // get the face value of the 100th place.
    input_num = input_num % 100;
    
    output_num += input_num / 10 * 1000; // get the face value of the 10th place.
    input_num = input_num % 10;
    
    output_num += input_num / 1 * 10000; // get the face value of the unit place.
   
    printf("output: %d\n", output_num);

    if (copy_input_num == output_num) {
        printf("The input number if reversed is equal to the input number only");
    }
}
