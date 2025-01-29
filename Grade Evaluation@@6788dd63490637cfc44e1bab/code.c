#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='A'){
        printf("Excllent");
    }
    else if(a=='B'){
        printf("Good");
    }
    else if(a=='C'){
        printf("Average");
    }
    else if(a=='D'){
        printf("Below Average");
    }
    else if(a=='F'){
        printf("Fail");
    }
    else{
        printf("Invaild grade");
    }
    return 0;
}