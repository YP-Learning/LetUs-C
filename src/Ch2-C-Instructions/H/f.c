#include <stdio.h>
#include <math.h>

/*
Whind chill factor is the felt air temperature on exposed 
skin due to wind. The wind chill temperature is always 
lower than the air temperature, and is calculated as 
per the following formula: 

`wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v⁰.¹⁶` (v^{0.16})

where t is the temperature and v is the wind velocity. 
write a program to recive values of t and v and calculate 
wind chill factor (wcf).
*/

int main(void) {
    float t, v, wcf;

    // get the input
    printf("Please enter the temperature: ");
    scanf("%f", &t);
    printf("Please enter the wind velocity: ");
    scanf("%f", &v);

    wcf = 35.74 + 0.6215 * t + ( 0.4275 * t - 35.75 ) * pow(v, 0.16);

    // show the output
    printf("The Wind Chill Factor (WCF) is %f. Thank You :)", wcf);
}
