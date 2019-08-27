/*worker's efficiency. Developer-SOHAM MALVIYA*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
 float hour;
 printf("Enter time taken by worker to complete the job");
 scanf("%f",&hour);
 if(hour<3)
 {
 printf("\nThe worker is highly efficient");
      exit(0);
 }
 if((3<hour)&&(hour<4))
 {
  printf("\nThe worker is ordered to improve speed");
          exit(0);
 }
 if((4<hour)&&(hour<5))
 {
     printf("\nThe worker must be given training to improve speed");
         exit(0);
 }
if(hour>5)
{
    printf("\nThe worker has to leave the company");
               exit(0);
}
return 0;
}
