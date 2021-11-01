# Chapter 6 - More Complex Repetitions

## Exercise

### [A] What will be the output of the following programs:
a. 
```c
#include <stdio.h>
int main() {
    int i = 0;
    for ( ; i ; ) 
        printf("here is some mail for you");
    return 0;
}
```
Ans: `No output`

b.
```c
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 5; printf("%d\n", i));
        i++;
}
```
Ans:
```
1
1
1
...Infinitely...
```

c.
```c
#include <stdio.h>
int main() {
    int i = 1, j = 1;
    for (;;) {
        if (i > 5)
            break; 
        else
            j += i;
        
        printf("%d\n", j);
        i += j;
        return 0;
    }
}
```
Ans: 
```
2
```
