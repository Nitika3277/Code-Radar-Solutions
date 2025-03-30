// Your code here...#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;
    
    // Handling negative numbers by taking the absolute value
    num = (num < 0) ? -num : num;

    // Loop to extract and add digits
    while (num > 0) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;         // Remove the last digit from the number
    }
    
    return sum;
}

int main() {
    int n;
    
    // Read the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate and print the sum of digits for each element
    printf("Sum of digits for each element in the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", arr[i], sum_of_digits(arr[i]));
    }
    
    return 0;
}
