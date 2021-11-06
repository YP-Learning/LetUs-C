#include <stdio.h>

// Write a program to find the grace makrs for a student using switch.
// The user should enter the clas obtained by the student and the number
// of subjects he has failed in. Use the following logic:
// - if the student gets first class and the number of subject he failed
// is greater than 3, then he does not get any grace. Otherwise the grace
// is of 5 marks per subject.
// - if the students gets second class and the number of subjects he
// failed in is greater than 2, then he does not get any grace.
// Otherwise the grace is of 4 marks per subject.
// - if the student ges 3rd class and the number of subjects he failed in
// is greater than 1, then he does not get any grace. Otherwise the grace
// is of 5 marks.

int main(void) {
    int class, subjects_failed;

    printf("Please enter the class (1 - First, 2 - Second, 3 - Third): ");
    scanf("%d", &class);

    printf("PLease enter the number of subjects you failed in: ");
    scanf("%d", &subjects_failed);

    switch (class) {
        case 1: {
            if ( subjects_failed > 3 )
                printf("No grace for you.\n");
            else
                printf("You have grace of 5 marks per subject.\n"); 
        
            break;
        }
        case 2: {
            if ( subjects_failed > 2 )
                printf("No grace for you.\n");
            else
                printf("You have grace of 3 marks per subject.\n");

            break;
        }
        case 3: {
            if ( subjects_failed > 1 )
                printf("No grace for you.\n");
            else
                printf("You have grace of 5 marks.\n");

            break;
        }
        default:
            printf("Invalid class.\n");
    }
}
