//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main(){
    char ch;
    printf("enter character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("it is an uppercase alphabet");}
        else if(ch>='a' && ch<='z'){
            printf("it is a lowercase alphabet");}
            else if(ch>='0' && ch<='9')
            {printf("it is a digit");}
            else {
            printf("it is a special character");}
        
    
}