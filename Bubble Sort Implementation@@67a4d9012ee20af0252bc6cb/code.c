#include<stdio.h>
void bubblesort(int arr[],int n){
    for (int i=0;i<n-1,i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr,i,j);
        }}}
        int main(){
            int n;
            scanf("%d",&n);
            int arr[n];
            for (int i =0;i<n,i++){
                scanf("%d",&arr[i]);
            }
            bubblesort(arr,n);
            return 0;
        }
