/*Program to check whether triangle is isosceles, equilateral,scalene or right angle*/
/*Developer- SOHAM MALVIYA*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ int a,b,c;
printf("Enter three sides of triangle");
scanf("%d %d %d",&a,&b,&b);
if((a==b)&&(a==c)&&(c==a))
{
  printf("\nThe triangle is EQUILATERAL");
  exit(0);
}
  if(a!=b&&b!=c&&c!=a)
  {
  printf("\nThe triangle is SCALENE");
   exit(0);
  }
if(a==b||b==c||c==a)
{   printf("\nThe triangle is ISOSCELES");
     exit(0);
}

if((pow(a,2)==pow(b,2)+pow(c,2))||(pow(b,2)==pow(a,2)+pow(c,2))||(pow(c,2)==pow(b,2)+pow(a,2)))
{  printf("\nTriangle is RIGHT-ANGLE TRIANGLE");
    if(a==b||(b==c)||(c=a))
    printf("\nThe triangle is isosceles RIGHT-ANGLE-TRIANGLE");
     exit(0);
}

return 0;
}
