//Program to reverse digits of any number

#include<stdio.h>

int main()
{
 int num,i=0,j=0,rev=0;

 printf("Enter any number to reverse its digits");
 scanf("%d",&num);
 i=num;
 while(i!=0)
  {
      i/=10;
      j++;
  }
 i=j;
 for(j=1;j<=i;j++)
 {
     rev+=num%10;
     num/=10;
     rev*=10;

 }
 rev/=10;
   if(i>8)
 {     printf("\nSorry!! Out of RANGE");

 }

  else
   {
 printf("\nThe REVERSED number is %d",rev);
   }
}
