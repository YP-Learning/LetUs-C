#include <stdio.h>

// The Body Mass Index (BMI) is defined as ratio of the weight of a
// person (in kilograms) to the square of the height (in meters).
// Write a program that recieves weight and height, calculates the BMI,
// and reports the BMI category

int main(void) {
    float weight, height, bmi;

    printf("Please enter your weight (in kg): ");
    scanf("%f", &weight);
    printf("Please enter your height (in meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI category: ");
    if (bmi < 15)
        printf("Starvation");
    else if ( bmi > 15 && bmi <= 17.5 )
        printf("Anorexic");
    else if ( bmi > 17.5 && bmi <= 18.5 )
        printf("Underweight");
    else if ( bmi > 18.5 && bmi <= 24.9 )
        printf("Ideal");
    else if ( bmi > 24.9 && bmi <= 25.9 )
        printf("Overweight");
    else if ( bmi > 25.9 && bmi <= 39.9 )
        printf("Obese");
    else if ( bmi > 39.9 )
        printf("Morbidly Obese");
    else
        printf("Invalid");
}
