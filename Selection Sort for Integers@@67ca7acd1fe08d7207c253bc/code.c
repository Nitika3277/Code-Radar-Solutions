void selectionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
     int minIndex = i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
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