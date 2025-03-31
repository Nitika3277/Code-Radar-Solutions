void selectionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
     int smallestIdx = i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[j];
        arr[j]=temp;
        
        }
    }

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d",arr[i]);}
        

    
    printf("\n");
}