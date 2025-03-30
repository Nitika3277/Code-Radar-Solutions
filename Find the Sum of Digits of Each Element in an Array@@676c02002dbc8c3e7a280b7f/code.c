#include <stdio.h>
int sum_of_digits(int num) {
    int sum = 0;
    num = (num < 0) ? -num : num;
    while (num > 0) {
        sum += num % 10;  
        num /= 10;         // Remove the last digit from the number
    }
    
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("%d \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d",sum_of_digits(arr[i]));
    }
    return 0;
}
