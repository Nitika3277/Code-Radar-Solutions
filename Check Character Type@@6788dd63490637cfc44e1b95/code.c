#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        if(ch=='a'|| ch=="A" || ch=="e"|| ch=="E"|| ch=="i"|| ch=="I"|| ch=="o"|| ch=="O" ch=="u"|| ch=="U" ){
        printf("Vowel");}
        else{
            printf("Consonant");
        }
    else if(isdigit(ch)){
        printf("%d",ch);
    }
    else{
        printf("Specia; Character");
    }
    return 0;
}