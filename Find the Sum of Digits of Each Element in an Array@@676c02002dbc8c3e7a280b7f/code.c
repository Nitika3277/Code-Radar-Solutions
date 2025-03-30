#include<stdio.h>
int sum_of_digit(int n){
    int sum=0;
    n=(n<0) ? -n:n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    retun sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d",sum_of_digit(arr[i]));
    }
    return 0;
}