//area& perimeter of rectangle and area of circle
//Developer-SOHAM MALVIYA

#include<stdio.h>
 int main()
{ int b=0;
  float sum=0;
  printf("Enter length and breath of rectangle");
  scanf("%d %f",&b,&sum);
  printf("\nArea= %f perimeter= %f",b*sum,2*(b+sum));
  printf("\nEnter the radius of circle");
  scanf("%f",&sum);
  printf("\n The area of circle is %f",3.1415*sum*sum);
  return 0;
}
