#include<stdio.h>
int fib(int a); 
int main(){
    int a;
    scanf("%d",&a);
    fibN= fib();

    printf("%d",fibN());

}
int fib(int a){
    if(n==0 || n==1){
        if(n==0){
        return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int fibf=fib(a-1);
    int fibs=fib(a-2);
    int fibN= fibf+fibs;
    return fibN;
}