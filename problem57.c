/*

Q57: Find the sum of array elements.

*/

#include<stdio.h>
int main()
{
    int a[100];
    int n,sum=0;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("SUM = %d",sum);
}
