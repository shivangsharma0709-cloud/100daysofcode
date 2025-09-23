// Q43: Write a program to check if a number is a strong number.//
#include<stdio.h>
int main()
{
    int num,r,sum=0;
    int fact=1;
    printf("Enter a number \n");
    scanf("%d",&num);
    int temp=num;
    while(temp>0)
    {
        r=temp%10;
        fact=1;
        for(int i=1; i<=r; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is a strong number ",num);
    }
    else
    {
        printf("%d is not a strong number",num);
    }
}