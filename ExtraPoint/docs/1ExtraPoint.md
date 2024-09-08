# 🪦 Extra Point: Reverse Binary Conversion System

### Problem

You are tasked with creating a program that converts a positive integer from decimal (base 10) to binary (base 2), but the twist is that the binary representation must be output in reverse order. The program should handle the entire conversion and reversal process using only `if-else` statements and loops, **with no arrays, pointers, or matrices.**

The system should follow these rules:

#### Conversion Rules:
1. Convert the given decimal number to its binary equivalent.
2. Reverse the binary digits and display the result.
3. The input is guaranteed to be a positive integer.
4. **Do not use arrays** in the implementation.

#### Output Format:
- The program should first output the standard binary representation.
- Then, the program should output the reversed binary representation.

### Input

The input consists of one line:
- **First line**: A positive integer representing the number to be converted to binary.

### Output

The output consists of two lines:
- **First line**: The binary representation of the input number.
- **Second line**: The reversed binary representation.

### Example

| **Input** | **Output**                                      |
|-----------|-------------------------------------------------|
| 1000        | 1111101000<br />0001011111                                   |
| 6         | 110<br />011                                     |
| 999       | 1111100111<br />1110011111                      |
| 0         | 0<br />0                                        |
| -8        | Invalid input. Please enter a positive integer. |

### Explanation

1. **Case 1**:
    - Input: 1000
    - Binary Conversion: 13 in binary is `1111101000`.
    - Reversed Binary: The reversed binary is `0001011111`.
    - Output: 
      ```
      1111101000
      0001011111
      ```

2. **Case 2**:
    - Input: 6
    - Binary Conversion: 6 in binary is `110`.
    - Reversed Binary: The reversed binary is `011`.
    - Output:
      ```
      110
      011
      ```

3. **Case 3**:
    - Input: 999
    - Binary Conversion: 25 in binary is `1111100111`.
    - Reversed Binary: The reversed binary is `1110011111`.
    - Output:
      ```
      1111100111
      1110011111
      ```

4. **Case 4**:
    - Input: 0
    - Binary Conversion: 0 in binary is `0`.
    - Reversed Binary: The reversed binary is also `0`.
    - Output:
      ```
      0
      0
      ```

5. **Case 5**:
    - Input: -8
    - The input is invalid as it is negative.
    - Output:
      ```
      Invalid input. Please enter a positive integer.
      ```

This exercise will test your ability to manipulate binary numbers and handle logical operations using `if-else` statements and loops without relying on arrays.

