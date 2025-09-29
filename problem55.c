/*
Q55: Write a program to print all the prime numbers from 1 to n.
*/



#include<stdio.h>
int main()
{
    int n,ctr;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {   ctr=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                ctr++;
            }
        }
        if(ctr==2)
            {
                printf("%d ",i);
            }
    }
    return 0;
}
