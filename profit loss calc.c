/*Program to calculate profit or loss when cp & sp is entered Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{
float cp,sp;
printf("Enter selling price & cost price");
scanf("%f %f",&sp,&cp);
if(sp>cp)
printf("\nYou have made profit=%f",sp-cp);

if(cp>sp)
    printf("\nYou have incurred loss=%f",cp-sp);

if(cp==sp)
    printf("\nYou have made no profit and no loss");
return 0;
}
