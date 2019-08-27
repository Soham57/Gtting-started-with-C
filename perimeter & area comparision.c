/*To find area & perimeter of rectangle and to compare them. Developer-SOHAM MALVIYA */
#include<stdio.h>
int main()
{
 int x,y,area,perimeter;
  printf("\nEnter length & breath of rectangle");
  scanf("%d %d",&x,&y);
  area=x*y;
  perimeter=2*(x+y);
  printf("\nAREA=%d\nPerimeter=%d",area,perimeter);
  if(area>perimeter)
  printf("\nThe area is greater than perimeter");
  else
  printf("\nThe area is smaller perimeter");
  if(perimeter==area)
    printf("\nThe area and perimeter are equal");

 }
