# Lab 3.2 complex if-else

## Problem
Write a C program that calculates the net salary of an employee based on their gross salary, tax deductions, and bonuses.

## Bonus Calculation:

1. If the performance rating is 5, the employee receives a bonus of 20% of their gross salary.
2. If the performance rating is 4, the employee receives a bonus of 10% of their gross salary.
3. If the performance rating is 3, the employee receives a bonus of 5% of their gross salary.
4. If the performance rating is 2 or less, the employee does not receive a bonus.

## Tax Deduction
1. Calculate the tax amount by applying the tax rate to the gross salary.
2. Deduct the tax amount from the gross salary.

## Constraint
 employee gross salary must be a positive value
 tax rate must be a positive value
 performance rating 1 to 5

## Error message
If any input is invalid, the program should print error message and exit the program
- Invalid gross salary print **Gross salary must be positive**
- Invalid tax rate between print **Tax rate out of range**
- Invalid performance rating print **Performance rating out of range**

## Input
 - **First Line:** employee gross salary
 - **Second Line:** tax rate as a percentage (0-100)
 - **Third Line:** performance rating scale from 1 to 5 

## Output
- Net salary


## Example test case

| Input | Output |
|:-----------|:------------:|
| 5000<br>15<br>4       | 4750.00       |
| 4000<br>15.23<br>5|   4190.80 |
| -3000    | Gross salary must be positive      |
| 3000<br>101 | Tax rate out of range|
| 5000<br>5<br>0| Performance rating out of range |
