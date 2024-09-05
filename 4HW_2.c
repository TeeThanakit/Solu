// Assignment 4.2: Hourglass Drawing
#include <stdio.h>

int main() {
    int num, fprt, secprt, i, j, k, l;
    scanf("%d", &num);
    
    if (num > 0) {
        if (num % 2 == 0) {
            fprt = num / 2;
            // Print the top part of the pattern
            for (i = 1; i <= fprt; i++) {
                for (j = 1; j < i; j++) {
                    printf(" ");
                }
                for (j = 0; j <= fprt - i; j++) {
                    printf("*");
                }
                for (j = 0; j <= fprt - i; j++) {
                    printf("*");
                }
                printf("\n");
            }
            // Print the bottom part of the pattern
            secprt = num / 2;
            for (k = 1; k <= secprt; k++) {
                for (l = 1; l <= secprt - k; l++) {
                    printf(" ");
                }
                for (l = 1; l <= k; l++) {
                    printf("*");
                }
                for (l = 1; l <= k; l++) {
                    printf("*");
                }
                printf("\n");
            }
        } else {
            fprt = num / 2 + 1;
            // Print the top part of the pattern
            for (i = 1; i <= fprt; i++) {
                for (j = 1; j < i; j++) {
                    printf(" ");
                }
                for (j = 0; j <= fprt - i; j++) {
                    printf("*");
                }
                for (j = 1; j <= fprt - i; j++) {
                    printf("*");
                }
                printf("\n");
            }
            // Print the bottom part of the pattern
            secprt = num / 2;
            for (k = 1; k <= secprt; k++) {
                for (l = 1; l <= secprt - k; l++) {
                    printf(" ");
                }
                for (l = 0; l <= k + 1; l++) {
                    printf("*");
                }
                for (l = 1; l < k; l++) {
                    printf("*");
                }
                printf("\n");
            }
        }
    } else {
        printf("The input is invalid\n");
    }

    return 0;
}
