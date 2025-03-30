#include<stdio.h>
int feb(int a); 
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",fib(n));

}
int feb(int a){
    if(n==0 || n==1){
        if(n==0){
        return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int febf=fib(a-1);
    int febs=fib(a-2);
    int febN= febf-frbs;
    return febN;
}