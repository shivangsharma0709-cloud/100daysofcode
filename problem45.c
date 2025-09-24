// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. //

#include<stdio.h>
int main()
{
    float sum=0.0;
    int n;
    printf("Enter a limit \n");
    scanf("%d",&n);
    int i=2,j=3;
    for(int k=1; k<=n ; i=i+2, j=j+4, k++)
    {   
        sum=sum+((float)i/j);
    }
    printf("Approximate sum: %.1f",sum);
}