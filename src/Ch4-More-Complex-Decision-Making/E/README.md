## Attempt the following:

a. Using conditional operators determine:
1. Whether the character entered through the keyboard is lowercase alphabet or not.
2. Whether a character entered through the keyboard is a special symbol or not.

[solution](./a.c)

b. Write a program using contitional operators to determine whether a year entered through the keyboard is a leap year or not. [solution](./b.c)

c. Write a program to find the greatest of the three numbers entered through the keyboard. Use conditional operators. [solution](./c.c)

d. Write a program to recieve value of an angle in degrees and check whether the sum of squares of sine and cosine is equal to `1`. [solution](./d.c)

e. Rewrite the following program using conditional operators. [solution](./e.c)
```c
#include <stdio.h>

int main() {
    float sal;

    printf("Enter the salary");
    scanf("%f", &sal);

    if (sal >= 25000 && sal <= 40000)
        printf("Manager\n");
    else
        if (sal >= 15000 && sal < 25000)
            printf("Accountant\n");
        printf("Clerk\n");

    return 0;
}
```
