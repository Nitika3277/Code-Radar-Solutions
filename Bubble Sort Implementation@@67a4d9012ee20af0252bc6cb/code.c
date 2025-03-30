
void bubbleSort(int arr[], int n) {
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
            swap(arr[j],arr[j+1]);
              }
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}