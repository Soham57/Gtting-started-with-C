/*To determine youngest of three. Developer- SOHAM MALVIYA*/
#include<stdio.h>
int main()
{ int rm,sal,jo;
printf("Enter the ages of Ram , Saleem & John");
scanf("%d %d %d",&rm,&sal,&jo);
if((rm<sal)&&(rm<jo))
printf("\nRam is youngest");
if((sal<rm)&&(sal<jo))
printf("\nSaleem is youngest");
else
printf("\nJohn is youngest");
return 0;
}
