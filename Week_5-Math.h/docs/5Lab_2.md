# 🏷️Lab 5.2: logarithm and natural logarithm

### Problem

You are tasked with creating a complex mathematical program that calculates various functions using three decimal input values (`a`, `b`, `c`). The program will involve calculating logarithms. Use `math.h` to solve the problems.

The system should follow these rules:

#### Calculation Rules:
1. Compute the logarithm base 10 of `a`, `b`, and `c`.
2. Compute the natural logarithm (log base e) of `a`, `b`, and `c`.

#### Output Format:
- The program should output the results of all logarithms.

### Input

The input consists of three lines:
- **First line**: A positive decimal value `a`.
- **Second line**: A positive decimal value `b`.
- **Third line**: A positive decimal value `c`.

### Output

The output consists of two lines:
- **First line**: The logarithms (base 10) of `a`, `b`, and `c`.
- **Second line**: The natural logarithms (log base e) of `a`, `b`, and `c`.

### Example

| **Input** | **Output**                                      |
|-----------|-------------------------------------------------|
| 16 4 2  | Log10: a = 1.20, b = 0.60, c = 0.30<br />Log base e: a = 2.77, b = 1.39, c = 0.69 |
| 25 5 3  | Log10: a = 1.40, b = 0.70, c = 0.48<br />Log base e: a = 3.22, b = 1.61, c = 1.10 |

### Explanation

1. **Case 1**:

    - Input: 16 4 2
    - Logarithms (base 10): ( $log_{10}16 = 1.20$), ( $log_{10}4 = 0.60 $), ( $log_{10}2 = 0.30 $)
    - Natural logarithms: ( $log(16) = 2.77 $), ($log(4) = 1.39 $), ( $log(2) = 0.69 $)

2. **Case 2**:
    - Input: 25 5 3
    - All steps are repeated similarly, with output formatted accordingly.

---