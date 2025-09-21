
//Q39: Write a program to find the product of odd digits of a number //
#include<stdio.h>
int main()
{
    int num,r,mul=1;
    printf("enter a number \n");
    scanf("%d",&num);

    while(num>0)
    {
        r=num%10;
        if( r%2!=0 )
        {
            mul=mul*r;
        }
        num=num/10;
    }

    if(mul>1)
    {
    printf("Multiple of  the odd digits is : %d",mul);
    }
    else
    {
        printf(" 1 (no odd digits, assume 1) ");
    }

    return 0;
}
