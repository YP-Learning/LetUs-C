# Chapter 13 - The C preprocessor

## Exercises

### [A] Answer the following:

a. A preprocessor directive is:
1. A message from compiler to the programmer
2. A message from compiler to the linker
3. A message from programmer to the preprocessor
4. A message from programmer to the microprocessor

**Ans**: _A message from programmer to preprocessor_

b. Which of the following are correctly formed `#define` statements:
`#define Inch Per Feet 12`, `#define SQR (X) (X*X)`, `#define SQR(X) X * X`, `#define SQR(X) (X*X)`

**Ans**: `#define SQR(X) X * X`, `#define SQR(X) (X*X)`

c. State `True` or `False`: 
1. A macro must always be written in capital letters. - `False`
2. A macro should always be accommodated in a single line. - `False`
3. After preprocessing when the program is sent for compilation the macros are remoed from the expanded source code. - `True`
4. Macros with arguments are not allowed. - `False`
5. Nested macros are allowed. - `False`
6. In a macro call the control is passed to the macro. - `False`

d. How many `#include` directives can be there in a given program file?

**Ans**: _There can be as many `#include` statements as we need_

e. what is the difference between the following two `#include` directives: `#include "conio.h"` and `#include <conio.h>`.

**Ans**: when using quotes (`""`) it searches the current folder and path for the header file, when using angular brackets (`<>`) it searches the set path.

f. A header file is:
1. A file that contains standard library functions
2. A file that contains definations and macros
3. A file that contains user-defined functions
4. A file that is present in current working directory

**Ans**: _All of them are true_

g. Which of the following is not a preprocessor directive:
1. `#if`
2. `#elseif`
3. `#undef`
4. `#pragma`

**Ans**: `#elseif` 

h. All macro substitutes in a program are done:
1. Before compilation of the program
2. After compilation
3. During execution
4. 9 None of the above

**Ans**: _Before compilation of the program_

i. In a program the statement `#include "filename"` is replaced by the contents of the file "filename":
1. Before compilation
2. After compilation
3. During execution 
4. None of the above

**Ans**: _Before Compilation_

### [B] What will be the output of the following program:
a. 
```c
#include <stdio.h>
int main() {
    int i = 2;
    #ifdef DEF
        i *= i;
    #else
        printf("%d\n", i);
    #endif
    return 0;
}
```
Ans:
```
2
```

b. 
```c
#include <stdio.h>
#define PRODUCT(x) (x * x)

int main() {
    int i = 3, j, k, l;
    j = PRODUCT(i + 1);
    k = PRODUCT(i++);
    l = PRODUCT(++i);
    printf("%d %d %d %d", i, j, k, l);
    return 0;
}
```
Ans:
```
7 7 12 49 
```

c.
```c
#include <stdio.h>
#define PI 3.14
#define AREA(x, y, z) (PI * x * y * z);

int main() {
    float a = AREA(1, 5, 8);
    float b = AREA(AREA(1, 5, 8), 4, 5);
    printf("a = %f\n", a);
    printf("b = %f\n", b);
    return 0;
}
```
Ans: _assuming that the `;` in the defination of AREA macro is removed, else `error`_
```
a = 125.599998
b = 7887.680176
```
