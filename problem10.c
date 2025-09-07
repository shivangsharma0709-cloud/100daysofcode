//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
#include <math.h> 
int main(){int hours, minutes, seconds , time_seconds;
printf("enter time:\n");
scanf("%d",&time_seconds);
hours = time_seconds / 3600;
minutes = (time_seconds % 3600 )/60;
seconds = time_seconds % 60;
printf("time in hours:minutes:seconds is %d:%d:%d\n",hours,minutes,seconds);
return 0;}