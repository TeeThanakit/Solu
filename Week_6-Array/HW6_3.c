#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define MAX 101  // Max string length, allowing for 100 characters + null terminator

// Function to clean the string (removes special characters, spaces, and converts to lowercase)
void cleanString(char* src, char* dest) {
    int j = 0;
    for (int i = 0; src[i] != '\0'; i++) {
        if (isalpha(src[i])) {
            dest[j++] = tolower(src[i]);
        }
    }
    dest[j] = '\0';  // Null-terminate the cleaned string
}

// Function to check if two strings are anagrams
bool isAnagram(char* str1, char* str2) {
    // Character frequency array for 26 English letters
    int charCount[26] = {0};

    // Count frequency of characters in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        charCount[str1[i] - 'a']++;
    }

    // Subtract the frequency for characters in the second string
    for (int i = 0; str2[i] != '\0'; i++) {
        charCount[str2[i] - 'a']--;
    }

    // If all character frequencies are zero, they are anagrams
    for (int i = 0; i < 26; i++) {
        if (charCount[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    char str1[MAX], str2[MAX], cleanedStr1[MAX], cleanedStr2[MAX];

    // Input two strings from the user
    fgets(str1, MAX, stdin);
    fgets(str2, MAX, stdin);

    // Clean the input strings (remove spaces, special characters, and convert to lowercase)
    cleanString(str1, cleanedStr1);
    cleanString(str2, cleanedStr2);

    // Check if both cleaned strings are anagrams
    if (isAnagram(cleanedStr1, cleanedStr2)) {
        printf("The strings are anagrams");
    } else {
        printf("The strings are not anagrams");
    }

    return 0;
}
