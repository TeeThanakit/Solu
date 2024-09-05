// Assignment 4.4: Number Conversion
#include <stdio.h>

int main() {
    int num, choice;

    scanf("%d", &num);

    scanf("%d", &choice);
    if (num == 0) {
        if (choice == 1) {
            printf("0");
        } else if (choice == 2) {
            printf("0");
        } else if (choice == 3) {
            printf("0");
        }
    } else {
        if (choice == 1) {
            // Binary conversion
            int highestPower = 1;
            while (highestPower <= num) {
                highestPower *= 2;
            }
            highestPower /= 2;

            while (highestPower > 0) {
                if (num >= highestPower) {
                    printf("1");
                    num -= highestPower;
                } else {
                    printf("0");
                }
                highestPower /= 2;
            }
            printf("\n");

        } else if (choice == 2) {
            // Octal conversion
            int highestPower = 1;
            while (highestPower <= num) {
                highestPower *= 8;
            }
            highestPower /= 8;

            while (highestPower > 0) {
                int digit = num / highestPower;
                printf("%d", digit);
                num -= digit * highestPower;
                highestPower /= 8;
            }
            printf("\n");

        } else if (choice == 3) {
            // Hexadecimal conversion
            int highestPower = 1;
            while (highestPower <= num) {
                highestPower *= 16;
            }
            highestPower /= 16;

            while (highestPower > 0) {
                int digit = num / highestPower;
                if (digit < 10) {
                    printf("%d", digit);
                } else {
                    printf("%c", 'A' + digit - 10);
                }
                num -= digit * highestPower;
                highestPower /= 16;
            }
            printf("\n");
        } else {
            printf("Invalid Choice");
        }
    }

    return 0;
}
