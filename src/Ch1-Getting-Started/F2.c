#include <stdio.h>

// The distance betwen two cities (in km.) 
// is input through the keyboard. write a 
// program to convert and print this distance 
// in meters, feet, inches and centimeters.

int main(void){
    float distance;

    printf("Please enter the distance betwen two cities (in KM): ");
    scanf("%f", &distance);

    // 1 KM = 1000 M
    printf("Distance between those cities in meters: %.2f\n", distance * 1000);
    // 1 KM = ~3280.8399 ft
    printf("Distance between those cities in feet: %.2f\n", distance * 3280.8399);
    // 1 KM = ~39370.0787 in
    printf("Distance between those cities in inch: %.2f\n", distance * 39370.0787);
    // 1 KM = 100000 CM
    printf("Distance between those cities in Centimeters: %.2f\n", distance * 100000);
}
