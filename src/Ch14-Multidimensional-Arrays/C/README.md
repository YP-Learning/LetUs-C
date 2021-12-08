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
