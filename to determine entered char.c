/*Program to check whether entry through keyboard is capital,small case,a digit,a special symbol. Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{
  int a;
  printf("Enter a character");
  scanf("%c",&a);
  if((a>64)&&(a<91))
  {printf("\n%c is capital alphabet",a);
  }
  if((a>96)&&(a<123))
  {printf("\n%c is small alphabet",a);
  }
  if((a>47)&&(a<58))
  {printf("\n%c is a digit",a);
  }
  if(((a>=0)&&(a<48))||((a>57)&&(a<65))||((a>90)&&(a<97))||((a>122)&&(a<128)))
  {printf("\n%c is a special character",a);
  }
  return 0;

}
