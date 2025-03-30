#include<stdio.h>
int fib(int a); 
int main(){
    int a;
    scanf("%d",&a);
    fib(n);
    return 0;

}
int fib(int a){
    if(a==0 || a==1){
        if(a==0){
        return 0;
        }
        if(a==1){
            return 1;
        }
    }
    int fibf=fib(a-1);
    int fibs=fib(a-2);
    int fibN= fibf+fibs;
    printf("%d\n",fibN);
}