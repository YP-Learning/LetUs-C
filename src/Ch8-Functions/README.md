# Chapter 8 - Functions

## Exercises

### [A] What will be the output of the ollowing programs:
a.
```c
#include <stdio.h>
void display();
int main() {
    printf("Learn C\n");
    display();
    return 0;
}
void display() {
    printf("Followed by C++, C# and Java!\n");
    main();
}
```
Ans:
```
Learn C
Followed by C++, C# and Java!
...Infinitely...
```

b.
```c
#include <stdio.h>
int check(int);
int main() {
    int i = 45, c;
    c = check(i);
    printf("%d\n", c);
    return 0;
}
int check(int ch) {
    if ( ch >= 45 )
        return (100);
    else
        return ( 10 * 10 );
}
```
Ans:
```
100
```

c.
```c
#include <stdio.h>
float circle (int);
int main() {
    float area;
    int radius = 1;
    area = circle(radius);
    printf("%f\n", area);
    return 0;
}
float circle(int r) {
    float a;
    a = 3.14 * r * r;
    return a;
}
```
Ans:
```
3.140000
```

### [B] Point out the errors if any, in the following programs:
a.
```c
#include <stdio.h>
int addmult (int, int)
int main() {
    int i = 3, j = 4, k, l;
    k = addmult(i, j);
    l = addmult(i, j)
    printf("%d %d\n", k, l);
    return 0;
}
int addmult(int ii, int jj) {
    int kk, ll;
    kk = ii + jj;
    ll = ii * jj;
    return (kk, ll);
}
```
Ans:
```c
#include <stdio.h>
int addmult (int, int); // semicolon needed
int main() {
    int i = 3, j = 4, k, l;
    k = addmult(i, j);
    l = addmult(i, j)
    printf("%d %d\n", k, l);
    return 0;
}
int addmult(int ii, int jj) {
    int kk, ll;
    kk = ii + jj;
    ll = ii * jj;
    return (kk, ll);
}
```

b.
```c
#include <stdio.h>
void message();
int main() {
    int a;
    a = message();
    return 0;
}
void message() {
    printf("Viruses are writen in C\n");
    return;
}
```
Ans: 
```c
#include <stdio.h>
void message();
int main() {
    int a;
    message(); // cannot assign void to a variable;
    return 0;
}
void message() {
    printf("Viruses are writen in C\n");
    return;
}
```

c.
```c
#include <stdio.h>
int main() {
    float a = 15.5;
    char ch = 'C';
    printig(a, ch);
    return 0;
}
printit(a, ch) {
    printf("%f, %c\n", a, ch);
}
```
Ans:
```c
#include <stdio.h>
void printit(float a, char ch); // needs a prototype
int main() {
    float a = 15.5;
    char ch = 'C';
    printig(a, ch);
    return 0;
}
void printit(float a, char ch) { // needs datatypes
    printf("%f, %c\n", a, ch);
}
```

d. 
```c
#include <stdio.h>
void message();
int main() {
    message();
    message();
    return 0;
}
void message(); 
{
    printf("Praise worthy and C worthy are snyonyms\n");
}
```
Ans:
```c
#include <stdio.h>
void message();
int main() {
    message();
    message();
    return 0;
}
void message() { // removed the `;`
    printf("Praise worthy and C worthy are snyonyms\n");
}
```

e.
```c
#include <stdio.h>
int main() {
    let_us_c()
    {
        printf("C is a Cimple minded language !\n");
        printf("Others are of course no match !\n");
    }
    return 0;
}
```
Ans: `let_us_c() is called without defination.`

f.
```c
#include <stdio.h>
void message();
int main() {
    message(message());
    return 0;
}
void message() {
    printf("It's a small world after all...\n");
}
```
Ans: `message(message()) passes void to the outter message() which creates an error`.
