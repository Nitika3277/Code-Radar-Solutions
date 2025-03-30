#include <stdio.h>

// Function to generate the Fibonacci series up to N terms
void fibonacciseries(int n) {
    int first = 0, second = 1, next;
    
    // Special case for when n is 1
    if (n == 1) {
        printf("%d", first);
        return;
    }

    // Print the first two terms
    printf("%d %d ", first, second);

    // Calculate and print the next terms of the Fibonacci series
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
}

int main() {
    int n;

    // Read the number of terms
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Call the fibonacciseries function
    fibonacciseries(n);
    
    return 0;
}
