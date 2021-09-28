#include <stdio.h>

/* 
Temperature of a city in Fahrenheit degrees is 
input through the keyboard. Write a program to 
convert this temperature into Centigrade degrees. 
*/

int main(void) {
    int temperature_fahrenheit;

    // get input
    printf("Temperature in Fahrenheit: ");
    scanf("%d", &temperature_fahrenheit);

    // (°C) = (Fahrenheit - 32) * 5/9
    float celsius = (temperature_fahrenheit - 32) / 1.8;
    printf("Temperature in Celsius: %.2f", celsius);
}
