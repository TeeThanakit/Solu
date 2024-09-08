# 🏷️Lab 5.3: Advanced Mathematical Calculations with `math.h`

### Problem

You are tasked with creating a complex mathematical program that calculates various functions using three decimal input values (`a`, `b`, `c`). The program will involve calculating powers, square roots, and logarithms, and will include multi-step computations. Use `math.h` to solve the problems.

The system should follow these rules:

#### Calculation Rules:

1. Compute \( a^b / c \) and other advanced operations:
   - $$ \text{result1} = \frac{a^b + c}{\log_{10}(a) + \log(c)} $$
   - $$ \text{result2} = \frac{(\sqrt{a} + \sqrt{b})^2}{\log(c)} $$

2. Validate all inputs to ensure they are positive and can be used for calculations. If any input is non-positive or results in an undefined mathematical operation, prompt the user to re-enter the value. **No case of negative values**
3. Compare `result1` and `result2` and output whether the difference is positive, negative, or zero.

#### Output Format:

- The program should output including the values of `result1` and `result2`.
- Finally, it should compare the two results and indicate whether the difference is positive, negative, or zero.

### Input

The input consists of three lines:

- **First line**: A positive decimal value `a`.
- **Second line**: A positive decimal value `b`.
- **Third line**: A positive decimal value `c`.

### Output

The output consists of multiple lines:

- **First line**: The result of `result1`.
- **Second line**: The result of `result2`.
- **Third line**: The difference between `result1` and `result2`
- **Fourth line**: Display the difference is `Positive`, `Negative`, or `Zero`.

### Example

| **Input** | **Output**                                                             |
| --------------- | ---------------------------------------------------------------------------- |
| 16 4 2          | Result1 = 34543.37<br />Result2 = 51.94<br />Difference between result1 and result2 = 34491.43<br />Positive |
| 25 5 3         | Result1 = 3911645.68<br />Result2 = 47.66<br />Difference between result1 and result2 = 3911598.02<br />Positive |

### Explanation

1. **Case 1**:

   - `result1` and `result2` computed as per the formula, with a final comparison that yields a positive difference.
2. **Case 2**:

   - Input: 25, 5, 3
   - All steps are repeated similarly, with output formatted accordingly.

---