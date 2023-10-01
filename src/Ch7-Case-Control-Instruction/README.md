# Chapter 7 - Case Control Instruction
---

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

### [B] Point out the errors, if any in the following programs:
a.
```c
#include <stdio.h>
int main() {
    int suite = 1;
    case (suite) {
        case 0;
            printf("Club\n");
        case 1;
            printf("Diamond\n");
    }
    return 0;
}
```
Ans:
```c
#include <stdio.h>
int main() {
    int suite = 1;
    case (suite) {
        case 0:  // use `:` not `;`
            printf("Club\n");
        case 1:  // same here
            printf("Diamond\n");
    }
    return 0;
}
```

b.
```c
#include <stdio.h>
int main() {
    int temp;
    scanf("%d", &temp);
    switch (temp) {
        case (temp <= 20):
            printf("Ooooooohhhh! Damn cool!\n");
        case (temp > 20 && temp <= 30):
            printf("Rain rain here again!\n");
        case (temp > 30 && temp <= 40):
            printf("Wish I am on Everest\n");
        default:
            printf("Good old nagpur weather\n");
    }
    return 0;
}
```
Ans:
`The case expression should be a constant value`

c.
```c
#include <stdio.h>
int main() {
    int a = 3.5;
    switch (a) {
        case 0.5:
            printf("The art of C\n"); break;
        case 1.5:
            printf("The sprite of C\n"); break;
        case 2.5:
            printf("See through C\n"); break;
        case 3.5:
            printf("Simply C\n");
    }
    return 0;
}
```
Ans: `The case expression should be int, but here its float/double`

d.
```c
#include <stdio.h>
int main() {
    int a = 3, b = 4, c;
    c = b - a;
    switch (c) {
        case 1 || 2:
            printf("God give me a chance to change things.\n");
            break;
        case a || b:
            printf("God give me a chance to run my show\n");
            break;
    }
    return 0;
}
```
Ans:
```c
#include <stdio.h>
int main() {
    int a = 3, b = 4, c;
    c = b - a;
    switch (c) {
        case 1:  // cannot have || in the case expression.
        case 2:
            printf("God give me a chance to change things.\n");
            break;
        case 3:  // expects a constant, so variable produced errors
        case 4:
            printf("God give me a chance to run my show\n");
            break;
    }
    return 0;
}
```

### [C] Write a menu driven program which has the following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit

Once a menu item is selected the approriate action should be taken and once this action is finished the menu should reappear. Unless the user selects the menu 'Exit' option the program should continue to run.

Hint: Make use of an infinite `while` and a `switch` statement.
[solution](./C.c)

### [D] Write a program to find the grace makrs for a student using `switch`. The user should enter the clas obtained by the student and the number of subjects he has failed in. Use the following logic:
- if the student gets first class and the number of subject he failed is greater than 3, then he does not get any grace. Otherwise the grace is of 5 marks per subject.
- if the students gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace. Otherwise the grace is of 4 marks per subject.
- if the student ges 3rd class and the number of subjects he failed in is greater than 1, then he does not get any grace. Otherwise the grace is of 5 marks. [Solution](./D.c)
