#include <stdio.h>

/*
Given three points (x1, y1), (x2, y2), and (x3, y3) check 
if all three points fall one one straint line.
*/

int main(void) {
    int x1, y1, x2, y2, x3, y3;

    printf("Please enter the coordinates of first point separated by <space>: ");
    scanf("%i %i", &x1, &y1);
    
    printf("Please enter the coordinates of second point separated by <space>: ");
    scanf("%i %i", &x2, &y2);
    
    printf("Please enter the coordinates of third point separated by <space>: ");
    scanf("%i %i", &x3, &y3);

    // https://math.stackexchange.com/questions/701862/how-to-find-if-the-points-fall-in-a-straight-line-or-not
    if ( ( ( y2 - y1 ) / ( x2 - x1 ) ) == ( ( y3 - y1 ) / ( x3 - x1 ) ) )
        printf("The points are in the straight line.\n");
    else
        printf("The points are not in a straight line.\n");
}
