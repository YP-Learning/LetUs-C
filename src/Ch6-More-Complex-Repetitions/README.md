# Chapter 6 - More Complex Repetitions

## Exercise

### [A] What will be the output of the following programs:
a. 
```c
#include <stdio.h>
int main() {
    int i = 0;
    for ( ; i ; ) 
        printf("here is some mail for you");
    return 0;
}
```
Ans: `No output`

b.
```c
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 5; printf("%d\n", i));
        i++;
}
```
Ans:
```
1
1
1
...Infinitely...
```

c.
```c
#include <stdio.h>
int main() {
    int i = 1, j = 1;
    for (;;) {
        if (i > 5)
            break; 
        else
            j += i;
        
        printf("%d\n", j);
        i += j;
        return 0;
    }
}
```
Ans: 
```
2
```

### [B] Answer the following:
a. The three parts of the loo expression in the for loop are:
- The i<u>nitialize</u> expression.
- The t<u>est</u> expression.
- The i<u>ncrement</u> expression.

b. The `break` statement is used to exit from:

Ans: 2. A `for` loop

c. A `do-while` loop is useful when we want that the statements within the loop must be executed:

Ans: 2. At least once 

d. In what sequence the initialization, testing and exectution of body is done in the `do-while` loop?

Ans: 1. initialization, execution of body, testing

e. Which of the following is not an infinite loop?

Ans: 3. 
```c
int t = 0, f;
while (t) {
    f = 1;
}
```

f. Which keyword is used to take the control to the beginning of the loop?

Ans: `continue`

g. How many times the `while` loop in the folowing C code will get executed?
```c
#include <stdio.h>
int main() {
    int j = 1;
    while ( j <= 255 );
    {
        printf("%c %d", j, j);
        j++;
    }
    return 0;
}
```
Ans: `Infinitely`

h. Which of the following statements is true for the followig program?
```c
#include <stdio.h>
int main() {
    int x = 10, y = 100%90;
    for ( i = 1; i <= 10; i++ );
    if ( x != y );
        printf("x = %d y = %d\n", x, y );
    return 0;
}
```
Ans: 2. The program will produce the output x=10 y=10.

3. The `;` after the `if(x!=y)` will not producean error.

i. Which of the following statement is true about a `for` loop used in a C program?

Ans: 2. All things that can be done using a `for` loop can also be done using a `while` loop.

3. `for(;;)` implements an infinite loop.

### [C] Attempt the following: [Solution](./C/)
