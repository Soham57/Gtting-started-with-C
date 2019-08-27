/*Implementation of insurance company rule to calculate premium. Developer-SOHAM MALVIYA*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int age,place,health,pre,pol;
  char gender=0;


  printf("Enter gender(m/f)");
  scanf("%c",&gender);
  printf("\nEnter age");
   scanf("%d",&age);
   printf("\nEnter health condition(0-poor,1-good)");
  scanf("%d",&health);
  printf("\nEnter place(0-village,1-city)");
   scanf("%d",&place);


  if(((age>25)&&(age<35))&&(place==1)&&(health==1)&&(gender=='m'||'M'))
  {
        pre=4;
        pol=200000;
        printf("\nYour premium amount %d per thousand \nMaximum policy amount= %d",pre,pol);
        exit(0);
  }

  if((gender=='f'||'F')&&((age>25)&&(age<35))&&(place==1)&&(health==1))
     {
         pre=3;
         pol=100000;
         printf("\nYour premium amount %d per thousand \nMaximum policy amount= %d",pre,pol);
         exit(0);

     }

  if((health==0)&&((age>25)&&(age<35))&&(place==0)&&(gender=='m'||'M'))
  {
      pre=6;
      pol=10000;
      printf("\nYour premium amount %d per thousand \nMaximum policy amount= %d",pre,pol);
      exit(0);
  }
printf("\nSorry you cannot be insured");
return 0;
}

