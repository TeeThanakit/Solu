# ❔Practice M1.3: Pyramid Time!!

### Problem

Write a C program that prints a number pyramid of height ℎ. The pyramid should be symmetrical, with each row containing consecutive numbers starting from 1, followed by the same numbers in reverse order, centered in a pyramid shape.

### Instructions:

- Prompt the user to input an integer ℎ, which represents the height of the pyramid.
- Use a for loop to generate each row.
- Each row should start with the number 1 and increment until the current row number is reached, then decrement back down to 1.
- The numbers should be spaced correctly to form a pyramid shape.
- If the input is negative, print out **"Invalid input"**

### Input

The input consists of one line:
- **First line**: A integer value ℎ.


### Output

The output consists of ℎ lines:
- A shape of a pyramid with a height of ℎ

### Example

```
INPUT: 4 OUTPUT:      1
                    1 2 1
                  1 2 3 2 1
                1 2 3 4 3 2 1

INPUT: 7 OUTPUT:            1
                          1 2 1
                        1 2 3 2 1
                      1 2 3 4 3 2 1
                    1 2 3 4 5 4 3 2 1
                  1 2 3 4 5 6 5 4 3 2 1
                1 2 3 4 5 6 7 6 5 4 3 2 1

INPUT: -10 OUTPUT:Invalid input
```