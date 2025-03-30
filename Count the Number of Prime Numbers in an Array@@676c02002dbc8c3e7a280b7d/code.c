#include<stdio.h>
int isPrime(int arr[],int n){
    if(n<=0){
        return 0;
    }
    for(int i=2;i*i;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int Primecount=0;
    for(int i=0;i<n;i++){
      if (isPrime(arr[i])){
        Primecount++;
      }
    }
    printf(Primecount);
}
