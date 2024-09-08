#include <stdio.h>

int main() {
    int h;

    // Input: Prompt the user to enter the height of the pyramid
    
    scanf("%d", &h);
    if(h < 0){
        printf("Invalid input");
        return 0;
    }

    // Loop for each row
    for (int i = 1; i <= h; i++) {
        // Print spaces to center the pyramid
        for (int j = 1; j <= h - i; j++) {
            printf("  "); // Print two spaces
        }

        // Print increasing numbers from 1 up to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print decreasing numbers from i-1 down to 1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
