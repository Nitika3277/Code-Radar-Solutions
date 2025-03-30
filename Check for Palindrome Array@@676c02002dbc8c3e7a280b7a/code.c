#include<stdio.h>
int PalindromCheck(int arr[], int n){
    for(i=0;i<n;i++){
        if(arr[i]!=arr[n-i- 0;1]){
            return
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