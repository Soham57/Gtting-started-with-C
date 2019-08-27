/*Program to apply university rules when a is main subject & b is subsidiary. Developer-SOHAM MALVIYA*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  float a,b;
  printf("Enter percent scored in subject A & B");
  scanf("%f %f",&a,&b);
  if((a>=55)&&(b>=45))
  { printf("\nYou have qualified for degree");
     exit(0);
  }
  if(((a>=45)&&(a<55))&&(b>=55))
  { printf("\nYou have qualified for degree");
     exit(0);
  }
  if((a<45)&&(b<45))
    {
        printf("\nYou have to reapper in subject B to qualify");
       exit(0);
    }
printf("\nYou have failed");
return(0) ;
}

