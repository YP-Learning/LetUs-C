#include <stdio.h>
#include <math.h>

/* 
Write a program to recieve values of latitude (L1, L2) and longitude (G1, G2), in degrees, of the two places on earth and output the distance (D) between them in nautical miles. The formula for distance in nautical miles is: 
D = 3963 cos⁻¹(sin L1 sin L2 + cos L1 cos L2 * cos(G2 - G1))
*/

int main(void) {
    double L1, L2, G1, G2, D;

    printf("Please enter the Latitude and longitude of first place: (separated using <space>) ");
    scanf("%lf %lf", &L1, &G1);
    printf("Please enter the Latitude and longitude of second place: (separated using <space>) ");
    scanf("%lf %lf", &L1, &G1);

    D = 3963 * acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2 - G1));
    printf("The distance is: %lf nautical miles.", D);
}
