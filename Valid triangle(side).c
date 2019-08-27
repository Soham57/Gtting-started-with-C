/*Program to check whether entered triangle is valid or not, triangle is valid if sum of two side will be greater than largest of 3*/
/*Developer-SOHAM MALVIYA*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int a,b,c;
 printf("Enter three  sides of triangle");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b&&a>c)
     { c+=b;
      if(c>a)
      printf("\nTriangle is valid");
      exit(0);
     }
 if(b>a&&b>c)
    { a+=c;
     if(a>=b)
     printf("\nTriangle is valid");
     exit(0);
    }
 if(c>a&&c>b)
   {a+=b;
    if(a>=c)
    printf("\nTriangle is valid");
   exit(0);
   }
   if(a==c||a==b)
    {
     if(2*a==c+b)
     printf("\nTriangle is valid");
           exit(0);
    }


printf("\nTriangle is not valid");
return 0;
}
