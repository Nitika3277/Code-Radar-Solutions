#include<stdio.h>
int PalindromCheck(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            return 0;
        }
    }return 1;
}
 int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if (PalidromeCheck(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }return 0;

 }