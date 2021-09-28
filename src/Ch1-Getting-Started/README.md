# Chapter 1 - Getting Started

## Exercise

### [A] Which of the following are invalid C constants and why?
1. `'3.15'` -> Invalid constant as `''` are for `char` but the given constant should be a string (`""`) or float.
2. `35,550` -> Invalid constant as `,` is invalid for Int.
3. `3.25e2` -> Valid.
4. `2e-3` -> Valid.
5. `'eLearning'` -> Invalid constant as it should be wrapped between `"` instead of `'`.
6. `"show"` -> Valid.
7. `'Quest'` -> Invalid, same reason as (5.).
8. `2^3` ( $2^3$ ) -> Invalid, the input is non ascii value.
9. `2 6 5 2` -> Invalid, separated using spaces.

### [B] Which of the following are invalid variable names and why?
1. `B'day` -> Invalid name, as `'` should not be in the variable name.
2. `int` -> Invalid as `int` is also a keyword.
3. `$hello` -> Invalid, as `$` is not allowed in the variable name.
4. `#HASH` -> Invalid, as `#` is not allowed in the variable name.
5. `dot.` -> Invalid, as `.` is not allowed in the variable name.
6. `number` -> Valid.
7. `totalArea` -> Valid.
8. `_main()` -> Invalid, as `()` is not allowed in the variable name.
9. `temp_in_Deg` -> Valid.
10. `total%` -> Invalid, as `%` is not allowed in the variable name.
11. `1st` -> Invalid, as variable names should not start with number.
12. `stack-queue` -> Invalid, as `-` is not allowed in the variable name.
13. `variable name` -> Invalid, as it's saparated with ` ` which is not valid.
14. `%name%` -> Invalid,, as `%` is not allowed in the variable name.
15. `salary` -> Valid.

### [C] State weather the following statements are True or False:
1. C language was developed by Dennis Ritche. -> **True**
2. Operating System like Windows, UNIX, Linux and Android are written in C. -> **True**
3. C language programs can easily interact with hardware of PC/Laptop. -> **True**
4. A real constant in C can be expressed in both Fractional and Exponential forms. -> **True**
5. A character variable can at a time store only one character. -> **True**
6. The maximum value that an integer constant can have varies from one compiler to another. -> **True**
7. Usually all C statements are written in small case letters. -> **True**
8. Spaces may be inserted between two words in a C statement. -> **True**
9. Spaces cannot be present within a variable name. -> **True**
10. C programs are converted into machine language with the help of a program called Editor. -> **False**
11. Most development environments provide an Editor to type a C program and a Compiler to convert it into machine language. -> **True**
12. int, char, float, real, integer, character, char, main, printf and scank are all keyword. -> **False**

### [D] Match the following:

|  | A | B |
| :- | :-- | :-- |
| (a) | \n | Escape Sequence |
| (b) | 3.145 | Real Constant |
| (c) | -6513 | Integer Constant |
| (d) | 'D' | Character Constant |
| (e) | 4.25e-3 | Exponential form |
| (f) | main() | function |
| (g) | %f, %d, %c | Format Specifier |
| (h) | ; | Statement Terminator |
| (i) | Constant | Literal |
| (j) | Variable | Identifier |
| (k) | & | Address of Operator |
| (l) | printf() | Output Function |
| (m) | scanf() | Input Function |

### [E] Point out the errors, if any, in the following programs:
1. 
```c
int main()
{
    int a, float b, int c;
    a = 25; b = 3.24; c = a + b * b - 35;
}
```
Ans:
```c
int main()
{
    int a, c; 
    float b; // int a, float b is not valid
    a = 25; 
    b = 3.24; 
    c = a + b * b - 35;
}
```

2. 
```c
#include <stdio.h>
int main()
{
    int a = 35; float b = 3.24;
    printf("%d %f %d", a, b + 1.5, 235);
}
```
No Errors

3. 
```c
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", a, b, c);
}
```
No Errors
4. 
```c
#include <stdio.h>
int main()
{
    int m1, m2, m3
    printf("Enter values of marks in 3 subjects")
    scanf("%D %D %D", &m1, &m2, &m3)
    printf("You Entered %d %d %d", m1, m2, m3)
}
```
Ans:
```c
#include <stdio.h>
int main()
{
    // missing ;
    int m1, m2, m3;
    printf("Enter values of marks in 3 subjects");
    scanf("%D %D %D", &m1, &m2, &m3);
    printf("You Entered %d %d %d", m1, m2, m3);
}
```

### [F] Attempt the following:

[Solution](./F/)
