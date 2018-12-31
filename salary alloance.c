// gross salary
//Developer-SOHAM MALVIYA
#include<stdio.h>
int main()
{
float bs,da,hra;
printf("Enter basic salary\n");
scanf("%f",&bs);
hra=0.2*bs;
da=0.4*bs;
printf("The dearness allowance=%f\nThe house rent allowance=%f\nThe gross salary=%f",da,hra,(bs+da+hra));
return 0;
}
