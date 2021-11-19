# Chapter 10 - Recursion

## Exercise

### [A] What willl be the output of the following programs:
a.
```c
#include <stdio.h>
int main() {
    printf("C to it that C survives\n");
    main();
    return 0;
}
```
Ans:
```
C to it that C survives
C to it that C survives
...
C to it that C survives
C to it that C survives
C to it that C survives
Segmentation fault
```

b. 
```c
#include <stdio.h>
int main() {
    int i = 0;
    i++;
    if ( i <= 5 ) {
        printf("C adds wings to your thoughts\n");
        exit(0);
        main();
    }
    return 0;
}
```
Ans: (ignoring that `exit()` needs `#include <stdlib.h>`)
```
C adds wings to your thoughts
```
