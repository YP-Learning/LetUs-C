## [C] Attempt the Following: 

a. How will you initialize a three-dimensional array `thread[3][2][3]`? How will you refer the first and the last element in this array? [Solution](./a.c)

b. Write a program to pick up the largest number from any 5 rows by 5 column matrix. [Solution](./b.c)

c. Write a program to obtain transpose of a 4x4 matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column. [Solution](./c.c)

d. Match the following with reference to the program segment given below:
```c
int i, j = 25;
int *pi, *pj = &j;
/* more lines of program */
*pi = i + 5;
j = *pj + 5;
pj = pj;
*pi = i + j;
```
Each integer quantity occupies 2 bytes of memory. The value assigned to i begin at (hexadecimal) address F9E. Match the value represented by left hand side quantities with the right.

1. &i
2. &j
3. pj
4. *pj
5. i
6. pi
7. *pi
8. (pi + 2)
9. (*pi + 2) 
10. *(pi + 2)

a. 30 <br>
b. F9E <br>
c. 35 <br>
d. FA2 <br>
e. F9C <br>
f. 67 <br>
g. unspecified <br>
h. 65 <br>
i. F9E <br>
j. F9E <br>
k. FA0 <br>
l. F9D <br>

Solution :- 
| A | B |
| :--- | :--- |
| 1. &i | e. F9C |
| 2. &j | i. F9E |
| 3. pj | j. F9E | 
| 4. *pj | c. 35 |
| 5. i | g. unspecified |
| 6. pi | e. F9C |
| 7. *pi | g. unspecified |
| 8. (pi + 2) | b. F9E |
| 9. (*pi + 2) | g. unspecified |
| 10. *(pi + 2) | c. 35 |

e Mathc the following with reference to the folllowing program segment:
```c
int x[3][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15}
}, *n = &x;
```
| | |
| :--- | :--- |
| 1. `*(*(x+2)+1)` | a. 9 |
| 2. `*(*x + 2) + 5` | b. 13 |
| 3. `*(*(x + 1))` | c. 4 |
| 4. `*(*(x) + 2) + 1` | d. 3 |
| 5. `*(*(x + 1) + 3)` | e. 2 |
| 6. `*n` | f. 12 |
| 7. `*(n + 2)` | g. 14 |
| 8. `(*(n + 3) + 1)` | h. 7 |
| 9. `*(n + 5) + 1` | i. 1 |
| 10. `++*n` | j. 8 |
| | k. 5|
| | l. 10 | 
| | m. 6 |

Solution: 
| A | B |
| :--- | :--- |
| 1. `*(*(x+2)+1)` | f. 12 |
| 2. `*(*x + 2) + 5` | j. 8 |
| 3. `*(*(x + 1))` | m. 6 |
| 4. `*(*(x) + 2) + 1` | c. 4 |
| 5. `*(*(x + 1) + 3)` | a. 9 |
| 6. `*n` | i. 1 |
| 7. `*(n + 2)` | d. 3 |
| 8. `(*(n + 3) + 1)` | k. 5 |
| 9. `*(n + 5) + 1` | h. 7 |
| 10. `++*n` | e. 2 |

e. Match the following with reference to following program segment:
```c
unsigned int arr[3][3] = { 
    2, 4, 6,
    9, 1, 10,
    16, 64, 5
}; 
```

| | | 
| :--- | :--- |
| 1. `**arr` | a. 64 | 
| 2. `**arr < *(*arr + 2)` | b. 18 |
| 3. `*(arr + 2)/(*(*arr + 1) > **arr)` | c. 6 |
| 4. `*(arr[1] + 1) \| arr[1][2` | d. 3 |
| 5. `*(arr[0]) \| *(arr[2])` | e. 0 |
| 6. `arr[1][1] < arr[0][1]` | f. 16 |
| 7. `arr[2][1] & arr[2][0]` | g. 1 |
| 8. `arr[2][2] \| arr[0][1]` | h. 11 |
| 9. `arr[0][1] ^ arr[0][2]` | i. 20 |
| 10. `++**arr + ==arr[1][1]` | j. 2 |
| | k. 5 |
| | l. 4 | 

