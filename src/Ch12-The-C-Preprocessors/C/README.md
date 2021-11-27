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

