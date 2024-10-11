### Problem
Create a C program with **``three functions``** to input grades, calculate the average, and display the statistics.

1. **Main function**: Ask user the number of input.
2. **UserInput function**: Ask input from user according to the number of input average of grades.
3. **CalculateAverage function**: Calculate the average of grade(s)
4. **DisplayAverageAndGradeClassification function**
   - If the average is greater than or equal to 90, print `"A"`.
   - If the average is between 80 and 89, print `"B"`.
   - If the average is between 70 and 79, print `"C"`.
   - If the average is between 60 and 69, print `"D"`.
   - If the average is below 60, print `"F"`.

### Input and Output Example

#### Input:
1. First line: input number of grades (1 ≤ n ≤ 100) which n represents the number of input
2. Line 2 utill n + 1: User input(grade)

#### Output:
- The average of the grades(rounded 2 decimal palces).
- The grade classification based on the average.

### Example Test Cases

| Input                   | Output          |
| ------------------------ | --------------- |
| 1 <br /> 100 | 100.00 <br /> A |
| 5 <br /> 100 <br /> 50 <br /> 75 <br /> 90 <br /> 80 | 79.00 <br /> F |
| 90 <br /> 85 <br /> 95 | 90.00 <br /> A |

## Please use this code format to complete this problem
```
float UserInput( /*argument*/ )
{
    // your code here
}

float CalculateAverage( /*argument*/ )
{
    //your code here
}

void DisplayAverageAndGradeClassification( /*argument*/ )
{
    //your code here
}

int main()
{
    int n;
    // your code here
}

```

<!-- 
Test Case 1:
Input:
1
100
Output:
100.00
A

Test Case 2:
Input:
5
0
0
0
0
0
Output:
0.00
F

Test Case 3:
Input:
10
100
100
100
100
100
100
100
100
100
100
Output:
100.00
A

Test Case 4:
Input:
5
100
50
75
90
80
Output:
79.00
A

Test Case 5:
Input:
3
89.5
90.5
70.3
Output:
83.43
B

 -->