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
