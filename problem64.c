/* Q64: Find the digit that occurs the most times in an integer number. */

#include <stdio.h>
int main()
{
    int n,d=0,i=0,c=0,freq,max=0,num;
    printf("Enter value: ");
    scanf("%d",&n);
    int arr[100];

    while(n>0)
    {
       d=n%10;
       arr[i]=d;
       n=n/10;
       i++;
       c++;
    }

    for(int j=0;j<c;j++)
    {
        freq=0;
        for(int k=0;k<c;k++)
        {
            if(arr[j]==arr[k])
            {
               freq++;
            }
        }
        if(freq>max)
        {
            num=arr[j];
            max=freq;
        }
    }
    printf("The digit that occurs the most %d ",num);
    return 0;
}
