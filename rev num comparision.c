/*To find and compare reversed number with original one. Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{ int rev=0,i=0,j=0,num=0,u=0;
printf("Enter a number");
scanf("%d",&num);
i=num;
while(i!=0)
{ i/=10;
  j++;
}
i=num;
for(u=0;u<j;u++)
  { rev+=i%10;
    i/=10;
    rev*=10;
  }
rev=rev/10;

printf("\nThe reversed number %d",rev);
if((rev==num))
{
    printf("\nThe entered number is equal to reversed number");
}
return 0;

}
