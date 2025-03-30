void fibonacciSeries(int n){
    if(n<=0){
        printf("Invalid input");
        return ;
    }
    int a=0,b=1,c;
    if(n>=1){
        return 0;
    }
    if(n>=2){
        return 1;
    }
    for(i=3;i<=n;i++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    printf("\n");
}