//Write a program to input a character and check whether it is a vowel or consonant using if–else.



#include <stdio.h>
int main() {
    char alphabet;
    printf("enter alphabet: ");
    scanf(" %c", &alphabet); 

    if (alphabet =='a'|| alphabet =='e'|| alphabet =='i'|| alphabet =='o'|| alphabet =='u'||
        alphabet =='A'|| alphabet =='E'|| alphabet =='I'|| alphabet =='O'|| alphabet =='U') {
        printf("the alphabet is a vowel");
    } else {
        printf("the alphabet is a consonant");
    }
    return 0;
}