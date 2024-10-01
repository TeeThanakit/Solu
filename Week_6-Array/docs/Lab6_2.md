
# Lab 6.2: Array Max & Min

You are tasked with creating a program that calculates the maximum and minimum values from a list of integers entered by the user. The program should handle an array of integers, find the largest and smallest values, and then display these values.

## Requirements

1. **Input**: The first line of input is an integer `n`, which indicates the number of integers to be processed. This is followed by `n` integers, each on a new line.
2. **Output**: The program should output the maximum and minimum values from the provided integers.

## Additional Requirements
- The program should handle cases where the array has only one element.
- If `n` is less than 1, the program should display an error message `"Invalid input!"` and exit.

## Example

| Input                        | Output                              |
|------------------------------|-------------------------------------|
| 5<br />10<br />15<br />7<br />20<br />3  | Maximum element: 20<br />Minimum element: 3 |
| 3<br />12<br />-5<br />7     | Maximum element: 12<br />Minimum element: -5 |
| 1<br />9                    | Maximum element: 9<br />Minimum element: 9 |
| 0                          | Invalid input!                       |
| -5                         | Invalid input!                       |

### Explanation

1. **Input: 5<br />10<br />15<br />7<br />20<br />3**
   - **Output:** `Maximum element: 20 Minimum element: 3`
   - **Explanation:** The user inputs 5 integers. The maximum value is 20, and the minimum value is 3.

2. **Input: 3<br />12<br /> -5<br />7**
   - **Output:** `Maximum element: 12 Minimum element: -5`
   - **Explanation:** The user inputs 3 integers. The maximum value is 12, and the minimum value is -5.

3. **Input: 1<br />9**
   - **Output:** `Maximum element: 9 Minimum element: 9`
   - **Explanation:** The user inputs only 1 integer, so both maximum and minimum values are 9.

4. **Input: 0**
   - **Output:** `Invalid input!`
   - **Explanation:** The user inputs 0 as the number of integers, which is invalid.

5. **Input: -5**
   - **Output:** `Invalid input!`
   - **Explanation:** The user inputs a negative number for the count of integers, which is invalid.

This problem will test your ability to handle array operations, including finding maximum and minimum values while managing edge cases such as invalid input.
