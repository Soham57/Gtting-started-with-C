//swapping using 2 variables
//Developer-SOHAM MALVIYA
#include<stdio.h>
int main()
{ int a,b;
printf("Enter two numbers a&b to be swappped");
scanf("%d %d",&a,&b);
a+=b;
b=a-b;
a-=b;
printf("\n The swapped numbers are a=%d b=%d",a,b);

}
