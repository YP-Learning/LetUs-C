# Chapter 7 - Case Control Instruction

## Exercise

### [A] What will be the output of the following programs:
a. 
```c
#include <stdio.h>
int main() {
    char suite = 3;
    switch (suite) {
        case 1:
            printf("Diamond\n");
        case 2:
            printf("Spade\n");
        default:
            print("Heart\n");
    }
    printf("I thought one wears a suite\n");
    return 0;
}
```
Ans:
```
Heart
I thought one wears a suite
```

b. 
```c
#include <stdio.h>
int main() {
    int c = 3;
    switch (c) {
        case '3':
            printf("You never win the silver prize\n");
            break;
        case 3:
            printf("You always lose the gold prize\n");
            break;
        default:
            printf("Of course provided you win a prize\n");
    }
    return 0;
}
```
Ans:
```
You always lose the gold prize
```

c.
```c
#include <stdio.h>
int main() {
    int i = 3;
    switch (i) {
        case 0:
            printf("Customers are dicey\n");
        case 1 + 0:
            printf("Markets are pricey\n");
        case 4 / 2:
            printf("Investory are moody\n");
        case 8 % 5:
            printf("At least employees are good\n");
    }
    return 0;
}
```
Ans:
```
At least employees are good
```

d.
```c
#include <stdio.h>
int main() {
    int k;
    float j = 2.0;
    switch ( k = j + 1 ) {
        case 3:
            printf("Trapped\n");
            break;
        default:
            printf("Caught\n");
    }
    return 0;
}
```
Ans:
```
Trapped
```

e.
```c
#include <stdio.h>
int main() {
    int ch = 'a' + 'b';
    switch (ch) {
        case 'a':
        case 'b':
            printf("you entered b\n");
        case 'A':
            printf("a as in ashar\n");
        case 'b' + 'a':
            printf("You entered a and b\n");
    }
    return 0;
}
```
Ans:
```
You entered a and b
```
