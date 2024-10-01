# Lab 6.3 : Letters counting Vowels and Consonants

### Problem

Create a program to count the number of Vowels (A,E,I,O,U) and Consonants in the given string. The string can mix between uppercase and lowercase.

**Hint:**

Try to approch this as a array of character, you can use strlen("your string") for outputing the length of the string

```
#include<string.h> // for include the string library
.
.
	char str[] = "Hello";
	int size = strlen(str);
```

### Input

The input consisting of 1 line

- **First line:** 1 String value without spaces, length between 1-100 letters.

### Output

The input consisting of 2 lines

- A message "Vowels: " follow by number of Vowels in the input string
- A message "Consonants: " follow by number of Consonants in the input string

### Example

| Input   | Output                        |
| ------- | ----------------------------- |
| anagram | Vowels: 3<br /> Consonants: 4 |
| Ice     | Vowels: 2<br />Consonants: 1  |

### Testcase

1. Example 1
2. Example 2
3. All Vowels
4. Uppercase mixed with lowercase
5. Long word
