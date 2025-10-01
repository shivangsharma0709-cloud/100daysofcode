/*

Q60: Count positive, negative, and zero elements in an array.

*/

#include<stdio.h>
int main()
{
    int a[100];
    int n,positive=0,negative=0,zero=0;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
       if(a[i]==0)
       {
           zero++;
       }
       else if(a[i]<0)
       {
           negative++;
       }
       else
       {
           positive++;
       }
    }
    printf("POSITIVE = %d \n",positive);
    printf("NEGATIVE = %d \n",negative);
    printf("ZEROS = %d",zero);
}
