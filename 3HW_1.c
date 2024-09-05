// Assignment 3.1: Simple Vending Machine
#include <stdio.h>

int main() {
    int choice;
    float moneyInserted, price;

    scanf("%d", &choice);

    scanf("%f", &moneyInserted);

    if (choice == 1) {
        price = 7.0;
    } else if (choice == 2) {
        price = 13.0;
    } else if (choice == 3) {
        price = 20.0;
    } else {
        printf("Invalid choice!");
        return 1;
    }

    if (moneyInserted >= price) {
        printf("Dispensing your drink: ");
        if(choice == 1){
            printf("Water\n");
        }else if(choice == 2){
            printf("Soda\n");
        }else if(choice == 3){
            printf("Juice\n");
        }
        if (moneyInserted > price) {
            printf("Here is your change: %.2f", moneyInserted - price);
        }else{
            printf("No change");
        }
    } else {
        printf("Insufficient funds");
    }

    return 0;
}
