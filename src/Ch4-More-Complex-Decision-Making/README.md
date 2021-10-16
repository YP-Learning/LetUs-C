# Chapter 4 - More Complex Decision Making

## Exercise 

### [A] If `a = 10`, `b = 12`, `c = 0`, find the values of expression in the following table:

| Expression | Value |
| :--- | :--- | 
| `a != 6 && b > 5` | 1 |
| `a == 9 \|\| b < 3` | 0 |
| `!(a < 10)` | 1 |
| `!(a > 5 && c)` | 1 |
| `5 && c != 8 \|\| !c` | 1 |

### [B] What will be the output of the following programs:

a.
```c
#include <stdio.h>

int main() {
    int i = 4, z = 12;

    if ( i = 5 || z > 50 ) 
        printf("Dean of students affairs\n"); 
    else
        printf("Dosa\n"); 
    
    return 0;
}
```
Ans: 
```
Dean of students affairs
```

b. 
```c
#include <stdio.h>

int main() {
    int i = 4, j = -1, k = 0, w, x, y, z;

    w = i || j || k;
    x = i && j && k;
    y = i || j && k;
    z = i && j || k;

    printf("w = %d, x = %d, y = %d, z = %d", w, x, y, z);
}
```
Ans:
```
w = 1, x = 0, y = 1, z = 1;
```

c. 
```c
#include <stdio.h>

int main() {
    int x = 20, y = 40, z = 45;

    if ( x > y && x > z )
        printf("biggest = %d\n", x);
    else if ( y > x && y > z )
        printf("biggest = %d\n", y);
    else if ( z > x && z > y )
        printf("biggest = %d\n", z);
    
    return 0;
}
```
Ans:
```
biggest = 45
```

d.
```c
#include <stdio.h>

int main() {
    int i = -4, j, num;
    
    j = ( num < 0 ? 0 : num * num );

    printf("%d\n", num);

    return 0;
}
```
Ans:
```
0
```

e. 
```c
#include <stdio.h>

int main() {
    int k, num = 30;

    k = ( num > 5 ? (num <= 10 ? 100 : 200) : 500 );

    printf("%d\n", k);

    return 0;
}
```
Ans:
```
200
```

### [C] Point out the errors, if any, in the following programs:

a.
```c
#include <stdio.h>

int main() {
    char spy = 'a', password = 'z';
    
    if ( spy == 'a' or password == 'z' ) 
        printf("All the birds are safe in the nest.\n");

    return 0;
}
```
Ans:
```c
#include <stdio.h>

int main() {
    char spy = 'a', password = 'z';
    
    if ( spy == 'a' || password == 'z' )  // `or` is not a valid keyboard, use || instead
        printf("All the birds are safe in the nest.\n");

    return 0;
}
```

b. 
```c
#include <stdio.h>

int main() {
    int i = 10, j = 20;
    
    if ( i = 5 ) && if ( j = 10 )
        printf("Have a nice day\n");

    return 0; 
}
```
Ans:
```c
#include <stdio.h>

int main() {
    int i = 10, j = 20;
    
    if ( i == 5 && j == 10 )
        // use `if` only one time
        // use == operator instead of = operator
        // put the expression in one parentheses, else it errors out
        printf("Have a nice day\n");

    return 0; 
}
```

c. 
```c
#include <stdio.h>

int main() {
    int x = 10, y = 20;

    if ( x >= 2 and y <= 50 )
        printf("%d\n", x);

    return 0;
}
```
Ans:
```c
#include <stdio.h>

int main() {
    int x = 10, y = 20;

    if ( x >= 2 && y <= 50 )  // use && instead of and operator
        printf("%d\n", x);

    return 0;
}
```

d. 
```c
#include <stdio.h>

int main() {
    int x = 2;

    if ( x == 2 && x != 0 );
        printf("Hello\n");
    else
        printf("Bye\n");

    return 0;
}
```
Ans: `No error`
```c
#include <stdio.h>

int main() {
    int x = 2;

    if ( x == 2 && x != 0 ) // remove the `;` 
        printf("Hello\n");
    else
        printf("Bye\n");

    return 0;
}
```

e.
```c
#include <stdio.h>

int main() {
    int j = 65;

    printf("j >= 65 ? %d : %c", j);

    return 0;
}
```
Ans:
```c
#include <stdio.h>

int main() {
    int j = 65;

    printf("j >= 65 ? %d : %c", j, j); // missing argument for `%c`

    return 0;
}
```

f.
```c
#include <stdio.h>

int main() {
    int i = 10, j;

    i >= 5 ? j = 10 : j = 15;

    printf("%d %d\n", i, j);

    return 0;
}
```
Ans:
```c
#include <stdio.h>

int main() {
    int i = 10, j;

    j = i >= 5 ? 10 : 15; // ternary operator was used in incorrect syntax.

    printf("%d %d\n", i, j);

    return 0;
}
```

g.
```c
#include <stdio.h>

int main() {
    int a = 5, b = 6;

    ( a == b ? printf("%d\n", a) );

    return 0;
}
```
Ans:
```c
#include <stdio.h>

int main() {
    int a = 5, b = 6;

    if ( a == b )  // wrong use of ternary operator
        printf("%d\n", a);

    return 0;
}
```

h.
```c
#include <stdio.h>

int main() {
    int n = 9;

    ( n == 9 ? printf("Correct\n"); : printf("Wrong\n"); );

    return 0;
}
```
Ans:
```c
#include <stdio.h>

int main() {
    int n = 9;

    // remove the `;`
    ( n == 9 ? printf("Correct\n") : printf("Wrong\n") );

    return 0;
}
```

### [D] Attempt the following: [Solution](./D/)

### [E] Attempt the following: [Solution](./E/)
