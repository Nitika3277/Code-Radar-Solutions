#include<stdio.h>
int fibonacciSeries(int n);
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    febonacciSeries(n);
    return 0;
}