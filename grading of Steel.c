/*Program to classify steel acc. to its category. Developer- SOHAM MALVIYA*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int hrd,ten;
float cc;
printf("Enter the hardness, Tensile strength, Carbon content of steel");
scanf("%d %d %f",&hrd,&ten,&cc);
if(hrd>50&&cc<0.7&&ten>5600)
    {
        printf("\nGrade=10");
        exit(0);
    }
if((hrd>50)&&(cc<0.7))
     {
        printf("\nGrade=9");
        exit(0);
    }
if(cc<0.7&&ten>5600)
     {
        printf("\nGrade=8");
        exit(0);
    }
if(hrd>50&&ten>5600)
     {
        printf("\nGrade=7");
        exit(0);
    }
if(hrd>50||cc<0.7||ten>5600)
    {
        printf("\nGrade=6");
        exit(0);
    }

      printf("\nGrade 5");
return 0;
}
