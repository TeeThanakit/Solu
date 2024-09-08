#include <stdio.h>
#include <math.h>

int main() {
    int number, shift;

    scanf("%d", &number);
    scanf("%d", &shift);

    // Count the number of digits in the number
    int num = number;
    int numDigits = 0;
    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    // Handle the case where the shift amount is greater than the number of digits
    shift = shift % numDigits;
    

    // Calculate divisor and multiplier
    int divisor = pow(10, shift);
    int multiplier = pow(10, numDigits - shift);

    // Split the number into two parts
    int rightPart = number % divisor;              // Last 'shift' digits
    int leftPart = number / divisor;               // Remaining digits

    // Combine the two parts in shifted order
    int result = rightPart * multiplier + leftPart;

    // Print the result
    printf("%d", result);

    return 0;
}
