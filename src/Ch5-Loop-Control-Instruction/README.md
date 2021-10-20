# Chapter 4 - Loop Control instructions

## Exercise

### [A] What will be the output of the following programs:

a. 
```c
#include <stdio.h>

int main() {
    int i = 1;

    while ( i <= 10 );
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
```
Ans: `Nothing, as the while loop is running forever as ';' is used after while statement`

b.
```c
#include <stdio.h>

int main() {
    int x = 4, y, z;

    y = --x;
    z = x--;

    printf("%d %d %d\n", x, y, z);
    return 0; 
}
```
Ans:
```
2 3 3
```

c.
```c
#include <stdio.h>

int main() {
    int x = 4, y = 3, z;

    z = x-- -y ;
    printf("%d %d %d\n", x, y, z); 
    return 0;
}
```
Ans:
```
3 3 1
```

d.
```c
#include <stdio.h>

int main() {
    while ( 'a' < 'b' )
        printf("malayalam is a palindrome\n");
    return 0;
}
```
Ans:
```
malayalam is a palindrome
malayalam is a palindrome
malayalam is a palindrome
...Infinitely...
```

e. 
```c
#include <stdio.h>

int main() {
    int i;

    while (i = 10) {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
```
Ans: 
```
10
10
10
...Infinitely...
```

f. 
```c
#include <stdio.h>

int main() {
    float x = 1.1;

    while ( x == 1.1 ) {
        printf("%f\n", x);
        x = x - 0.1;
    }
    
    return 0;
}
```
Ans: `Nothing is printed`

### [B] Attempt the following: [Solution](./B/)
