#include <stdio.h>

int main()
{
    int num, original, binary_digit;
    int binary = 0, reversed_binary = 0;
    int multiplier = 1;
    int temp_num, bit_count = 0;

    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input. Please enter a positive integer.");
        return 1;
    }

    original = num;

    while (original > 0)
    {
        binary_digit = original % 2;
        binary += binary_digit * multiplier;
        multiplier *= 10;
        original /= 2;
        bit_count++;
    }

    printf("%0*d\n", bit_count, binary);

    temp_num = binary;
    while (temp_num > 0)
    {
        binary_digit = temp_num % 10;
        reversed_binary = reversed_binary * 10 + binary_digit;
        temp_num /= 10;
    }

    printf("%0*d", bit_count, reversed_binary);

    return 0;
}