int selectionSort(inr arr[],int n){
    for(int i=0;i<=n-1;i++){
        minIndex = i;
        for (j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            int temp =arr[j];
            arr[j]= arr[minIndex];
            arr[minIndex]=temp;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}