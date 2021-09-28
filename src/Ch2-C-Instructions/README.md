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
