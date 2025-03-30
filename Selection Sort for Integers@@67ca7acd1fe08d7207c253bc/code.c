void selectionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        j+1 = i;
        for (int j =i+1;j<n;j++){
            if(arr[j]<arr[n]){
                j+1=j;
            }
        }
        if(n!=i){
            int temp =arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}