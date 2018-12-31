//percentage calculator when marks of 5 different subject are input through keyboard
//Developer-SOHAM MALVIYA

#include<stdio.h>
 int main()
{
   float agg=0,sub=0;
   int i=1;
   while(i<=5)
{
   printf("\n Enter %d subject marks",i);
   scanf("%f",&sub);
   if(sub<=100)
    agg+=sub;
   if(sub>100)
   {printf("\n Invalid Entry!!");
         continue;}
    ++i;
}
     if(i==6)
     printf("\nThe Aggregated Marks =%f\nPercentage Obtained=%f",agg,agg/5);

   return 0;
}
