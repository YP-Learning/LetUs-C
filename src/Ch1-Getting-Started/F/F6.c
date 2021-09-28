#include <stdio.h>

/* 
Paper of size A0 has dimensions 1189 mm x 841 mm. 
Each subsequent size A(n) is defined as A(n-1) cut 
in half paralles to it's shorter sizes. Thus paper 
of size A1 would have dimensions 841 mm x 594 mm. 
Write a program to calculate the program to calculate 
and print paper sizes A0, A1, A2, ... A8.
*/ 

int main(void) {
    // h for height, w for width
    int A0_h = 1189, A0_w = 841;
    printf("A0: %d MM x %d MM\n", A0_h, A0_w);
    
    // height is the same as width of the previous size.
    // width is height of the previous size divided by 2.
    int A1_h = A0_w, A1_w = A0_h / 2;
    printf("A1: %d MM x %d MM\n", A1_h, A1_w);

    int A2_h = A1_w, A2_w = A1_h / 2;
    printf("A2: %d MM x %d MM\n", A2_h, A2_w);

    int A3_h = A2_w, A3_w = A2_h / 2;
    printf("A3: %d MM x %d MM\n", A3_h, A3_w);
    
    int A4_h = A3_w, A4_w = A3_h / 2;
    printf("A4: %d MM x %d MM\n", A4_h, A4_w);
    
    int A5_h = A4_w, A5_w = A4_h / 2;
    printf("A5: %d MM x %d MM\n", A5_h, A5_w);
    
    int A6_h = A5_w, A6_w = A5_h / 2;
    printf("A6: %d MM x %d MM\n", A6_h, A6_w);
    
    int A7_h = A6_w, A7_w = A6_h / 2;
    printf("A7: %d MM x %d MM\n", A7_h, A7_w);
    
    int A8_h = A7_w, A8_w = A7_h / 2;
    printf("A8: %d MM x %d MM\n", A8_h, A8_w);
}
