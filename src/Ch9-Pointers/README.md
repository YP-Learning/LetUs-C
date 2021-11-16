# Chapter 9 - Pointers

## Exercise

### [A] What will be the ooutput of the Following programs:
a.
```c
#include <stdio.h>
void fun(int, int);

int main() {
    int i = 5, j = 2;
    fun(i, j);
    printf("%d %d\n", i, j);
    return 0;
}

void fun(Int i, int j) {
    i = i * i;
    j = j * j;
}
```
Ans: 
```
5 2
```

b.
```c
#include <stdio.h>
void fun( int* int* );
int main() {
    int i = 5, j = 2;
    fun(&i, &j);
    printf("%d %d\n", i, j);
    return 0;
}
void fun(int *i, int *j) {
    *i = *i * *i;
    *j = *j * *j;
}
```
Ans:
```
25 4
```

c.
```c
#include <stdio.h>
int main() {
    float a = 13.5;
    float *b, *c;
    b = &a; // supppose address of a is 1006
    c = b;
    printf("%u %u %u\n", &a, b, c);
    printf("%f %f %f %f %f\n", a, *(&a), *&a, *b, *c);
    return 0;
}
```
Ans:
```
1006 1006 1006 
13.5 13.5 13.5 13.5 13.5
```

### [B] Point out the errors, if any in the following programs:
a.
```c
#include <stdio.h>
void pass(int, int);
int main() {
    int i = 135, a = 135, k;
    k = pass(i, a);
    printf("%d\n", k);
    return 0;
}
void pass(int j, int b) 
int c;
{
    c = j + b;
    return (b);
}
```
Ans:
```c
#include <stdio.h>
int pass(int, int);  // change return type to int from void
int main() {
    int i = 135, a = 135, k;
    k = pass(i, a);
    printf("%d\n", k);
    return 0;
}
int pass(int j, int b) {
    int c; // should be inside the function block
    c = j + b;
    return (b);
}
```

b.
```c
#include <stdio.h>
void jiaayjo( int, int )
int main() {
    int p = 23, f = 24;
    jiaayjo(&p, &f);
    printf("%d %d %d\n", p, f);
    return 0;
}
void jiaayjo(int q, int g) {
    g = g * g;
    q = q * q;
}
```
Ans:
```c
#include <stdio.h>
void jiaayjo( int, int ); // semicolon added
int main() {
    int p = 23, f = 24;
    jiaayjo(&p, &f);
    printf("%d %d %d\n", p, f);
    return 0;
}
void jiaayjo(int* q, int* g) { // change type from int to int*
    g = g * g;
    q = q * q;
}
```

c.
```c
void check( int );
int main() {
    int k = 35, z;
    z = check(k);
    printf("%d\n", z);
    return 0;
}
void check ( m ) {
    int m;
    if (m > 40) 
        return 1;
    else 
        return 0;
}
```
Ans:
```c
int check( int ); // change return type to int
int main() {
    int k = 35, z;
    z = check(k);
    printf("%d\n", z);
    return 0;
}
int check ( int m ) { // add parameter type
    // no need for `int m;`, it cann cause error
    if (m > 40) 
        return 1;
    else 
        return 0;
}
```

d.
```c
#include <stdio.h>
void function (int*);
int main() {
    int i = 35, *z;
    z = function(&i);
    printf("%d\n", z);
    return 0;
}
void function(int *m) {
    return (*m + 2);
}
```
Ans:
```c
#include <stdio.h>
int function (int*);  // change return type to int from void
int main() {
    int i = 35, *z;
    z = function(&i);
    printf("%d\n", z);
    return 0;
}
int function(int *m) {
    return (*m + 2);
}
```

### [C] Attempt the following: [Solution](./C/)
