## [C] Attempt the following:

a. Write a function that recieves 5 integers and returns the sum, average and standard deviation of these numbers. Call the function from `main()` and print the results in `main()`. [Solution](./a.c)

b. Write a function that recieves marks obtained by a student in 3 subjects and returns the average and percentage of these marks. Call this function from `main()` and print the results in `main()`. [Solution](./b.c)

c. Write a C function to evaluate the series

![\sin(x) = x-(x^3/3!) + (x^5 / 5!) - (x^7 / 7!) + \dots](../../../assets/ch9-c-c.png)

upto 10 terms [Solution](./c.c)

d. Given three variables `x`, `y`, `z` write a function to circularly shift their values to right. In other words if `x = 5`, `y = 8`, `z = 10`, after circular shift `y = 5`, `z = 8`, `x = 10`, Call the function with variables a, b, c to circularly shift values. [Solution](./d.c)

e. If the lengths of the sides of a triangle are denoted by `a`, `b`, and `c`, then area of traingle is given by `area = sqrt(S(S - a)(s - b)(s - c))` where `S = (a + b + c) / 2`. Write a function to calculate the area of the traingle. [Solution](./e.c)

f. Write a function to compute the distance between two points and use it to develop another function function that will compute the areas of the triangle whose vertices are `A(x1, y1)`, `B(x2, y2)`, and `C(x3, y3)`. Use these function to develop a function which returns a value 1 if the point `(x, y)` lies inside the triangle ABC, otherwise returns a value 0. [Solution](./f.c)

g. Write a function to compute the greatest common divisor given by Euclid's algorithm, exemplified for J = 1980, K = 1616 as follows:
```
1980 / 1617 = 1       1980 - 1 * 1616 = 363
1617 / 363 = 4        1617 - 4 * 363 = 165
363 / 165 = 2         363 - 2 * 165 = 33
5 / 33 = 5            165 - 5 * 33 = 0
```
Thus, The GCD is 33. [Solution](./g.c)
