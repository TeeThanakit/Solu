// Assignment 3.2: Complex Pricing System with Discounts and Tax
#include <stdio.h>

int main() {
  int has_promotion, product_type;
  float price, discount = 0, final_price;

  scanf("%f", &price);
  scanf("%d", &has_promotion);
  scanf("%d", &product_type);

  if (has_promotion == 1) {
    if (product_type == 1 || product_type == 2) {
      if (price >= 5000) {
        discount = 0.25;
      } else if (price >= 2000) {
        discount = 0.15;
      } else {
        discount = 0.10;
      }
    } else {
      if (price >= 5000) {
        discount = 0.20;
      } else if (price >= 2000) {
        discount = 0.10;
      } else {
        discount = 0.05;
      }
    }
  }

  final_price = price - (price * discount);
  final_price = final_price + (final_price * 0.07);

  printf("Net price after discount and tax: %.2f Baht", final_price);

  return 0;
}
