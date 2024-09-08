# ❔Practice M1.2: Digit Shifting 

### Problem

Write a C program that performs a right shift operation on the digits of an integer. For example, given the integer 12345 and a shift amount of 2, the program should output 45123.

### Requirements:

**Input:**
- Prompt the user to enter an integer.
- Prompt the user to enter the number of positions by which to shift the digits to the right.

**Process:**

- Calculate the number of digits in the integer.
- Adjust the shift amount to handle cases where it is greater than the number of digits.
- Perform the digit shifting operation using arithmetic calculations.
- Avoid using arrays or strings for storing or manipulating the digits.

**Output:**

- Print the resulting integer after shifting the digits.

### Input

The input consists of two lines:
- **First line**: A positive integer representing the number to be shifted.
- **Second line**: A positive integer representing the number of shift.

### Output

The output consists of one line:
- **First line**: A positive integer representing the shifted number.

### Example

| **Input** | **Output**                                      |
|-----------|-------------------------------------------------|
| 12345 <br /> 2       | 45123                                   |
| 54321  <br /> 3       | 21543                                   |
| 2468  <br /> 10        | 6824                      |
