/*

Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

*/


#include<stdio.h>
int main()
{
    int n;
    printf("Enter tha number of rows \n");
    scanf("%d",&n);

   for(int i=1; i<=n ; i++)                //  for loop for the rows 
    {
        for(int j=1; j<=n-i; j++)           // loop  for spaces from left to right
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)           
        {
            printf("* ");
        }
        for(int j=1; j<=n-i; j++)          // loop to print the spaces  
        {
            printf(" ");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)             // print the reverse of the first loop 
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
