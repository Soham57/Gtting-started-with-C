/*Program to determine whether the entered number is EVEN or ODD. Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{ int num;
printf("Enter a number");
scanf("%d",&num);
if(num%2==0)
    printf("\n%d is an even number",num);
else
    printf("\n%d is an odd number",num);
return 0;
}
