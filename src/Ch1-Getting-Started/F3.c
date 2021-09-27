#include <stdio.h>

// If the marks obtained by a student in five different 
// subjects are input through the keyboard, write a program 
// to find out the aggregate marks and percentage marks 
// obtained by the student. Assume that the maximum marks 
// that can be obtained by a student in each subject is 100. 

int main(void){
    float m1, m2, m3, m4, m5, aggregate;

    // get the input
    printf("Please enter marks in 5 subjects (out of 100 and separated by `,`): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    aggregate = m1 + m2 + m3 + m4 + m5;
    printf("Your aggregate is %.2f/500", aggregate);
}
