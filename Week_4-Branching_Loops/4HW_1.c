// Assignment 4.1: Enhanced ATM Machine
#include <stdio.h>

int main() {
  int choice;
  float balance = 0.0, amount;

  while (1) {
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Balance: %.2f Baht\n", balance);
      break;

    case 2:
      scanf("%f", &amount);
      if (amount > 0) {
        balance += amount;
        printf("Balance: %.2f Baht\n", balance);
      } else {
        printf("Invalid deposit amount!\n");
      }
      break;

    case 3:
      scanf("%f", &amount);

      if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Balance: %.2f Baht\n", balance);
      } else if (amount > balance) {
        printf("Insufficient funds!\n");
      } else {
        printf("Invalid withdrawal amount!\n");
      }

      break;

    case 4:
      printf("Exiting program...");
      return 0;

    default:
      printf("Invalid option!\n");
      break;
    }
  }
  return 0;
}
