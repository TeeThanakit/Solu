# 🏷️Lab 4.1 : Day of the Week Finder
## ⚠️ Use Switch Case!

You are tasked with writing a program that determines the day of the week based on an integer input. The input number will correspond to a specific day of the week, and your program should output the name of the day.


## The system should follow these rules:

- **1**: Monday
- **2**: Tuesday
- **3**: Wednesday
- **4**: Thursday
- **5**: Friday
- **6**: Saturday
- **7**: Sunday

If the input number is not within the range of 1 to 7, the program should output: `"Invalid day!"`.

## Input

The input consists of one line:

- **First line**: An integer representing the day of the week (1 ≤ day ≤ 7).

## Output

The output is a single line:

- The name of the day corresponding to the input number, or an error message if the number is outside the valid range.

## Example

| Input | Output        |
|-------|---------------|
| 1     | Monday        |
| 3     | Wednesday     |
| 5     | Friday        |
| 8     | Invalid day!  |
| 0     | Invalid day!  |

## Explanation

**Case 1:**

- **Input**: 1
- The input corresponds to Monday.
- **Output**: Monday

**Case 2:**

- **Input**: 3
- The input corresponds to Wednesday.
- **Output**: Wednesday

**Case 3:**

- **Input**: 5
- The input corresponds to Friday.
- **Output**: Friday

**Case 4:**

- **Input**: 8
- The input is outside the valid range.
- **Output**: Invalid day!

**Case 5:**

- **Input**: 0
- The input is outside the valid range.
- **Output**: Invalid day!

## C Switch Syntax
```
switch (expression) {
  case x: // if
    // code 
    break;
  case y:  // if else
    // code 
    break;
  default: // else
    // code 
}
```