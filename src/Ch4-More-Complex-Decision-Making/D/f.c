#include <stdio.h>

// A certain grade of steel is graded according to the following conditions:

// Hardness must be greater than 50
// Carbon content must be less than 0.7
// Tensile strength must be greater than 5600

// The grades are as follows:
// Grade is 10 if all three contitions are met
// Grade is 9 if conditions 1. and 2. are met
// Grade is 8 if the conditions 2 and 3 are met
// Grade is 7 if the conditions 1 and 3 are met
// Grade is 6 if only one condition is met
// Grade is 5 if none of the conditions are met
// Write a program, which will require the user to give values of
// hardness, carbon content and tensile strength of the steel
// under consideration and output the grade of the steel. 

int main(void) {
    float hardness, carbon_content, tensile_strength;

    printf("Please enter the hardness, carbon content and tensile strength \nof steel separated by <space>: ");
    scanf("%f %f %f", &hardness, &carbon_content, &tensile_strength);

    int con1, con2, con3;

    con1 = hardness > 50;
    con2 = carbon_content < 0.7;
    con3 = tensile_strength > 5600;

    // printf("%i %i %i", con1, con2, con3);

    if (con1 && con2 && con3)
        printf("Grade 10");
    else if (con1 && con2)
        printf("Grade 9");
    else if (con3 && con2)
        printf("Grade 8");
    else if (con1 && con3)
        printf("Grade 7");
    else if (con1 || con2 || con3)
        printf("Grade 6");
    else 
        printf("Grade 5");
}
