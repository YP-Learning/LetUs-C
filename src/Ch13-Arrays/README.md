# Chapter 13 - Arrays

## Exercises

### [A] Answer the following:

a. An array is a collection of:

1. Different data types scattered throught memory.
2. The same data type scattered throught memory.
3. The same data type placed next to each other in memory. 
4. Different data types placed next to each other in memory.

Ans: 3. `The same data type placed next to each other in memory`.

b. Are the following array declarations correct?

```
int a(25);
int size = 10, b [size];
int c = {0, 1, 2};
```
Ans: `int size = 10, b[size];`

c. Which element of the array does this expression refrence? `num[4]`

Ans: The 5th element is being refrenced.

d. What is the difference between the 5's in these two expressions? 
```
int num[5];
int[5] = 11;
```
1. First in particular element, second is type
2. First is array size, second is particular element
3. First is particular element, second is array size
4. Both specify array size

Ans: 2. `First is array size, second is particular element`

e. State whether the following statements are `True` or `False`:
1. The array `int num[26]` has twent-six elements. - `True`
2. The expression `num[1]` designates the first element in the array. - `False`
3. It is necessary to initialize the array at the time of declaration. - `False`
4. The expression `num[27]` designates the twenty-eighth element in the array. - `True`

f. What will happen if you try to put so many values into array when you initialize it the size of the array exceeded?

1. Nothing
2. Possible system malfunction
3. Error message from the compiler
4. Other data may be overwritten

Ans: 1. `Nothing`

g. What will happen if you put too few elements in an array when you initialize it?

1. Nothing
2. Possible system malfunction
3. Error message from the compiler
4. Unused elements will be filled with 0's or garbage 

Ans: 4. `Unused elements will be filled with 0's or garbage`

h. What will happpen if you assign a value to an element of an array whose subscript exceeds the size of the array?

1. The element will be set to 0
2. Nothing, it's done all the time
3. Other data may be overwritten
4. Error message from the compiler

Ans: 3. `Other data may be overwritten`

i. When you pass an array as an argument to a function, what actually gets passed?
1. Address of the array
2. values of the elements of the array
3. Address of the first element of the array
4. Number of elements of the array

Ans: 3. `Address of the first element of the array`

j. if you dont initialize a static array, what will be the elements set to?

1. 0
2. an undetermined value
3. A floating point number
4. The character constant '\0'

Ans: 1. `0`

k. if `int s[5]` is a one-dimensional array of integers, which of the following refers to the third element in the array?

1. `*(s + 2)`
2. `*(s + 3)`
3. `s + 3`
4. `s + 2`

Ans: 1. `*(s + 2)`

### [B] Attempt the following: [Solution](./B/)
