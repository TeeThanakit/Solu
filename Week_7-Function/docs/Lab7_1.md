### Problem
Create an `int` function that takes a start number, an end number, and a divisor. The function should sum up all numbers between the start and end that are divisible by the divisor `(i.e., where number % divisor == 0)`.


### Input and Output Example

**Input:**
1. First line: The start number `(-2,147,483,646 ≤ start ≤ 2,147,483,647)`.
2. Second line: The end number `(end ≥ start)`.
3. Third line: The divisor `(2 ≤ divisor ≤ 10000)`.

**Output:**
The sum of all numbers divisible by the divisor between the start and end numbers

## Example test cases
| Input | Output |
| ----- | ------ |
| 1 <br /> 100 <br /> 2 | 2550 |
| 10 <br /> 10 <br /> 3 | 0 |
| -10 <br /> -1 <br /> 3 | -12 |

<!-- 
Test case 1
Input: 
1
100
2
Output:
2550

Test case 2
Input: 
-10
-1
3
Output:
-18

Test case 3
Input: 
1
5
10
Output:
0

Test case 4
Input: 
2
2
2
Output:
2

Test case 5
Input: 
1000000
2000000
15
Output:
1216252192

 -->