## Attempt the following:

a. A year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators `&&` and `||`. [solution](./a.c)

b. If a character is entered through the keyboard, write a program to determine whether the character is a capital letter, a small case letter a digit or a special symbol. [solution](./b.c)
The following table shows the range of ASCII values of various characters:
| Character | ASCII value | 
| :--- | :--- |
| A-Z | 65-90 |
| a-z | 97-122 |
| 0-9 | 48-57 |
| Special symbol | 0-47, 58-64, 91-96, 123-127 |

c. If the three sides of triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum o ftwo sides is greater than the largest of the three sides. [solution](./c.c)

d. If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isoceles, equilateral, or scalene or right angled triangle. [solution](./d.c)

e. In digital world Colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varing on an integer scale from `0` to `255`. In print publishing the colors are mentioned in Cyan-Megenta-Yellow-Black (CMYK) format, the values of C, M, Y, and K varying on a real scale from `0.0` to `1.0`. Write a program that converts RGB color to CMYK color as per the following formulae:

`White = Max(Red/255, Green/255, Blue/255)`

`Cyan = (white - red/255)/ white`

`Magenta = (white - green/255)/ white`

`Yellow = (white - Blue/255)/ white`

`Black = 1 - White`

Note that if the RGB values are all 0, then the CMY values are also 0 and the K value is 1. [solution](./e.c)

f. A certain grade of steel is graded according to the following conditions:
1. Hardness must be greater than 50
2. Carbon content must be less than 0.7
3. Tensile strength must be greater than 5600

The grades are as follows:
- Grade is 10 if all three contitions are met 
- Grade is 9 if conditions 1. and 2. are met 
- Grade is 8 if the conditions 2 and 3 are met 
- Grade is 7 if the conditions 1 and 3 are met 
- Grade is 6 if only one condition is met
- Grade is 5 if none of the conditions are met 

Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel. [solution](./f.c)

g. The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms) to the square of the height (in meters). Write a program that recieves weight and height, calculates the BMI, and reports the BMI category as per the following table:
| BMI Category | BMI |
| :--- | :--- |
| Starvation | < 15 |
| Anorexic | 15.1 to 17.5 |
| Underweight | 17.6 to 18.5 |
| Ideal | 18.6 to 24.9 |
| Overweight | 25 to 25.9 |
| Obese | 30 to 30.9 |
| Morbidly Obese | >= 40 |
[solution](./g.c)
