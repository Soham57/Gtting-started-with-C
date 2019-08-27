/*Program to test whether a triangle is valid or not. Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{
 int angle,sum,i;
 for(i=1;i<=3;i++)
 {printf("Enter the %d angle of triangle",i);
 scanf("%d",&angle);
 sum+=angle;
 }
if((sum<180)||(sum>180))
printf("\nThe triangle is not valid");
if(sum==180)
printf("\nThe triangle is valid");
return 0;
}
