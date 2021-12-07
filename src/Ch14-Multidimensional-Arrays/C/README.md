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
