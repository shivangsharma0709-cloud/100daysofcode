#include <stdio.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d", &num);
    if (num==0){printf("the number is 0");
    }
    else if (num > 0)
    { printf("the number is positive");}
    
    else{
        printf("the number is negative");}
    
    return 0;
}