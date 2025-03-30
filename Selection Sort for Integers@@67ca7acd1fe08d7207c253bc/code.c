void selectionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        n = i;
        for (j=i+1;j<n;j++){
            if(arr[j]<arr[n]){
                n=j;
            }
        }
        if(n!=i){
            int temp =arr[j];
            arr[j]= arr[n];
            arr[n]=temp;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}