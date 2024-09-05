// Assignment 4.3: Prime number
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  int a, b;
  scanf("%d %d", &a, &b);

  long long sum = 0;
  int i = a;

  while (i <= b) {
    // Check if i is prime
    bool isPrime = true;
    if (i < 2) {
      isPrime = false;
    } else {
      int j = 2;

      while (j <= i / 2) {
        if (i % j == 0) {
          isPrime = false;

          break;
        }

        j++;
      }
    }

    bool isContainThree = true;
    int number = i;
    while (number > 0) {
      if (number % 10 == 3) {
        isContainThree = false;
        break;
      }
      number /= 10;
    }

    if (isPrime && isContainThree) {
      sum += i;
    }

    i++;
  }

  printf("%lld\n", sum);

  return 0;
}
