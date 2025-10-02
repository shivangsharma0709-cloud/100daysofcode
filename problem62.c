/* Q62: Reverse an array without taking extra space.*/


#include<stdio.h>
int main()
{
    int a[100];
    int n;
    int num,found=0;
    printf("Enter a limit \n");
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The normal array \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("The reverse array \n");
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}
 