solution: 
| A | B | 
| :--- | :--- |
| 1. `**arr` | j. 2 | 
| 2. `**arr < *(*arr + 2)` | g. 1 |
| 3. `**(arr + 2)/(*(*arr + 1) > **arr)` (extra * added to aavoid error) | f. 16 | 
| 4. `*(arr[1] + 1) \| arr[1][2]` | h. 11 |
| 5. `*(arr[0]) \| *(arr[2])` | b. 18 |
| 6. `arr[1][1] < arr[0][1]` | g. 1 |
| 7. `arr[2][1] & arr[2][0]` | e. 0 |
| 8. `arr[2][2] \| arr[0][1]` | k. 5 |
| 9. `arr[0][1] ^ arr[0][2]` | j. 2 |
| 10. `++**arr + --arr[1][1]` | d. 3 |

g. Write a program to find if a square matrix is symetric. [Solution](./g.c)

h. Write a program to add two 6x6 matrices. [Solution](./h.c)

i. Write a program to multiply any two 3x3 matrices. [Solution](./i.c)

j. Given an array `p[5]`, write a function to shift it circularly left by 2 positions. Thus, if `p[0] = 15`, `p[1] = 30`, `p[2] = 28`, `p[3] = 19` and `p[4] = 61` then after the shift `p[0] = 28`, `p[1] = 19`, `p[2] = 61`, `p[3] = 15`, and `p[4] = 30`, Call this function for a `(4x5)` matrix and get its rows left shifted. [Solution](./j.c) 

k. A `6 x 6` matrix is entered through the keyboard. Write a program to obtain the Determinant value of this matrix. [Solution](./k.c)

l. For the following set of sample data, compute the standard deviation and the mean. [Solution](./l.c)
```c
-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
```

m. The area of a triangle can be computed by the sine law when 2 sides of the triangle and the angle between them are known.
`Area = (1/2) a b sin(angle)`
Given the following 6 triangular pices of land, write a program to find their area and determine which is the largest. [Solution](./m.c)

| Plot No. |   a   |    b   | angle |
|:--------:|:-----:|:------:|:-----:|
|    1.    | 137.4 |  80.9  |  0.78 |
|    2.    | 155.2 |  92.62 |  0.89 |
|    3.    | 149.3 |  97.93 |  1.35 |
|    4.    | 160.0 | 100.25 |  9.00 |
|    5.    | 155.6 |  68.95 |  1.25 |
|    6.    | 149.7 |  120.0 |  1.75 |

n. For the following set of n data points `(x, y)`, write a program to compute the correlation coefficient r given by

$$ r = \frac{ \sum {xy} - \sum {x} \sum {y} }{ \sqrt{[n \sum {x^2} - (\sum {x})^2][n \sum {y^2} - (\sum{y})^2 ] } } $$

[Solution](./n.c)

|   x   |    y   |
|:-----:|:------:|
| 34.22 | 102.43 |
| 39.87 | 100.93 |
| 41.85 |  97.43 |
| 43.23 |  97.81 |
| 40.06 |  98.32 |
| 53.29 |  98.32 |
| 53.29 | 100.07 |
| 54.14 |  97.08 |
| 49.12 |  91.59 |
| 40.71 |  94.85 |
| 55.15 |  94.65 |

o. For the following set of pointes given by `(x, y)` fit a straight line given by `y = a + bx` where, $ a = \bar y - b \bar x $ and $ b = \frac{ n \sum {yx} - \sum {y} \sum {x} }{ n \sum {x^2} - (\sum {x})^2 } $. [Solution](./o.c)

|   x  |   y  |
|:----:|:----:|
|  3.0 |  1.5 |
|  4.5 |  2.0 |
|  5.5 |  3.5 |
|  6.5 |  5.0 |
|  7.5 |  6.0 |
|  8.5 |  7.5 |
|  8.0 |  9.0 |
|  9.0 | 10.5 |
|  9.5 | 12.0 |
| 10.0 | 14.0 |

p. The `X` and `Y` coordinates of 10 different points are entered through the keyboard. Write a program to find the distance of last point from the first point (sum of distances between consucutive points). [Solution](./p.c)
