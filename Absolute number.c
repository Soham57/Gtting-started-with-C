/*Program to find absolute number. Developer-SOHAM MALVIYA */
/*Absolute number is a number irrespective of its sign original value*/
#include<stdio.h>
int main()
{int num;
printf("Enter a number");
scanf("%d",&num);
if(num<0)
num*=-1;
printf("\nThe absolute number is %d",num);
return 0;
}
