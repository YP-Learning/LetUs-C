# Chapter 3 - Decision Control Instruction 
---

## Exercise

### [A] What will be the output of the following programs:
a. 
```c
#include <stdio.h>

int main() {
    int a = 300, b, c;

    if (a >= 400)
        b = 300;

    c = 200; 
    printf("%d %d\n", b, c);
    return 0;
}
```
Ans: 
```
garbage 200
```

b. 
```c
#include <stdio.h>

int main() {
    int a = 500, b, c;

    if (a >= 400)
        b = 300; 
    
    c = 200;
    printf("%d %d\n", b, c);
    return 0;
}
```
Ans:
```
300, 200
```

c. 
```c
#include <stdio.h>

int main() {
    int x = 10, y = 20;
    if (x == y);
        printf("%d %d\n", x, y);
    return 0;
}
```
Ans:
```
no output
```

d. 
```c
#include <stdio.h>

int main() {
    int x = 3;
    float y = 3.0;
    if (x == y)
        printf("x and y are equal\n");
    else
        printf("x and y are not equal\n");
    return 0;
}
```
Ans:
```
x and y are equal
```

e. 
```c
#include <stdio.h>

int main() {
    int x = 3, y, z;
    y = x = 10;
    z = x < 10;

    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
```
Ans:
```
x = 10, y = 10, z = 0
```

f. 
```c
#include <stdio.h>

int main() {
    int i = 65;
    char j = 'A';

    if ( i == j )
        printf("C is WOW\n");
    else
        printf("C is a headache\n");
    
    return 0;
}
```
Ans:
```
C is WOW
```

### [B] Point out the errors, if any, in the following programs:

a. 
```c
#include <stdio.h>

int main() {
    float a = 12.25, b = 12.52;
    if ( a = b )
        printf("a and b are equal\n");
    return 0;
}
```
Ans: 
```c
#include <stdio.h>

int main() {
    float a = 12.25, b = 12.52;
    if ( a == b )  // use comparision operator `==` instead of assignment operator `=`
        printf("a and b are equal\n");
    return 0;
}
```

b.
```c
#include <stdio.h>

int main() {
    int j = 10, k = 12;
    if ( k >= j ) {
        {
            k = j;
            j = k;
        }
    }
    return 0;
}
```
Ans: No Errors

c.
```c
#include <stdio.h>

int main() {
    if ( 'X' < 'x' )
        printf("ascii value of X is smaller than that of x\n");
}
```
Ans: No Errors

d.
```c
#include <stdio.h>

int main() {
    int x = 10, y = 15;
    if ( x >= 2 ) then
        printf("%d\n", x);
    return 0;
}
```
Ans: 
```c
#include <stdio.h>

int main() {
    int x = 10, y = 15;
    if ( x >= 2 )  // `then` is not the syntax of if statements, need to remove that.
        printf("%d\n", x);
    return 0;
}
```

e. 
```c
#include <stdio.h>

int main() {
    int x = 10, y = 15;
    if ( x % 2 = y % 3 )
        printf("Carpathians\n");
}
```
Ans:
```c
#include <stdio.h>

int main() {
    int x = 10, y = 15;
    if ( x % 2 == y % 3 ) // use comparision operator `==` instead of assignment operator `=`
        printf("Carpathians\n");
}
```

f. 
```c
#include <stdio.h>

int main(){
    int x = 30, y = 40;
    if ( x == y )
        printf("x is equal to y\n");
    elseif ( x > y )
        printf("x is greater than y\n");
    elseif ( x < y )
        printf("x is less than y\n");
    return 0;
}
```
Ans: 
```c
#include <stdio.h>

int main(){
    int x = 30, y = 40;
    if ( x == y )
        printf("x is equal to y\n");
    else if ( x > y ) // elseif is not the syntax, instead should use `else if`
        printf("x is greater than y\n");
    else if ( x < y ) // same as above
        printf("x is less than y\n");
    return 0;
}
```

g. 
```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", a, b);
    if ( a > b );
        printf("This is a game\n");
    else
        printf("You have to play it\n");
    return 0;
}
```
Ans:
```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // missing address of operator
    if ( a > b ) // no need of `;`
        printf("This is a game\n");
    else
        printf("You have to play it\n");
    return 0;
}
```

### [C] Attempt the Following: [Solution](./C/)
