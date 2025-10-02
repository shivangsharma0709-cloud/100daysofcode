/* Q61: Search for an element in an array using linear search. */


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
    
    printf("Enter a number to be searched \n");
    scanf("%d",&num);
    
    for(int i=0; i<n; i++)
    {
        if(num==a[i])
        {
            found++;
            printf("Number %d is found at the index %d",num,i);
        }
    }
    if(found==0)
    {
        printf("-1");
    }
}
