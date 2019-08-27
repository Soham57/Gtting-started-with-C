/*Program to calculate and to display library fine on user. Developer-SOHAM MALVIYA*/
#include<stdlib.h>
#include<stdio.h>
int main()
{float fine=0;
 int days=0;
printf("Enter the number of days late in returning book");
  scanf("%d",&days);
if(days>=1&&days<=5)
  fine=0.5;
if(days>=6&&days<=10)
  fine=1.0;
if(days>10&&days<30)
  fine=5.0;
if(days>=30)
{ printf("\nYour library membership has been cancelled.");
  exit(0);
}
printf("\nYour library fine is %f Ruppess for %d days",fine,days);
return 0;
}
