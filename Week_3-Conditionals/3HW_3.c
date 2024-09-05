// Assignment 3.3: Grade Calculation System
#include <stdio.h>

int main() {
  float score;

  scanf("%f", &score);

  if (score < 0 || score > 100) {
    printf("Invalid score!");
  } else {
    if (score >= 90) {
      printf("A");
    } else if (score >= 85) {
      printf("B+");
    } else if (score >= 80) {
      printf("B");
    } else if (score >= 75) {
      printf("C+");
    } else if (score >= 70) {
      printf("C");
    } else if (score >= 65) {
      printf("D+");
    } else if (score >= 60) {
      printf("D");
    } else {
      printf("F");
    }
  }
  return 0;
}
