/*Program to add first and last digit of entered positive number
Developer-SOHAM MALVIYA*/

#include<stdio.h>
int main()
{
  int num,sum=0,i=0;
  printf("Enter a number to obtain sum of its first and last digit");
  scanf("%d",&num);
  i=num;
  sum+=i%10;                                /*last digit*/
  while(10<i)
  {
      i/=10;                                /*first digit*/

  }
  sum+=i;

  if(num<10)
    {sum=num;                               /*single digit number*/
     }

  printf("\n The sum of first and last digit of number=%d",sum);
  return 0;
}
