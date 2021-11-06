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
