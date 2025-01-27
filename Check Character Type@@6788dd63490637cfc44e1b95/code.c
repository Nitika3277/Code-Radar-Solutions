#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        if(ch=='a'|| ch=='A' || ch=='e'|| ch=='E'|| ch=='i'|| ch=='I'|| ch=='o'|| ch=='O'|| ch=='u'|| ch=='U'){
        printf("Vowel");}
        else{
            printf("Consonant");
        }
    }
    else{
        if(ch>='0' && ch<='9'){
            printf("Digit");
        }
        else{
            printf("Special character");
        }

    }
   
    return 0;
}