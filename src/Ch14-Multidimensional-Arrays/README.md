# Chapter 14 - Multidimensional Arrays

## Exercises 

### [A] What will be the output of the following programs:
a. 
```c
#include <stdio.h>
int main() {
    int n[3][3] = {
        2, 4, 3,
        6, 8, 5,
        3, 5, 1
    };

    printf("%d %d %d\n", *n, n[1][1], n[2][2]);
    return 0;
}
```
Ans: `Error: expected int, but recived int*`

b. 
```c
#include <stdio.h>
int main() {
    int n[3][3] = {
        2, 4, 3,
        6, 8, 5,
        3, 5, 1
    };

    int i, *ptr;
    ptr = &n[0][0];
    for (i = 0; i <= 8; i++) 
        printf("%d\n", *(ptr + i));

    return 0;    
}
```
Ans:
```
2
4
3
6
8
5
3
5
1
```

c. 
```c
#include <stdio.h>
int main() {
    int n[3][3] = {
        2, 4, 3,
        6, 8, 5,
        3, 5, 1
    };

    int i, j;

    for (i = 0; i <= 2; i++) 
        for (j = 0; j <= 2; j++)
            printf("%d %d\n", n[i][j], *(*(n + i) + j));

    return 0;
}
```
Ans:
```
2 2
4 4
3 3
6 6
8 8
5 5
3 3
5 5
1 1
```

### [B] Point out the errors, if any, in the following programs:
a.
```c
#include <stdio.h>
int main() {
    int twod[][] = { 
        2, 4,
        6, 8
    };

    printf("%d\n", twod);
    return 0;
}
```
Ans: `%d is for int, but twod is int[][], resulting for error`

b.
```c
#include <stdio.h>
int main() {
    int three[3][] = {
        2, 4, 3,
        6, 8, 2,
        2, 3, 1
    };

    printf("%d\n", three[1][1]);
    return 0;
}
```
Ans: `three[3][] is incomplete declaration which can result for an error, instead use three[3][3]`
