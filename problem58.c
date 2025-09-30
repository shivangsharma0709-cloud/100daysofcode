/*

Q58: Find the maximum and minimum element in an array.

*/


#include<stdio.h>
int main()
{
    int a[100];
    int n,max,min;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("MAXIMUM = %d \n",max);
    printf("MINIMUM = %d",min);
}
