# ❔Practice M1.1: Fibonacci Prime Finder

### Problem

You need to write a program that generates Fibonacci numbers within a given range and identifies which of these numbers are prime. The program should handle the following requirements:

#### Requirements:
1. **Generate Fibonacci Numbers**: Compute Fibonacci numbers starting from 0 and 1.
2. **Check Range**: Only consider Fibonacci numbers within the given range `[N, M]`, where `N` and `M` are provided as input.
3. **Prime Check**: Determine if the Fibonacci number is a prime number. A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
4. **Output**: Print each Fibonacci number that is a prime number and falls within the range `[N, M]`.

### Input

- **First line**: A positive integer `N` representing the lower bound of the range.
- **Second line**: A positive integer `M` representing the upper bound of the range.

### Output

- Print each prime Fibonacci number within the range `[N, M]`, each on a new line. 

### Example

| **Input** | **Output**                                      |
|-----------|-------------------------------------------------|
| 10 100    | 13<br />89                                      |
| 1 50      | 2<br />3<br />5<br />13 |
| 0 1000    | 2<br />3<br />5<br />13<br />89<br />233 |
| 0 900000000000000000    | 2<br />3<br />5<br />13<br />89<br />233<br />1597<br />28657<br />514229<br />433494437<br />2971215073<br />99194853094755497 |
| 15 15     | No Output                                     |

### Explanation

1. **Case 1**:
    - Input: `10` and `100`
    - Fibonacci Sequence: `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...`
    - Primes within Range: `13`, `89`
    - Output:
      ```
      13
      89
      ```

2. **Case 2**:
    - Input: `1` and `50`
    - Fibonacci Sequence: `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...`
    - Primes within Range: `2`, `3`, `5`, `13`, `19`, `31`, `41`, `47`
    - Output:
      ```
      2
      3
      5
      13
      ```

3. **Case 3**:
    - Input: `0` and `1000`
    - Fibonacci Sequence: `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, ...`
    - Primes within Range: `2`, `3`, `5`, `13`, `89`, `233`, `377`, `613`
    - Output:
      ```
      2
      3
      5
      13
      89
      233
      ```
4. **Case 4**:
    - Input: `0` and `900000000000000000`
    - Fibonacci Sequence: `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, ...`
    - Primes within Range: `2`, `3`, `5`, `13`, `89`, `233`, `377`, `613`
    - Output:
      ```
      2
      3
      5
      13
      89
      233
      1597
      28657
      514229
      433494437
      2971215073
      99194853094755497
      ```

5. **Case 5**:
    - Input: `15` and `15`
    - Fibonacci Sequence: `0, 1, 1, 2, 3, 5, 8, 13, 21, ...`
    - No Fibonacci number is exactly `15`.
    - Output: 
      ```
      No Output
      ```

This exercise tests your ability to generate Fibonacci numbers, perform primality testing, and handle range constraints using `if-else` statements and loops without relying on arrays or complex data structures.
