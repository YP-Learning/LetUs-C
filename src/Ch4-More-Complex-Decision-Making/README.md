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
