
//Q35: Write a program to print all factors of a given number.//
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    printf("Factors of number %d=",num);
    for(int i=1 ; i<=num ; i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
