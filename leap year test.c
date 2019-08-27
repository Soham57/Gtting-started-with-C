/*Leap year test Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{
int yr=0;
printf("Enter Year");
scanf("%d",&yr);
if((yr/100>0)&&(yr%4==0))
   printf("\n%d is a leap year",yr);
else
   printf("\n%d is not a leap year",yr);

return 0;
}
