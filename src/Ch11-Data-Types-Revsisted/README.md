# Chapter 11 - Data Types Revisited

## Exercise

### [A] What will be the output of the following programs:

a. 
```c
#include <stdio.h>
int i = 0;
void val();
int main() {
    printf("main's i = %d\n", i);
    i++;
    val();
    printf("main's i = %d\n", i);
    val();
    return 0;
}
void val() {
    i = 100;
    printf("val's i = %d\n", i);
    i++;
}
```
Ans:
```
main's i = 0
val's i = 100
main's i = 101 
val's i = 100
```

b.
```c
#include <stdio.h>
int main() {
    static int count = 5;
    printf("count = %d\n", count--);
    if ( count != 0 )
        main();
    return 0;
}
```
Ans:
```
count = 5
count = 4
count = 3
count = 2
count = 1
```

c.
```c
#include <stdio.h>
void func(); // not in the original question, but necessary for the code to run.
int main() {
    func();
    func():
    func();
    return 0;
}
void func() {
    auto int i = 0;
    register int j = 0;
    static int k = 0;
    i++; j++; k++;
    printf("%d %d %d\n", i, j, k);
}
```
Ans:
```
0 0 0
0 0 1
0 0 2
```

d.
```c
#include <stdio.h>
int x = 10;
int main() {
    int x = 20;
    {
        int x = 30;
        printf("%d\n", x);
    }
    printf("%d\n", x);
    return 0;
}
```
Ans:
```
30
20
```

### [B] Point out the errors, if any in the following programs:
a.
```c
#include <stdio.h>
int main() {
    long num = 2;
    printf("%d\n", num);
    return 0;
}
```
Ans:
```c
#include <stdio.h>
int main() {
    long num = 2l; // need `l` with the integer
    printf("%ld\n", num); // %ld instead of just %d
    return 0;
}
```

b.
```c
#include <stdio.h>
int main() {
    char ch = 200;
    printf("%d\n", ch);
    return 0;
}
```
Ans:
```c
#include <stdio.h>
int main() {
    unsigned char ch = 200; // makt it unsigned
    printf("%d\n", ch);
    return 0;
}
```
c.
```c
#include <stdio.h>
int main() {
    long float a = 25.345e454;
    unsigned double b = 25;
    printf("%lf %d\n", a, b);
    return 0;
}
```
Ans:
```c
#include <stdio.h>
int main() {
    long double a = 25.345e454;  // long float is invalid combination, needs to be long double
    double b = 25; // unsigned double is invalid combination
    printf("%Lf %lf\n", a, b);
    return 0;
}
```
d.
```c
#include <stdio.h>
static int y;
int main() {
    static int z;
    printf("%d %d\n", y, z);
    return 0;
}
```
Ans: `No Errors`

### [C] State whether the following statements are `True` or `False`.
a. The value of an automatic storage class variable presists between various function invocations. -> `False`

b. If the CPU registers are not available, the register storage class variables will be treated as static storage class variables. -> `False`

c. The register storage class variables cannot hold float values. -> `True`

d. If we try to use register storage class for a **float** variable the compiler will report an error message. -> `False`

e. The default value for automatic variable is zero. -> `False`

f. The life of static variable is till the control remains within the block in which it is defined. -> `True`

g. If a global variable is to be defined, then the extern word is necessary in its declaration. -> `False`

h. The address of register variable is not accessible. -> `True`
