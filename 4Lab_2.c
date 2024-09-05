// Lab 4.2: Palindrome
#include <stdio.h>

int main(){
    int input, palin = 0, mod, num;

    scanf("%d", &input);

    if (input < 0) {
        printf("Negative value is not considered a palindrome.");
        return 0;
    }

    num = input;
    while (num != 0) {
        mod = num % 10;
        palin = (palin * 10) + mod;
        num /= 10;
    }

    if (palin == input) {
        printf("%d is a palindrome.", input);
    } else {
        printf("%d is not a palindrome.", input);
    }

    return 0;
}
