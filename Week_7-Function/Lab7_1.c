#include <stdio.h>

int sum_divisible(int start, int end, int divisor) {
    int total_sum = 0;

    // Loop through all numbers in the range
    for (int num = start; num <= end; num++) {
        if (num % divisor == 0) {
            total_sum += num;  // Add to total sum if divisible
        }
    }

    return total_sum;
}

int main() {
    int start, end, divisor;

    // Ask user for input
    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Calculate the sum of numbers divisible by the divisor
    int result = sum_divisible(start, end, divisor);

    // Output the result
    printf("The sum of numbers between %d and %d that are divisible by %d is: %d\n", start, end, divisor, result);

    return 0;
}
