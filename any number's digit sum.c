/* to calculate sum of digits of entered number Developer-SOHAM MALVIYA*/

#include<stdio.h>
int main()
{int num=0,sum=0,i,j=0;
printf("Enter a number");
scanf("%d",&num);
i=num;

while(i!=0)
   {
       i/=10;
      j++;
   }
 i=j-1;

 for(j=1;j<=i;j++)
  {
      sum+=num%10;
      num/=10;
  }
   sum+=num;
   if(i>=9)
 {     printf("\nSorry!! Out of RANGE");

 }

  else
   {  printf("\nSUM=%d",sum);
   }


 return 0;
}
