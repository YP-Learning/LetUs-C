#include <stdio.h>

/*
Consider a currency system in which there are notes 
of serven denominators, namely, Rs. 1, Rs. 2, Rs. 5, 
Rs. 10, Rs.50, Rs. 100. if a sum of Rs. N is entered 
what will combine to give Rs N.
*/

int main(void) {
    int one, two, five, ten, fifty, hundred, total_sum;

    printf("Please enter the sum of money: ₹");
    scanf("%d", &total_sum);

    hundred = total_sum / 100;
    total_sum -= hundred * 100;

    fifty = total_sum / 50;
    total_sum -= fifty * 50;

    ten = total_sum / 10;
    total_sum -= ten * 10;

    five = total_sum / 5;
    total_sum -= five * 5;

    two = total_sum / 2;
    total_sum -= two * 2;

    one = total_sum;

    printf("Notes:\n one: %i\n two: %i\n five: %i\n ten: %i\n fifty: %i\n hundred: %i\n", one, two, five, ten, fifty, hundred);
}
