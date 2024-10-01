#include <stdio.h>

void moveZerosToLeft(int arr[], int n) {
    int temp[n];  // Temporary array to store non-zero elements
    int index = 0;

    // Collect non-zero elements in the temporary array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index++] = arr[i];
        }
    }

    // Fill the remaining elements in the array with zeros from the left
    for (int i = 0; i < n - index; i++) {
        arr[i] = 0;
    }

    // Copy back the non-zero elements
    for (int i = n - index, j = 0; i < n; i++, j++) {
        arr[i] = temp[j];
    }
}

void moveZerosToRight(int arr[], int n) {
    int temp[n];  // Temporary array to store non-zero elements
    int index = 0;

    // Collect non-zero elements in the temporary array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index++] = arr[i];
        }
    }

    // Copy back the non-zero elements
    for (int i = 0; i < index; i++) {
        arr[i] = temp[i];
    }

    // Fill the remaining elements in the array with zeros from the right
    for (int i = index; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int n, mode;


    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input: Array elements
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &mode);

    // Process the array based on the selected mode
    if (mode == 1) {
        moveZerosToLeft(arr, n);
    } else if (mode == 2) {
        moveZerosToRight(arr, n);
    } else {
        printf("Invalid mode! Please enter 1 or 2.\n");
        return 1; // Exit the program due to invalid input
    }

    // Output: Modified array
    printf("Modified Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
