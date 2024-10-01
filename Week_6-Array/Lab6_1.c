#include <stdio.h>

int main() {
    int n;

    // Prompt the user for the size of the array
    scanf("%d", &n);

    if(n < 0){
        printf("Invalid Input");
        return 0;
    }

    // Declare an array of size n
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array in the order it was entered
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print the array in reverse order
    printf("Reversed Array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
