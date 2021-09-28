# Chapter 2 - C Instructions

## Exercise

### [A] Point out the errors, if any, in the following C statements:
1. `x = (Y + 3);` -> assuming x and y are iniitiated already then no errors.
2. `cir = 2 * 3.141593 * r;` -> no errors of cir and r are initialized already.
3. `char = '3';` -> Char is a keyword and we cannot assign value to it.
4. `4/3 * 3/14 * r * r * r = vol_of_sphere;` -> val_of_sphere should be in left side, but it is in right instead.
5. `volume = a³;` a³ is invalid.
6. `area = 1/2 * base * height;` -> no errors if area, base and height are initialized.
7. `si = p * r * n / 100;` -> no errors
8. `area of circle = 3.14 * r * r;` -> the variable `area of circle` is invalid it should be `area_of_circle`.
9. `peri_of_tri = a + b + c;` -> no errors.
10. `slope = (y2 - y1) ÷ (x2 - x1);` -> `÷` is invalid operator.
11. `3 = b = 4 = a;` -> error, we cannot assign 3 any value.
12. `count = count + 1;` -> no errors, if count is defined.
13. `char ch = '25 Apr 12';` -> error, '25 Apr 12' is a string and should be wrapped around `"` instead of `'`, and `char *ch` should be used.

### [B] Evaluate the Following expressions and show their hierarchy.
1. `ans = 5 * b * b * x -3 * a * y * y -8 * b * b * x + 10 * a * y;` (a = 3, b = 2, x = 5, y = 4 assume ans to be int) => `-84`
2. `res = 4 * a * y / c - a * y / c;` (a = 4, y = 1, c = 3, assume res to be an int) => `4`
3. `s = c + a * y * y / b;` (a = 2.2, b = 0.0, c = 4.1, y = 3.0, assume s to be an float) => `inf` 
4. `R = x * x + 2 * x + 1 /2 * x * x + x + 1` (x - 3.5, assume R to be an float) => `23.75`
