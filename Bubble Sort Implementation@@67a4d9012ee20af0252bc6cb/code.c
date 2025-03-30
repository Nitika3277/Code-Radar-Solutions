#include<stdio.h>
void bubblesort(int arr[],int n){
    for (i=0;i<n-1,i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr,i,j);
        }}}
        void printArray(int arr[],int n, int i,int j){
            int temo=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        int main(){
            int n;
            scanf("%d",&n);
            int arr[n];
            for (i=0;i<n,i++){
                scanf("%d",&arr[i]);
            }
            bubblesort(arr,n);
            printArray(arr,n);
            return 0;
        }
