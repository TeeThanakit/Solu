// Assignment 4.2: Hourglass Drawing
#include <stdio.h>

int main() {
  int num, part_1, part_2, i, j, k, l;
  scanf("%d", &num);

  if (num > 0) {
    if (num % 2 == 0) {
      part_1 = num / 2;
      // Print the top part of the pattern
      for (i = 1; i <= part_1; i++) {
        for (j = 1; j < i; j++) {
          printf(" ");
        }

        for (j = 0; j <= part_1 - i; j++) {
          printf("*");
        }

        for (j = 0; j <= part_1 - i; j++) {
          printf("*");
        }

        printf("\n");
      }
      // Print the bottom part of the pattern
      part_2 = num / 2;

      for (k = 1; k <= part_2; k++) {
        for (l = 1; l <= part_2 - k; l++) {
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
      part_1 = num / 2 + 1;
      // Print the top part of the pattern
      for (i = 1; i <= part_1; i++) {
        for (j = 1; j < i; j++) {
          printf(" ");
        }

        for (j = 0; j <= part_1 - i; j++) {
          printf("*");
        }

        for (j = 1; j <= part_1 - i; j++) {
          printf("*");
        }

        printf("\n");
      }
      // Print the bottom part of the pattern
      part_2 = num / 2;

      for (k = 1; k <= part_2; k++) {
        for (l = 1; l <= part_2 - k; l++) {
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
