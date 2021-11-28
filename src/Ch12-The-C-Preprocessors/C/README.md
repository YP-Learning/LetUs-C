## [C] Attempt the following

a. If a macro is not getting expanded as per your expetation, how will you find out how is it being expanded by the preprocessor. 

**Ans**: For example [a.c](./a.c) has a macro, wich is not working as expected... so I can use `clang a.c -E` or `gcc a.c -E` and it will output a bunch of code, the last part of that code will be the expanded version of [a.c](./a.c) and the main() function looks like this:
```c
int main() {
    int i = 3, j, k, l;
    j = (i + 1 * i + 1);
    k = (i++ * i++);
    l = (++i * ++i);
    printf("%d %d %d %d", i, j, k, l);
    return 0;
}
```
using this we can debug our code.

b. Write down macro defination for the following:
1. To test whether a character is small case letter or not. 
2. To test whether a character is an upper case letter or not.
3. To test whether a character is an alphabet or not. Make use of the Macros you defined in 1 and 2 above.
4. To obtain bigger of two numbers.

Ans:
```c
#define IS_SMALLER_CASE(ch) ((96 < ch) && (ch < 123))
#define IS_UPPER_CASE(ch) ((64 < ch) && (ch < 91))
#define IS_ALPHABET(ch) (IS_SMALLER_CASE(ch) || IS_UPPER_CASE(ch))
#define MAX(x, y) (x > y ? x : y)
```

c. Write a macro definations with arguments for caculation of area and perimeter of a triangle, a square and a circle. Store these macro definations in a file called "areaperi.h". Include this file in your program, and call the macro definations for calculating area and perimeter for different squares triangles and circles. [Solution](./c.c)

d. Write down macro defination for the following:

1. To find arithmetic mean of 2 numbers.
2. To find absolute value of a number.
3. To convert an Uppercase letter to a lowercase letter.
4. To obtain the biggest of three numbers. 

Ans:
```c
#define MEAN(a, b) (a + b)/2
#define ABS(x) (x < 0 ? (-1 * x) : x)
#define TO_LOWER(ch) (ch + 32)
#define MAX(a, b, c) (a > b ? (a > c ? a:c):(b > c ? b:c))
```
