/*

Q56: Read and print elements of a one-dimensional array.

*/

#include<stdio.h>
int main()
{
    int a[100];
    int n;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);;
    }}

