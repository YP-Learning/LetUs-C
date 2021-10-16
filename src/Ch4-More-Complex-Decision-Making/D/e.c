#include <stdio.h>

// In digital world Colors are specified in Red-Green-Blue (RGB) format,
// with values of R, G, B varing on an integer scale from 0 to 255.
// In print publishing the colors are mentioned in
// Cyan-Megenta-Yellow-Black (CMYK) format, the values of C, M, Y, and K
// varying on a real scale from 0.0 to 1.0. Write a program that 
// converts RGB color to CMYK color as per the following formulae:

// White = Max(Red/255, Green/255, Blue/255)
// Cyan = (white - red/255)/ white
// Magenta = (white - green/255)/ white
// Yellow = (white - Blue/255)/ white
// Black = 1 - White

int main(void) {
    float red, green, blue, white, cyan, magenta, yellow, black;

    printf("Please enter the RGB color values separated by <space>: ");
    scanf("%f %f %f", &red, &green, &blue);

    red = red / 255.0;
    green = green / 255.0;
    blue = blue / 255.0;

    if (red == 0 && green == 0 && blue == 0) {
        black = 1;
        cyan = 0;
        magenta = 0;
        yellow = 0;
        printf("C: %f M: %f Y: %f K: %f", cyan, magenta, yellow, black);
        return 0;
    }

    if (red >= green && red >= blue)
        white = red;
    else if (blue >= green && blue >= red)
        white = blue;
    else if (green >= blue && green >= red)
        white = green;

    cyan = (white - red) / white;
    magenta = (white - green) / white;
    yellow = (white - blue) / white;

    black = 1 - white;

    printf("C: %f M: %f Y: %f K: %f", cyan, magenta, yellow, black);
}
