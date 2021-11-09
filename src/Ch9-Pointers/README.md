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
